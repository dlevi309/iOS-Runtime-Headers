/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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
-(void)donePressed:(id)arg1 ;
-(id<WFActionSettingsViewControllerDelegate>)delegate;
-(WFAction *)action;
-(void)setDelegate:(id<WFActionSettingsViewControllerDelegate>)arg1 ;
-(NSDictionary *)definition;
-(BOOL)accessibilityPerformEscape;
-(id)initWithAction:(id)arg1 definition:(id)arg2 ;
@end

