/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection;

@interface IDSAWDLogging : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _AWDServerConnection;

}

@property (readonly) AWDServerConnection * AWDServerConnection;              //@synthesize AWDServerConnection=_AWDServerConnection - In the implementation block
+(id)sharedInstance;
-(void)IDSCoreAnalyticsQuickRelayEventType:(id)arg1 eventSubType:(id)arg2 duration:(id)arg3 resultCode:(id)arg4 providerType:(id)arg5 transportType:(id)arg6 interfaceType:(id)arg7 skeEnabled:(id)arg8 isInitiator:(id)arg9 protocolVersion:(id)arg10 retryCount:(id)arg11 serviceName:(id)arg12 subServiceName:(id)arg13 participantCount:(id)arg14 ;
-(void)IDSQuickRelayEventType:(id)arg1 eventSubType:(id)arg2 duration:(id)arg3 resultCode:(id)arg4 providerType:(id)arg5 transportType:(id)arg6 interfaceType:(id)arg7 skeEnabled:(id)arg8 isInitiator:(id)arg9 protocolVersion:(id)arg10 retryCount:(id)arg11 serviceName:(id)arg12 subServiceName:(id)arg13 participantCount:(id)arg14 ;
-(id)init;
-(void)submitMetric:(id)arg1 withIdentifier:(unsigned)arg2 ;
-(BOOL)_shouldSubmit;
-(id)_metricContainerForMetricType:(unsigned)arg1 ;
-(void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2 ;
-(AWDServerConnection *)AWDServerConnection;
@end

