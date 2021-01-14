/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUIWidget.framework/AppPredictionUIWidget
*/

#import <AppPredictionUIWidget/APUISuggestionView.h>
#import <libobjc.A.dylib/WFWorkflowRunnerClientDelegate.h>

@class ATXAction, UITapGestureRecognizer, WFSuggestionsWorkflowRunnerClient, NSString;

@interface APUIActionSuggestionView : APUISuggestionView <WFWorkflowRunnerClientDelegate> {

	ATXAction* _atxAction;
	UITapGestureRecognizer* _tapRecognizer;
	WFSuggestionsWorkflowRunnerClient* _workflowRunnerClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_tapRecognized:(id)arg1 ;
-(void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2 ;
-(void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)_setAppImageViewWithImage:(id)arg1 ;
-(void)_setAppImageViewWithBundleIdentifier:(id)arg1 ;
-(void)layoutSuggestion:(id)arg1 ;
@end

