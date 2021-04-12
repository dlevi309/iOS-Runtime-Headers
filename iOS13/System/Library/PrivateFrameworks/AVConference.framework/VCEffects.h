/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class VCVideoFrameBufferPool;

@interface VCEffects : NSObject {

	int _effectsMode;
	VCVideoFrameBufferPool* _bufferPool;
	BOOL _effectsApplied;
	BOOL _faceMeshTrackingEnabled;

}

@property (assign,nonatomic) int effectsMode;                           //@synthesize effectsMode=_effectsMode - In the implementation block
@property (assign,nonatomic) BOOL effectsApplied;                       //@synthesize effectsApplied=_effectsApplied - In the implementation block
@property (assign,nonatomic) BOOL faceMeshTrackingEnabled;              //@synthesize faceMeshTrackingEnabled=_faceMeshTrackingEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setFaceMeshTrackingEnabled:(BOOL)arg1 ;
-(void)setEffectsApplied:(BOOL)arg1 ;
-(BOOL)faceMeshTrackingEnabled;
-(BOOL)effectsApplied;
-(BOOL)addFrame:(CVBufferRef)arg1 time:(long long)arg2 ;
-(BOOL)releaseFrameWithTime:(long long)arg1 ;
-(void)setEffectsMode:(int)arg1 ;
-(int)effectsMode;
@end

