/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <libobjc.A.dylib/SFFeedbackListener.h>

@protocol SFFeedbackListener, OS_dispatch_queue;
@class NSObject, NSUserDefaults, NSString;

@interface SPFeedbackManager : NSObject <SFFeedbackListener> {

	BOOL _needsToDisplayFirstTimeView;
	BOOL _isParsecEnabled;
	NSObject*<SFFeedbackListener> _feedbackListener;
	NSObject*<OS_dispatch_queue> _feedbackQueue;
	NSUserDefaults* _defaultsCenter;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> feedbackQueue;                  //@synthesize feedbackQueue=_feedbackQueue - In the implementation block
@property (nonatomic,retain) NSUserDefaults * defaultsCenter;                             //@synthesize defaultsCenter=_defaultsCenter - In the implementation block
@property (assign) BOOL needsToDisplayFirstTimeView;                                      //@synthesize needsToDisplayFirstTimeView=_needsToDisplayFirstTimeView - In the implementation block
@property (assign) BOOL isParsecEnabled;                                                  //@synthesize isParsecEnabled=_isParsecEnabled - In the implementation block
@property (nonatomic,retain) NSObject*<SFFeedbackListener> feedbackListener;              //@synthesize feedbackListener=_feedbackListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)bumpPriorityOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)flushFeedbackWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<SFFeedbackListener>)feedbackListener;
-(void)cardViewDidDisappear:(id)arg1 ;
-(void)didGradeResultRelevancy:(id)arg1 ;
-(void)setFeedbackListener:(NSObject*<SFFeedbackListener>)arg1 ;
-(void)setFeedbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(void)searchViewDidDisappear:(id)arg1 ;
-(void)didReceiveResultsAfterTimeout:(id)arg1 ;
-(id)init;
-(void)setDefaultsCenter:(NSUserDefaults *)arg1 ;
-(NSObject*<OS_dispatch_queue>)feedbackQueue;
-(void)updateParsecEnabled;
-(void)searchViewDidAppear:(id)arg1 ;
-(void)didErrorOccur:(id)arg1 ;
-(void)didRankSections:(id)arg1 ;
-(void)didAppendLateSections:(id)arg1 ;
-(void)didEndSearch:(id)arg1 ;
-(void)didEngageSuggestion:(id)arg1 ;
-(void)didEngageSection:(id)arg1 ;
-(void)didStartSearch:(id)arg1 ;
-(void)updateNeedsToDisplayFirstTimeView;
-(void)didEngageCardSection:(id)arg1 ;
-(void)reportFeedback:(id)arg1 queryId:(long long)arg2 ;
-(void)suggestionsDidBecomeVisible:(id)arg1 ;
-(void)cardViewDidAppear:(id)arg1 ;
-(void)sectionHeaderDidBecomeVisible:(id)arg1 ;
-(void)didReportUserResponseFeedback:(id)arg1 ;
-(void)sendCustomFeedback:(id)arg1 ;
-(void)didClearInput:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)_sendFeedback:(id)arg1 type:(long long)arg2 queryId:(unsigned long long)arg3 ;
-(void)_sendFeedback:(id)arg1 type:(long long)arg2 ;
-(BOOL)isParsecEnabled;
-(NSUserDefaults *)defaultsCenter;
-(BOOL)needsToDisplayFirstTimeView;
-(void)setNeedsToDisplayFirstTimeView:(BOOL)arg1 ;
-(void)setIsParsecEnabled:(BOOL)arg1 ;
@end

