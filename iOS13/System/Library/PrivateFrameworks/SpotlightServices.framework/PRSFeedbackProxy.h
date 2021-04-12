/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <libobjc.A.dylib/SFFeedbackListener.h>

@class PARSession, NSString;

@interface PRSFeedbackProxy : NSObject <SFFeedbackListener> {

	PARSession* _listener;

}

@property (assign,nonatomic,__weak) PARSession * listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PARSession *)listener;
-(void)setListener:(PARSession *)arg1 ;
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
@end

