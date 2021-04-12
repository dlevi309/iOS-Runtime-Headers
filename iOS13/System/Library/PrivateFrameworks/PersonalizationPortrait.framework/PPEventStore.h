/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class PPRecordMonitoringHelper, PPClientFeedbackHelper, NSString;

@interface PPEventStore : NSObject <PPFeedbackAccepting, PPClientStore> {

	PPRecordMonitoringHelper* _monitoringHelper;
	PPClientFeedbackHelper* _clientFeedbackHelper;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(BOOL)sendRTCLogsWithError:(id*)arg1 ;
-(/*^block*/id)_recordGenerator;
-(BOOL)iterEventNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)_sendChangesToDelegates:(id)arg1 ;
-(void)_loadEventNameRecordsWithDelegate:(id)arg1 ;
-(BOOL)loadEventNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterEventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 error:(id*)arg4 block:(/*^block*/id)arg5 ;
-(BOOL)iterDailyEventHighlightsWithOptions:(int)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)iterWeeklyEventHighlightsWithOptions:(int)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)iterEventHighlightsFrom:(id)arg1 to:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)iterDailyEventHighlightsError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)iterWeeklyEventHighlightsError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)interactionSummaryMetricsError:(id*)arg1 block:(/*^block*/id)arg2 ;
@end

