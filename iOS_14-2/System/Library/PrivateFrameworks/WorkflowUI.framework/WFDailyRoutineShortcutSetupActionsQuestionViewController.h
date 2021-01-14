/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/WFDailyRoutineShortcutSetupQuestionChildViewController.h>

@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;
@class WFDailyRoutineShortcutSetupActionsQuestion, NSString;

@interface WFDailyRoutineShortcutSetupActionsQuestionViewController : OBWelcomeController <CNContactPickerDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController> {

	id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> _delegate;
	WFDailyRoutineShortcutSetupActionsQuestion* _question;

}

@property (assign,nonatomic,__weak) id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupActionsQuestion * question;                                         //@synthesize question=_question - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL parentShouldShowSkipButton; 
-(id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate>)delegate;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)setDelegate:(id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate>)arg1 ;
-(WFDailyRoutineShortcutSetupActionsQuestion *)question;
-(BOOL)parentShouldShowSkipButton;
-(id)initWithQuestion:(id)arg1 ;
-(void)didSelectSkipButton;
-(void)didSelectAddButton;
@end

