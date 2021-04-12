/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
*/


#import <WirelessDiagnostics/WirelessDiagnostics-Structs.h>
@interface AWDServerConnection : NSObject {

	AWDServerConnection* fServerConnection;

}
-(void)dealloc;
-(BOOL)registerQueriableMetric:(unsigned)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithComponentId:(unsigned)arg1 ;
-(id)initWithComponentId:(unsigned)arg1 andBlockOnConfiguration:(BOOL)arg2 ;
-(id)newMetricContainerWithIdentifier:(unsigned)arg1 ;
-(BOOL)submitMetric:(id)arg1 ;
-(BOOL)registerQueriableMetricCallback:(/*^block*/id)arg1 forIdentifier:(unsigned)arg2 ;
-(BOOL)registerConfigChangeCallback:(/*^block*/id)arg1 ;
-(id)getComponentConfigurationParameters;
-(void)registerComponentParametersChangeCallback:(/*^block*/id)arg1 ;
-(unsigned long long)getAWDTimestamp;
-(void)flushToQueue:(dispatch_queue_sRef)arg1 block:(/*^block*/id)arg2 ;
@end

