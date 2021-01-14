/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIActivityItemSource.h>

@class QLPreviewPrinter, QLItem, NSString;

@interface QLActivityItemProvider : NSObject <UIActivityItemSource> {

	QLPreviewPrinter* _printer;
	QLItem* _activityPreviewItem;

}

@property (retain) QLPreviewPrinter * printer;                      //@synthesize printer=_printer - In the implementation block
@property (retain) QLItem * activityPreviewItem;                    //@synthesize activityPreviewItem=_activityPreviewItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(QLPreviewPrinter *)printer;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)printInfo;
-(void)setPrinter:(QLPreviewPrinter *)arg1 ;
-(id)mainItem;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(QLItem *)activityPreviewItem;
-(id)_pdfPreviewDataAtURL:(id)arg1 ;
-(void)setActivityPreviewItem:(QLItem *)arg1 ;
@end

