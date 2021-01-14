/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFComposeViewController.h>

@class HMHome;

@interface WFHomeComposeViewController : WFComposeViewController {

	HMHome* _home;

}

@property (nonatomic,retain) HMHome * home;                                                        //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<WFHomeComposeViewControllerDelegate> delegate; 
+(void)preloadHomeManager;
+(void)preloadActionRegistryIfNeeded;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didTapDone;
-(id)doneBarButtonItem;
-(void)viewDidLoad;
-(void)setHome:(HMHome *)arg1 ;
-(id)initWithWorkflow:(id)arg1 ;
-(HMHome *)home;
-(id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2 home:(id)arg3 ;
-(unsigned long long)navigationUpdateBehavior;
-(void)dismissForTutorial:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2 ;
@end

