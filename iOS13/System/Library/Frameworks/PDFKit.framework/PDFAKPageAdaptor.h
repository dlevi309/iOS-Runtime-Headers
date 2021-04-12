/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@class PDFAKPageAdaptorPrivate, PDFPage, AKPageModelController;

@interface PDFAKPageAdaptor : NSObject {

	PDFAKPageAdaptorPrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFPage * pdfPage; 
@property (nonatomic,readonly) AKPageModelController * akPageModelController; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)teardown;
-(void)_teardown;
-(AKPageModelController *)akPageModelController;
-(void)initializeExifAndScaleOnAnnotation:(id)arg1 ;
-(PDFPage *)pdfPage;
-(id)initWithPDFPage:(id)arg1 pageModelController:(id)arg2 ;
-(void)_startObservingPageModel;
-(void)_stopObservingPageModel;
-(void)_annotationsWereRemoved:(id)arg1 ;
-(void)_annotationsWereAdded:(id)arg1 ;
-(id)initWithPDFPage:(id)arg1 ;
-(void)pdfPage:(id)arg1 didAddAnnotation:(id)arg2 ;
-(void)pdfPage:(id)arg1 didRemoveAnnotation:(id)arg2 ;
-(void)pdfPageWasRotated:(id)arg1 ;
@end

