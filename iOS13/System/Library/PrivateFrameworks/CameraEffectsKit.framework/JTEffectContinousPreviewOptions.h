/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface JTEffectContinousPreviewOptions : NSObject <NSCopying> {

	BOOL _loopAnimation;
	BOOL _useCameraAsBackground;
	unsigned long long _preferredUpdatesPerSecond;
	SCD_Struct_JT6 _effectAnimationDuration;

}

@property (assign,nonatomic) SCD_Struct_JT6 effectAnimationDuration;                    //@synthesize effectAnimationDuration=_effectAnimationDuration - In the implementation block
@property (assign,nonatomic) BOOL loopAnimation;                                        //@synthesize loopAnimation=_loopAnimation - In the implementation block
@property (assign,nonatomic) unsigned long long preferredUpdatesPerSecond;              //@synthesize preferredUpdatesPerSecond=_preferredUpdatesPerSecond - In the implementation block
@property (assign,nonatomic) BOOL useCameraAsBackground;                                //@synthesize useCameraAsBackground=_useCameraAsBackground - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFrameRate:(unsigned long long)arg1 ;
-(id)initForLiveCameraWithFrameRate:(unsigned long long)arg1 ;
-(SCD_Struct_JT6)effectAnimationDuration;
-(void)setEffectAnimationDuration:(SCD_Struct_JT6)arg1 ;
-(BOOL)loopAnimation;
-(void)setLoopAnimation:(BOOL)arg1 ;
-(unsigned long long)preferredUpdatesPerSecond;
-(void)setPreferredUpdatesPerSecond:(unsigned long long)arg1 ;
-(BOOL)useCameraAsBackground;
-(void)setUseCameraAsBackground:(BOOL)arg1 ;
@end

