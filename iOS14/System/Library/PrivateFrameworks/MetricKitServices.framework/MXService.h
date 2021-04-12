/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)startService;
-(BOOL)stopService;
-(long long)sourceID;
-(BOOL)metricsSupported;
-(BOOL)metricsAvailableForDate:(id)arg1 ;
-(BOOL)diagnosticsSupported;
-(BOOL)diagnosticsAvailableForDate:(id)arg1 ;
-(id)getMetricsForClient:(id)arg1 dateString:(id)arg2 ;
-(id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2 ;
-(id)initWithSourceID:(long long)arg1 ;
-(id)pruneSourceData:(id)arg1 ;
@end

