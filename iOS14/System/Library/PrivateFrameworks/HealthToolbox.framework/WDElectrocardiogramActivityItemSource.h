/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKit/UIActivityItemSource.h>

@class NSURL, NSString;

@interface WDElectrocardiogramActivityItemSource : NSObject <UIActivityItemSource> {

	NSURL* _pdfTemporaryFileURL;

}

@property (nonatomic,readonly) NSURL * pdfTemporaryFileURL;              //@synthesize pdfTemporaryFileURL=_pdfTemporaryFileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(void)dealloc;
-(id)initWithPDFData:(id)arg1 sampleDate:(id)arg2 ;
-(NSURL *)pdfTemporaryFileURL;
@end

