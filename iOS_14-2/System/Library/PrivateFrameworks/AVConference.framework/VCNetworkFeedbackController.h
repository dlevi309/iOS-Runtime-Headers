/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/WCMClientDelegate.h>
#import <libobjc.A.dylib/WRMClientDelegate.h>

@protocol VCNetworkFeedbackControllerDelegate;
@class VCWCMClient, WRMClient, VCConnectionManager, VCRecommendedNetworkSettings;

@interface VCNetworkFeedbackController : NSObject <WCMClientDelegate, WRMClientDelegate> {

	id<VCNetworkFeedbackControllerDelegate> _weakDelegate;
	VCWCMClient* _WCMClient;
	WRMClient* _WRMClient;
	VCConnectionManager* _connectionManager;
	VCRecommendedNetworkSettings* _recommendedSettings;
	unsigned _clientTargetBitrate;
	unsigned _clientTargetBitrateCap;
	double _wrmReportingInterval;
	unsigned _downlinkTargetBitrate;
	unsigned _downlinkTargetCellBitrateCap;
	int _wrmPendingBitrateCapDelta;
	BOOL _isWRMNotificationPending;
	SCD_Struct_VC114 _savedWRMNotification;

}

@property (readonly) unsigned recommendedTargetBitrateCap; 
@property (assign) unsigned clientTargetBitrate;                                 //@synthesize clientTargetBitrate=_clientTargetBitrate - In the implementation block
@property (assign) unsigned clientTargetBitrateCap;                              //@synthesize clientTargetBitrateCap=_clientTargetBitrateCap - In the implementation block
@property (assign,nonatomic) unsigned downlinkTargetBitrate;                     //@synthesize downlinkTargetBitrate=_downlinkTargetBitrate - In the implementation block
@property (assign,nonatomic) unsigned downlinkTargetCellBitrateCap;              //@synthesize downlinkTargetCellBitrateCap=_downlinkTargetCellBitrateCap - In the implementation block
-(void)start;
-(void)stop;
-(id)strongDelegate;
-(void)dealloc;
-(void)requestWRMNotification;
-(void)setPreWarmState:(BOOL)arg1 ;
-(void)setupWCMClient;
-(void)setupWRMClient;
-(void)cleanupWRMClient;
-(void)cleanupWCMClient;
-(unsigned)clientTargetBitrateCap;
-(unsigned)clientTargetBitrate;
-(void)wcmSetCallConfig:(unsigned)arg1 interferenceLevel:(unsigned)arg2 ;
-(void)wcmGetCallConfig:(unsigned*)arg1 targetBitrate:(unsigned*)arg2 ;
-(void)setWRMMetricConfig:(SCD_Struct_VC113*)arg1 ;
-(void)setWRMNotification:(SCD_Struct_VC114*)arg1 ;
-(void)setWRMCoexMetrics:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 ;
-(unsigned)recommendedTargetBitrateCap;
-(void)sendFeedbackControllerReport:(SCD_Struct_VC115)arg1 ;
-(void)sendStatusUpdate:(const SCD_Struct_VC116*)arg1 ;
-(void)setDownlinkTargetBitrate:(unsigned)arg1 ;
-(void)setDownlinkTargetCellBitrateCap:(unsigned)arg1 ;
-(void)setClientTargetBitrate:(unsigned)arg1 ;
-(void)setClientTargetBitrateCap:(unsigned)arg1 ;
-(unsigned)downlinkTargetBitrate;
-(unsigned)downlinkTargetCellBitrateCap;
@end

