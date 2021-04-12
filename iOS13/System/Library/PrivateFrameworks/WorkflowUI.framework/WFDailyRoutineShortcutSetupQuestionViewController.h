/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate.h>

@protocol WFDailyRoutineShortcutSetupQuestionViewControllerDelegate;
@class WFDailyRoutineShortcutSetupQuestion, NSString;

@interface WFDailyRoutineShortcutSetupQuestionViewController : UIViewController <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> {

	id<WFDailyRoutineShortcutSetupQuestionViewControllerDelegate> _delegate;
	WFDailyRoutineShortcutSetupQuestion* _question;

}

@property (assign,nonatomic,__weak) id<WFDailyRoutineShortcutSetupQuestionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupQuestion * question;                                           //@synthesize question=_question - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFDailyRoutineShortcutSetupQuestionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFDailyRoutineShortcutSetupQuestionViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(WFDailyRoutineShortcutSetupQuestion *)question;
-(id)initWithQuestion:(id)arg1 ;
-(id)selectedLocationForDailyRoutineShortcutSetupQuestionChildViewController:(id)arg1 ;
-(void)dailyRoutineShortcutSetupQuestionChildViewController:(id)arg1 didSelectActions:(id)arg2 ;
-(void)dailyRoutineShortcutSetupQuestionChildViewControllerDidSkip:(id)arg1 ;
-(void)didSelectSkip;
@end

