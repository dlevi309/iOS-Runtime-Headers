/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(PDFDocument *)pdfDocument;
-(NSData *)pdfData;
-(void)setPdfData:(NSData *)arg1 ;
-(id)initWithPDFData:(id)arg1 ;
-(id)pdfView;
-(void)setPdfDocument:(PDFDocument *)arg1 ;
@end

