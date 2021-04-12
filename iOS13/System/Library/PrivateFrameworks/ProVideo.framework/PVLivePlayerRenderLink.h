/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVLivePlayer;

@interface PVLivePlayerRenderLink : NSObject {

	SCD_Struct_PV20 _lastTime;
	unsigned _throttledFPS;
	HGSynchronizable* _lock;
	PVLivePlayer* _player;

}
-(id)init;
-(void)dealloc;
-(void)teardown;
-(void)rebuild;
-(unsigned)_throttledRenderLinkFPS_NoLock;
-(unsigned)throttledFPS;
-(BOOL)skipThrottledRenderLinkTime:(SCD_Struct_PV20)arg1 ;
-(void)registerWithPlayer:(id)arg1 ;
-(BOOL)setThrottledFPS:(unsigned)arg1 ;
-(unsigned)thermalPolicyThrottledFPS;
-(void)signalPlayer:(SCD_Struct_PV20)arg1 ;
-(void)signalDroppedRenderLink;
@end

