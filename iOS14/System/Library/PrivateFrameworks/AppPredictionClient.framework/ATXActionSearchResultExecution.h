/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/WFWorkflowRunnerClientDelegate.h>

@protocol ATXActionSearchResultExecutionDelegate;
@class SFSearchResult, WFSuggestionsWorkflowRunnerClient, NSString;

@interface ATXActionSearchResultExecution : NSObject <WFWorkflowRunnerClientDelegate> {

	SFSearchResult* _searchResult;
	id<ATXActionSearchResultExecutionDelegate> _delegate;
	WFSuggestionsWorkflowRunnerClient* _workflowRunnerClient;

}

@property (nonatomic,retain) WFSuggestionsWorkflowRunnerClient * workflowRunnerClient;                //@synthesize workflowRunnerClient=_workflowRunnerClient - In the implementation block
@property (nonatomic,retain) SFSearchResult * searchResult;                                           //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic,__weak) id<ATXActionSearchResultExecutionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SFSearchResult *)searchResult;
-(id<ATXActionSearchResultExecutionDelegate>)delegate;
-(void)setSearchResult:(SFSearchResult *)arg1 ;
-(void)setDelegate:(id<ATXActionSearchResultExecutionDelegate>)arg1 ;
-(void)executeShortcut;
-(void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2 ;
-(void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(BOOL)_delegateDoesRespond;
-(BOOL)_shouldTellDelegateToClearActionOnDismissal:(long long)arg1 ;
-(void)_spawnShortcutExecutionWithShortcut:(id)arg1 ;
-(void)setWorkflowRunnerClient:(WFSuggestionsWorkflowRunnerClient *)arg1 ;
-(WFSuggestionsWorkflowRunnerClient *)workflowRunnerClient;
@end

