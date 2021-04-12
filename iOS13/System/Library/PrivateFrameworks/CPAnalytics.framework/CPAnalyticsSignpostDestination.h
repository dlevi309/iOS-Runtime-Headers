/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@class CPAnalytics, NSMutableDictionary;

@interface CPAnalyticsSignpostDestination : NSObject <CPAnalyticsDestination> {

	CPAnalytics* _cpAnalyticsInstance;
	NSMutableDictionary* _startTimesBySignpostID;

}

@property (assign,nonatomic,__weak) CPAnalytics * cpAnalyticsInstance;                  //@synthesize cpAnalyticsInstance=_cpAnalyticsInstance - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * startTimesBySignpostID;              //@synthesize startTimesBySignpostID=_startTimesBySignpostID - In the implementation block
-(void)processEvent:(id)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)_trackSignpostsStartForEvent:(id)arg1 ;
-(void)_checkSignpostsEndForEvent:(id)arg1 ;
-(void)_sendCPAnalyticsEvent:(id)arg1 withPayload:(id)arg2 withDuration:(double)arg3 ;
-(CPAnalytics *)cpAnalyticsInstance;
-(void)setCpAnalyticsInstance:(CPAnalytics *)arg1 ;
-(NSMutableDictionary *)startTimesBySignpostID;
-(void)setStartTimesBySignpostID:(NSMutableDictionary *)arg1 ;
@end

