/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>

@protocol WFActionSettingsViewControllerDelegate;
@class WFAction, NSDictionary;

@interface WFActionSettingsViewController : UIViewController {

	id<WFActionSettingsViewControllerDelegate> _delegate;
	WFAction* _action;
	NSDictionary* _definition;

}

@property (assign,nonatomic,__weak) id<WFActionSettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFAction * action;                                                     //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSDictionary * definition;                                             //@synthesize definition=_definition - In the implementation block
-(id<WFActionSettingsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFActionSettingsViewControllerDelegate>)arg1 ;
-(WFAction *)action;
-(NSDictionary *)definition;
-(BOOL)accessibilityPerformEscape;
-(void)donePressed:(id)arg1 ;
-(id)initWithAction:(id)arg1 definition:(id)arg2 ;
@end

