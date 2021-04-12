/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class UIDocumentInteractionController;

@interface _UIDICActivityItemProvider : UIActivityItemProvider {

	UIDocumentInteractionController* _documentInteractionController;

}

@property (nonatomic,__weak,readonly) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
-(id)item;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(void)main;
-(id)activityViewController:(id)arg1 openURLAnnotationForActivityType:(id)arg2 ;
-(id)initWithPlaceholderItem:(id)arg1 documentInteractionController:(id)arg2 ;
-(id)loadedURL;
-(UIDocumentInteractionController *)documentInteractionController;
-(BOOL)_shouldExecuteItemOperationForActivity:(id)arg1 ;
@end

