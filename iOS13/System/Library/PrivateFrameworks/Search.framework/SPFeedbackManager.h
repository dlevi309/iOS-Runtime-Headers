/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <libobjc.A.dylib/SFFeedbackListener.h>

@protocol SFFeedbackListener, OS_dispatch_queue;
@class NSObject, NSString;

@interface SPFeedbackManager : NSObject <SFFeedbackListener> {

	NSObject*<SFFeedbackListener> _feedbackListener;
	NSObject*<OS_dispatch_queue> _feedbackQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> feedbackQueue;                  //@synthesize feedbackQueue=_feedbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<SFFeedbackListener> feedbackListener;              //@synthesize feedbackListener=_feedbackListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)bumpPriorityOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)flushFeedbackWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)reportFeedback:(id)arg1 queryId:(long long)arg2 ;
-(void)searchViewDidAppear:(id)arg1 ;
-(void)searchViewDidDisappear:(id)arg1 ;
-(void)cardViewDidDisappear:(id)arg1 ;
-(void)cardViewDidAppear:(id)arg1 ;
-(void)didStartSearch:(id)arg1 ;
-(void)didEndSearch:(id)arg1 ;
-(void)didRankSections:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)didGradeResultRelevancy:(id)arg1 ;
-(void)didEngageSuggestion:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(void)didErrorOccur:(id)arg1 ;
-(void)sendCustomFeedback:(id)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(void)suggestionsDidBecomeVisible:(id)arg1 ;
-(void)didReceiveResultsAfterTimeout:(id)arg1 ;
-(void)didAppendLateSections:(id)arg1 ;
-(void)didClearInput:(id)arg1 ;
-(void)didEngageSection:(id)arg1 ;
-(void)sectionHeaderDidBecomeVisible:(id)arg1 ;
-(void)didReportUserResponseFeedback:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)feedbackQueue;
-(void)_sendFeedback:(id)arg1 type:(long long)arg2 queryId:(unsigned long long)arg3 ;
-(void)_sendFeedback:(id)arg1 type:(long long)arg2 ;
-(NSObject*<SFFeedbackListener>)feedbackListener;
-(void)setFeedbackListener:(NSObject*<SFFeedbackListener>)arg1 ;
-(void)setFeedbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

