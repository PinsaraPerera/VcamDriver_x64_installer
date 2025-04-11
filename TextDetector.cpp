#include "pch.h"
//#include "TextDetector.h"
//
//TextDetector::TextDetector() : m_pTesseract(nullptr) {}
//
//TextDetector::~TextDetector() {
//    Shutdown();
//}
//
//bool TextDetector::Initialize() {
//    m_pTesseract = new tesseract::TessBaseAPI();
//    if (m_pTesseract->Init(NULL, "eng")) {
//        return false;
//    }
//    m_pTesseract->SetPageSegMode(tesseract::PSM_SPARSE_TEXT);
//    return true;
//}
//
//cv::Mat TextDetector::ProcessFrame(const cv::Mat& frame) {
//    cv::Mat result = frame.clone();
//    cv::Mat gray;
//    cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);
//
//    m_pTesseract->SetImage(gray.data, gray.cols, gray.rows, 1, gray.step);
//
//    tesseract::ResultIterator* ri = m_pTesseract->GetIterator();
//    tesseract::PageIteratorLevel level = tesseract::RIL_WORD;
//
//    if (ri != nullptr) {
//        do {
//            float conf = ri->Confidence(level);
//            if (conf > 60) {
//                int x1, y1, x2, y2;
//                ri->BoundingBox(level, &x1, &y1, &x2, &y2);
//                cv::rectangle(result, cv::Point(x1, y1), cv::Point(x2, y2), cv::Scalar(0, 255, 0), 2);
//            }
//        } while (ri->Next(level));
//        delete ri;
//    }
//
//    return result;
//}
//
//void TextDetector::Shutdown() {
//    if (m_pTesseract) {
//        m_pTesseract->End();
//        delete m_pTesseract;
//        m_pTesseract = nullptr;
//    }
//}
