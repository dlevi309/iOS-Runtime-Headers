/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>

@protocol WFTriggerTextConfigurationViewControllerDelegate;
@class UITextField;

@interface WFTriggerTextConfigurationViewController : UIViewController {

	id<WFTriggerTextConfigurationViewControllerDelegate> _delegate;
	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * textField;                                                         //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<WFTriggerTextConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFTriggerTextConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFTriggerTextConfigurationViewControllerDelegate>)arg1 ;
-(UITextField *)textField;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
@end

