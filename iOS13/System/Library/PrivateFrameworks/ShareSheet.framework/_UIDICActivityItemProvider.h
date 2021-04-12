/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class UIDocumentInteractionController;

@interface _UIDICActivityItemProvider : UIActivityItemProvider {

	UIDocumentInteractionController* _documentInteractionController;

}

@property (nonatomic,__weak,readonly) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
-(id)item;
-(void)main;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(BOOL)_shouldExecuteItemOperationForActivity:(id)arg1 ;
-(id)activityViewController:(id)arg1 openURLAnnotationForActivityType:(id)arg2 ;
-(id)initWithPlaceholderItem:(id)arg1 documentInteractionController:(id)arg2 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(id)loadedURL;
@end

