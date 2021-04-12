/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PDFDocument *)pdfDocument;
-(PDFView *)pdfView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didTapDone;
-(void)loadView;
-(NSData *)pdfData;
-(unsigned long long)overrideMask;
-(NSDate *)sampleDate;
-(id)initWithPDFData:(id)arg1 sampleDate:(id)arg2 ;
-(void)didTapShare;
@end

