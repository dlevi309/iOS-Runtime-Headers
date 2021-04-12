/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIInterfaceOrientationMaskOverride.h>

@class NSData, NSDate, PDFDocument, PDFView, NSString;

@interface WDElectrocardiogramPDFViewController : UIViewController <UIInterfaceOrientationMaskOverride> {

	NSData* _pdfData;
	NSDate* _sampleDate;
	PDFDocument* _pdfDocument;

}

@property (nonatomic,readonly) NSData * pdfData;                       //@synthesize pdfData=_pdfData - In the implementation block
@property (nonatomic,readonly) NSDate * sampleDate;                    //@synthesize sampleDate=_sampleDate - In the implementation block
@property (nonatomic,readonly) PDFDocument * pdfDocument;              //@synthesize pdfDocument=_pdfDocument - In the implementation block
@property (nonatomic,readonly) PDFView * pdfView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(PDFDocument *)pdfDocument;
-(NSData *)pdfData;
-(PDFView *)pdfView;
-(void)didTapDone;
-(NSDate *)sampleDate;
-(void)didTapShare;
-(unsigned long long)overrideMask;
-(id)initWithPDFData:(id)arg1 sampleDate:(id)arg2 ;
@end

