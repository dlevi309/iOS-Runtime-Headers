/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/WFDailyRoutineShortcutSetupQuestionChildViewController.h>

@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;
@class WFDailyRoutineShortcutSetupIntroductionQuestion, NSString;

@interface WFDailyRoutineShortcutSetupIntroductionQuestionViewController : OBWelcomeController <WFDailyRoutineShortcutSetupQuestionChildViewController> {

	id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> _delegate;
	WFDailyRoutineShortcutSetupIntroductionQuestion* _question;

}

@property (assign,nonatomic,__weak) id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupIntroductionQuestion * question;                                    //@synthesize question=_question - In the implementation block
@property (nonatomic,readonly) BOOL parentShouldShowSkipButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate>)arg1 ;
-(WFDailyRoutineShortcutSetupIntroductionQuestion *)question;
-(BOOL)parentShouldShowSkipButton;
-(id)initWithQuestion:(id)arg1 ;
-(void)didSelectContinueButton;
@end

