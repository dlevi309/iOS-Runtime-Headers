/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

