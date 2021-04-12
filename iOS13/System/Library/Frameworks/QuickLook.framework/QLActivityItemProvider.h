/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(QLPreviewPrinter *)printer;
-(void)setPrinter:(QLPreviewPrinter *)arg1 ;
-(id)printInfo;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(QLItem *)activityPreviewItem;
-(id)mainItem;
-(id)_pdfPreviewDataAtURL:(id)arg1 ;
-(void)setActivityPreviewItem:(QLItem *)arg1 ;
@end

