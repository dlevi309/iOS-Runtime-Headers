/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFActionDrawerSiriSuggestionsTableViewCellDelegate.h>
#import <libobjc.A.dylib/WFDailyRoutineShortcutSetupQuestionChildViewController.h>

@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;
@class WFDailyRoutineShortcutSetupActionSelectionQuestion, WFActionDrawerResults, NSString;

@interface WFDailyRoutineShortcutSetupActionSelectionQuestionViewController : UITableViewController <WFActionDrawerSiriSuggestionsTableViewCellDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController> {

	id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> _delegate;
	WFDailyRoutineShortcutSetupActionSelectionQuestion* _question;
	WFActionDrawerResults* _results;

}

@property (nonatomic,retain) WFActionDrawerResults * results;                                                                 //@synthesize results=_results - In the implementation block
@property (assign,nonatomic,__weak) id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupActionSelectionQuestion * question;                                 //@synthesize question=_question - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL parentShouldShowSkipButton; 
-(id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate>)arg1 ;
-(WFActionDrawerResults *)results;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setResults:(WFActionDrawerResults *)arg1 ;
-(WFDailyRoutineShortcutSetupActionSelectionQuestion *)question;
-(void)siriSuggestionsTableViewCell:(id)arg1 didSelectAction:(id)arg2 ;
-(void)siriSuggestionsTableViewCell:(id)arg1 infoButtonTappedForSuggestion:(id)arg2 ;
-(BOOL)parentShouldShowSkipButton;
-(id)initWithQuestion:(id)arg1 ;
-(void)loadResults;
@end

