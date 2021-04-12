/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>

@protocol WFTriggerConfigurationViewControllerDelegate;
@class WFTrigger, WFTriggerManager;

@interface WFTriggerConfigurationViewController : UIViewController {

	WFTrigger* _trigger;
	id<WFTriggerConfigurationViewControllerDelegate> _delegate;
	WFTriggerManager* _triggerManager;
	unsigned long long _mode;

}

@property (nonatomic,readonly) WFTriggerManager * triggerManager;                                           //@synthesize triggerManager=_triggerManager - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                     //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) WFTrigger * trigger;                                                           //@synthesize trigger=_trigger - In the implementation block
@property (assign,nonatomic,__weak) id<WFTriggerConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFTriggerConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFTriggerConfigurationViewControllerDelegate>)arg1 ;
-(unsigned long long)mode;
-(void)finish;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(WFTrigger *)trigger;
-(void)setTrigger:(WFTrigger *)arg1 ;
-(void)dismiss:(id)arg1 ;
-(WFTriggerManager *)triggerManager;
-(id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)updateNextButtonEnabledState;
@end

