/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
*/


@interface MXService : NSObject {

	BOOL _isStarted;
	long long _sourceID;

}

@property (readonly) BOOL isStarted;                  //@synthesize isStarted=_isStarted - In the implementation block
@property (readonly) long long sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
-(id)init;
-(BOOL)isStarted;
-(long long)sourceID;
-(BOOL)startService;
-(BOOL)stopService;
-(BOOL)metricsAvailableForDate:(id)arg1 ;
-(id)getMetricsForClient:(id)arg1 dateString:(id)arg2 ;
-(id)initWithSourceID:(long long)arg1 ;
@end

