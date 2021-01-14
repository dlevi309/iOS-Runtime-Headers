/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
@class NSString, NSNumber, NSObject;

@interface VCTestMonitorManager : NSObject {

	BOOL _toneInjectionEnabled;
	BOOL _forceNetworkCellular;
	BOOL _enableLoopbackInterface;
	BOOL _enableOneToOneMode;
	double _emulatedRxPLR;
	NSString* _cannedReplayPath;
	int _forcedTargetBitrate;
	int _forcedCapBitrate;
	NSString* _emulatedNetworkConfigPath;
	NSNumber* _initialMemoryUsage;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;
	NSObject*<OS_dispatch_queue> _xpcCallbackQueue;

}

@property (assign) BOOL toneInjectionEnabled;                                   //@synthesize toneInjectionEnabled=_toneInjectionEnabled - In the implementation block
@property (assign) BOOL forceNetworkCellular;                                   //@synthesize forceNetworkCellular=_forceNetworkCellular - In the implementation block
@property (assign,nonatomic) BOOL enableLoopbackInterface;                      //@synthesize enableLoopbackInterface=_enableLoopbackInterface - In the implementation block
@property (assign,nonatomic) BOOL enableOneToOneMode;                           //@synthesize enableOneToOneMode=_enableOneToOneMode - In the implementation block
@property (assign,nonatomic) double emulatedRxPLR;                              //@synthesize emulatedRxPLR=_emulatedRxPLR - In the implementation block
@property (assign,nonatomic) int forcedTargetBitrate;                           //@synthesize forcedTargetBitrate=_forcedTargetBitrate - In the implementation block
@property (assign,nonatomic) int forcedCapBitrate;                              //@synthesize forcedCapBitrate=_forcedCapBitrate - In the implementation block
@property (nonatomic,retain) NSString * cannedReplayPath;                       //@synthesize cannedReplayPath=_cannedReplayPath - In the implementation block
@property (nonatomic,retain) NSString * emulatedNetworkConfigPath;              //@synthesize emulatedNetworkConfigPath=_emulatedNetworkConfigPath - In the implementation block
+(id)sharedManager;
-(BOOL)enableOneToOneMode;
-(void)setForcedCapBitrate:(int)arg1 ;
-(void)setEmulatedRxPLR:(double)arg1 ;
-(void)setCannedReplayPath:(NSString *)arg1 ;
-(NSString *)cannedReplayPath;
-(id)init;
-(BOOL)forceNetworkCellular;
-(void)registerBlocksForService;
-(void)reportMemoryUsage;
-(void)setEnableLoopbackInterface:(BOOL)arg1 ;
-(void)setForceNetworkCellular:(BOOL)arg1 ;
-(int)forcedCapBitrate;
-(double)emulatedRxPLR;
-(NSString *)emulatedNetworkConfigPath;
-(void)setForcedTargetBitrate:(int)arg1 ;
-(void)setEnableOneToOneMode:(BOOL)arg1 ;
-(void)setEmulatedNetworkConfigPath:(NSString *)arg1 ;
-(void)setToneInjectionEnabled:(BOOL)arg1 ;
-(BOOL)enableLoopbackInterface;
-(int)forcedTargetBitrate;
-(BOOL)toneInjectionEnabled;
-(void)dealloc;
@end

