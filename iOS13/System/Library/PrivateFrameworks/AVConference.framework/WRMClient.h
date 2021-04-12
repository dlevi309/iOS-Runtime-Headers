/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface WRMClient : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	id _wrmClientDelegate;
	int _mediaControlInfoVersion;
	int _mode;
	SCD_Struct_WR131 _metricsConfig;

}

@property (assign) id<WRMClientDelegate> delegate; 
@property (assign) int mediaControlInfoVersion;                 //@synthesize mediaControlInfoVersion=_mediaControlInfoVersion - In the implementation block
-(id)init;
-(void)dealloc;
-(id<WRMClientDelegate>)delegate;
-(void)setDelegate:(id<WRMClientDelegate>)arg1 ;
-(void)setConfiguration:(SCD_Struct_VC93*)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setMediaControlInfoVersion:(int)arg1 ;
-(int)mediaControlInfoVersion;
-(void)setPreWarmState:(BOOL)arg1 ;
-(void)reportMetricsFaceTimeCalling:(const SCD_Struct_VC111*)arg1 ;
-(void)sendStatusUpdateFaceTimeCalling:(const SCD_Struct_VC95*)arg1 ;
-(void)requestNotificationFaceTimeCalling;
-(void)startWRMClientWithMode:(int)arg1 metricsConfig:(SCD_Struct_WR131)arg2 ;
-(void)stopWRMClient;
-(void)reportImmediateMetric:(int)arg1 value:(unsigned long long)arg2 ;
-(void)processNotificationList:(id)arg1 ;
-(BOOL)setupServiceConnection;
-(void)sendProcessInfoWithProcessID:(unsigned long long)arg1 ;
-(void)sendSubscriptionInfoFaceTimeCalling;
-(void)releaseServiceConnection;
-(int)getWRMSubscribeVersion;
-(void)sendUnsubscriptionInfoFaceTimeCalling;
-(void)sendStatusUpdateInfoFaceTimeCalling:(id)arg1 ;
-(void)dumpReport:(id)arg1 ;
-(void)sendReport:(id)arg1 ;
-(void)reportMetricsWifiCalling:(const SCD_Struct_VC111*)arg1 ;
@end

