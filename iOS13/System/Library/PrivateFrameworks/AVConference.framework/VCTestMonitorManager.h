/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VCTestMonitorManager : NSObject {

	BOOL _toneInjectionEnabled;
	BOOL _forceNetworkCellular;
	BOOL _enableLoopbackInterface;
	double _emulatedRxPLR;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;
	NSObject*<OS_dispatch_queue> _xpcCallbackQueue;

}

@property (assign) BOOL toneInjectionEnabled;                           //@synthesize toneInjectionEnabled=_toneInjectionEnabled - In the implementation block
@property (assign) BOOL forceNetworkCellular;                           //@synthesize forceNetworkCellular=_forceNetworkCellular - In the implementation block
@property (assign,nonatomic) BOOL enableLoopbackInterface;              //@synthesize enableLoopbackInterface=_enableLoopbackInterface - In the implementation block
@property (assign,nonatomic) double emulatedRxPLR;                      //@synthesize emulatedRxPLR=_emulatedRxPLR - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)registerBlocksForService;
-(BOOL)enableLoopbackInterface;
-(void)setEnableLoopbackInterface:(BOOL)arg1 ;
-(void)setEmulatedRxPLR:(double)arg1 ;
-(BOOL)forceNetworkCellular;
-(double)emulatedRxPLR;
-(BOOL)toneInjectionEnabled;
-(void)reportMemoryUsage;
-(void)setToneInjectionEnabled:(BOOL)arg1 ;
-(void)setForceNetworkCellular:(BOOL)arg1 ;
@end

