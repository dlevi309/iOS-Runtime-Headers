/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate.h>
#import <libobjc.A.dylib/WFDailyRoutineShortcutSetupQuestionChildViewController.h>

@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;
@class WFDailyRoutineShortcutSetupActionSelectionQuestion, WFActionDrawerResults, NSString;

@interface WFDailyRoutineShortcutSetupActionSelectionQuestionViewController : UITableViewController <WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController> {

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
-(void)setResults:(WFActionDrawerResults *)arg1 ;
-(WFActionDrawerResults *)results;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(WFDailyRoutineShortcutSetupActionSelectionQuestion *)question;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)parentShouldShowSkipButton;
-(id)initWithQuestion:(id)arg1 ;
-(void)siriSuggestionsTableViewCell:(id)arg1 didAppendAction:(id)arg2 ;
-(void)loadResults;
@end

