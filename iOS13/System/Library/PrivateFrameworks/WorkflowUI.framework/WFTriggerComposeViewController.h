/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<WFTriggerComposeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFTriggerComposeViewControllerDelegate>)arg1 ;
-(unsigned long long)mode;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(id)doneBarButtonItem;
-(id)emptyStateString;
-(void)dismissForTutorial:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithWorkflow:(id)arg1 mode:(unsigned long long)arg2 database:(id)arg3 ;
-(void)didTapNext:(id)arg1 ;
@end

