/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCStatisticsHistory : NSObject {

	VCStatisticsStatsHistoryElement _statsHistory[500];
	int _statsHistorySize;
	int _currentStatsHistoryIndex;
	VCStatisticsStatsHistoryElement _lastStats;
	unsigned char _currentLinkID;
	double _lastHistoryNotEnoughLogTime;
	VCStatisticsSendHistoryElement* _sendHistory;

}
-(void)dealloc;
-(void)addStatsHistory:(VCStatisticsStatsHistoryElement)arg1 ;
-(void)addAndPruneSendHistory:(VCStatisticsSendHistoryElement*)arg1 upToTime:(double)arg2 ;
-(VCStatisticsSendHistoryElement*)getSendHistoryElementWithPacketId:(unsigned)arg1 ;
-(double)getPacketLossRateAtTime:(double)arg1 inMostRecentDuration:(double)arg2 ;
-(double)getReceivingBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2 ;
-(double)getSendingBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2 ;
-(double)getServerStatsBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2 ;
-(double)getRoundTripTimeWithPacketId:(unsigned)arg1 time:(double)arg2 ;
-(int)getBurstyLossAtTime:(double)arg1 inMostRecentDuration:(double)arg2 withPercentile:(double)arg3 ;
-(void)clearSendHistory;
-(void)resetHistory;
-(BOOL)isStatsElementOutOfOrder:(VCStatisticsStatsHistoryElement)arg1 ;
-(BOOL)handleWrappedAroundByteCountForStats:(VCStatisticsStatsHistoryElement*)arg1 ;
-(BOOL)getStatsHistoryElementIndex:(int*)arg1 time:(double)arg2 inMostRecentDuration:(double)arg3 ;
@end

