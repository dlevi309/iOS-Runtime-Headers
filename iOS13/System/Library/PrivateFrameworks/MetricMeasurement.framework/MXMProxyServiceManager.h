/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/


@class NSXPCConnection;

@interface MXMProxyServiceManager : NSObject {

	NSXPCConnection* __serviceConnection;

}

@property (readonly) id<MetricMeasurementHelperProtocol_Internal> _proxyObject; 
@property (readonly) NSXPCConnection * _serviceConnection;                                   //@synthesize _serviceConnection=__serviceConnection - In the implementation block
+(id)shared;
-(void)dealloc;
-(NSXPCConnection *)_serviceConnection;
-(id)initInternal;
-(id<MetricMeasurementHelperProtocol_Internal>)_proxyObject;
-(BOOL)wake;
-(id)_sampleWithProxyMetric:(id)arg1 timeout:(double)arg2 stopReason:(unsigned long long*)arg3 ;
@end

