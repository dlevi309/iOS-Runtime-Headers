/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFComposeViewController.h>

@class HMHome;

@interface WFHomeComposeViewController : WFComposeViewController {

	HMHome* _home;

}

@property (nonatomic,retain) HMHome * home;                                                        //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<WFHomeComposeViewControllerDelegate> delegate; 
+(void)preloadActionRegistryIfNeeded;
+(void)preloadHomeManager;
-(HMHome *)home;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setHome:(HMHome *)arg1 ;
-(void)didTapDone;
-(id)initWithWorkflow:(id)arg1 ;
-(id)doneBarButtonItem;
-(void)dismissForTutorial:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2 home:(id)arg3 ;
-(id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2 ;
@end

