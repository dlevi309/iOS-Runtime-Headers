/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)cardViewDidDisappear:(id)arg1 ;
-(void)didGradeResultRelevancy:(id)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(void)searchViewDidDisappear:(id)arg1 ;
-(void)didReceiveResultsAfterTimeout:(id)arg1 ;
-(void)searchViewDidAppear:(id)arg1 ;
-(void)didErrorOccur:(id)arg1 ;
-(void)didRankSections:(id)arg1 ;
-(void)didAppendLateSections:(id)arg1 ;
-(void)didEndSearch:(id)arg1 ;
-(void)didEngageSuggestion:(id)arg1 ;
-(void)didEngageSection:(id)arg1 ;
-(void)didStartSearch:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(void)reportFeedback:(id)arg1 queryId:(long long)arg2 ;
-(void)suggestionsDidBecomeVisible:(id)arg1 ;
-(void)cardViewDidAppear:(id)arg1 ;
-(void)sectionHeaderDidBecomeVisible:(id)arg1 ;
-(void)didReportUserResponseFeedback:(id)arg1 ;
-(void)sendCustomFeedback:(id)arg1 ;
-(PARSession *)listener;
-(void)didClearInput:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)setListener:(PARSession *)arg1 ;
@end

