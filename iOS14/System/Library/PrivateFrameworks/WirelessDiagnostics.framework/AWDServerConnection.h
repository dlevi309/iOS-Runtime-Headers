/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
*/


#import <WirelessDiagnostics/WirelessDiagnostics-Structs.h>
@interface AWDServerConnection : NSObject {

	AWDServerConnection* fServerConnection;

}
-(id)initWithComponentId:(unsigned)arg1 ;
-(void)registerComponentParametersChangeCallback:(/*^block*/id)arg1 ;
-(id)initWithComponentId:(unsigned)arg1 andBlockOnConfiguration:(BOOL)arg2 ;
-(BOOL)submitMetric:(id)arg1 ;
-(unsigned long long)getAWDTimestamp;
-(BOOL)registerConfigChangeCallback:(/*^block*/id)arg1 ;
-(BOOL)registerQueriableMetric:(unsigned)arg1 callback:(/*^block*/id)arg2 ;
-(id)newMetricContainerWithIdentifier:(unsigned)arg1 ;
-(id)getComponentConfigurationParameters;
-(void)flushToQueue:(dispatch_queue_sRef)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)registerQueriableMetricCallback:(/*^block*/id)arg1 forIdentifier:(unsigned)arg2 ;
-(void)dealloc;
@end

