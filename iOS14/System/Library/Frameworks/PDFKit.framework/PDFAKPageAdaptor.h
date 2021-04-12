/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@class PDFAKPageAdaptorPrivate, PDFPage, AKPageModelController;

@interface PDFAKPageAdaptor : NSObject {

	PDFAKPageAdaptorPrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFPage * pdfPage; 
@property (nonatomic,readonly) AKPageModelController * akPageModelController; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_teardown;
-(void)teardown;
-(PDFPage *)pdfPage;
-(void)dealloc;
-(AKPageModelController *)akPageModelController;
-(void)initializeExifAndScaleOnAnnotation:(id)arg1 ;
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

