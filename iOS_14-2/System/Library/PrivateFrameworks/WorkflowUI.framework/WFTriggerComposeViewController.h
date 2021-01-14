/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFComposeViewController.h>

@protocol WFTriggerComposeViewControllerDelegate;
@interface WFTriggerComposeViewController : WFComposeViewController {

	id<WFTriggerComposeViewControllerDelegate> delegate;
	unsigned long long _mode;

}

@property (nonatomic,readonly) unsigned long long mode;                                               //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic,__weak) id<WFTriggerComposeViewControllerDelegate> delegate; 
-(unsigned long long)mode;
-(id<WFTriggerComposeViewControllerDelegate>)delegate;
-(void)willMoveToParentViewController:(id)arg1 ;
-(id)doneBarButtonItem;
-(void)setDelegate:(id<WFTriggerComposeViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(void)didTapNext:(id)arg1 ;
-(unsigned long long)navigationUpdateBehavior;
-(id)emptyStateString;
-(void)dismissForTutorial:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithWorkflow:(id)arg1 mode:(unsigned long long)arg2 database:(id)arg3 ;
@end

