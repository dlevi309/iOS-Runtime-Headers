/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HealthUI/HKViewController.h>

@class NSData, PDFDocument;

@interface HRPDFViewController : HKViewController {

	NSData* _pdfData;
	PDFDocument* _pdfDocument;

}

@property (nonatomic,retain) NSData * pdfData;                       //@synthesize pdfData=_pdfData - In the implementation block
@property (nonatomic,retain) PDFDocument * pdfDocument;              //@synthesize pdfDocument=_pdfDocument - In the implementation block
-(PDFDocument *)pdfDocument;
-(id)pdfView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)setPdfData:(NSData *)arg1 ;
-(NSData *)pdfData;
-(id)initWithPDFData:(id)arg1 ;
-(void)setPdfDocument:(PDFDocument *)arg1 ;
@end

