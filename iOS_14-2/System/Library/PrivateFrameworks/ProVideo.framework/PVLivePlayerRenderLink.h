/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVLivePlayer;

@interface PVLivePlayerRenderLink : NSObject {

	SCD_Struct_PV22 _lastTime;
	unsigned _throttledFPS;
	HGSynchronizable* _lock;
	PVLivePlayer* _player;

}
-(id)init;
-(void)rebuild;
-(void)teardown;
-(void)dealloc;
-(unsigned)_throttledRenderLinkFPS_NoLock;
-(unsigned)throttledFPS;
-(BOOL)skipThrottledRenderLinkTime:(SCD_Struct_PV22)arg1 ;
-(void)registerWithPlayer:(id)arg1 ;
-(BOOL)setThrottledFPS:(unsigned)arg1 ;
-(unsigned)thermalPolicyThrottledFPS;
-(void)signalPlayer:(SCD_Struct_PV22)arg1 ;
-(void)signalDroppedRenderLink;
@end

