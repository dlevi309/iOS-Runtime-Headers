/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@protocol OS_dispatch_queue;
@class NSObject, AnalyticsReader;

@interface WADeviceAnalyticsClient : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AnalyticsReader* _analyticsReader;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) AnalyticsReader * analyticsReader;                       //@synthesize analyticsReader=_analyticsReader - In the implementation block
-(id)init;
-(BOOL)parsedBeaconInfoIsStored:(id)arg1 ssid:(id)arg2 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)dumpDeviceAnalyticsToFileWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)neighborChannelsForBSS:(id)arg1 ssid:(id)arg2 ;
-(AnalyticsReader *)analyticsReader;
-(id)neighborsForBSS:(id)arg1 ssid:(id)arg2 ;
-(unsigned long long)manualLeaveCountForBss:(id)arg1 ssid:(id)arg2 ;
-(long long)autoLeaveRssiForBSS:(id)arg1 ssid:(id)arg2 ;
-(BOOL)dumpDeviceAnalyticsToFileWithCompletion:(/*^block*/id)arg1 fetchLimit:(unsigned long long)arg2 maxAge:(unsigned long long)arg3 ;
-(void)setAnalyticsReader:(AnalyticsReader *)arg1 ;
-(void)dealloc;
-(long long)rssiRoamTriggerForBSS:(id)arg1 ssid:(id)arg2 ;
@end

