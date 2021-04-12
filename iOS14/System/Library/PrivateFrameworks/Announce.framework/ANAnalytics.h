/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANAnalyticsDailyDelegate.h>

@protocol ANAnalyticsSystemProtocol, ANAnalyticsAssistantProtocol, ANAnalyticsDailyProtocol;
@class NSString;

@interface ANAnalytics : NSObject <ANAnalyticsDailyDelegate> {

	id<ANAnalyticsSystemProtocol> _system;
	id<ANAnalyticsAssistantProtocol> _assistant;
	id<ANAnalyticsDailyProtocol> _dailyReporter;

}

@property (readonly) id<ANAnalyticsSystemProtocol> system;                    //@synthesize system=_system - In the implementation block
@property (readonly) id<ANAnalyticsAssistantProtocol> assistant;              //@synthesize assistant=_assistant - In the implementation block
@property (readonly) id<ANAnalyticsDailyProtocol> dailyReporter;              //@synthesize dailyReporter=_dailyReporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(id<ANAnalyticsAssistantProtocol>)assistant;
-(id<ANAnalyticsSystemProtocol>)system;
-(void)error:(long long)arg1 ;
-(id)initWithSystem:(id)arg1 assistant:(id)arg2 dailyReporter:(id)arg3 ;
-(id<ANAnalyticsDailyProtocol>)dailyReporter;
-(void)dailyReport:(id)arg1 withPayload:(id)arg2 ;
-(void)announcementSent:(id)arg1 inHome:(id)arg2 withError:(long long)arg3 withTime:(double)arg4 sendType:(unsigned long long)arg5 ofGroupCount:(long long)arg6 ;
-(void)announcementReceived:(id)arg1 withTime:(double)arg2 receiveTimeType:(unsigned long long)arg3 ;
-(void)announcementPlayed:(id)arg1 withTime:(double)arg2 deadlineViolation:(double)arg3 playbackSource:(unsigned long long)arg4 ofGroupCount:(long long)arg5 ;
-(void)announcementFinishedPlaying:(id)arg1 withTime:(double)arg2 ofGroupCount:(long long)arg3 ;
-(void)announcementsExpired:(id)arg1 ofGroupCount:(long long)arg2 ;
-(void)announcementEntryAgeLimit:(id)arg1 timeExceeded:(double)arg2 ;
-(void)announcementsStorageAgeLimit:(id)arg1 ;
-(void)playbackAction:(unsigned long long)arg1 fromSource:(unsigned long long)arg2 ;
@end

