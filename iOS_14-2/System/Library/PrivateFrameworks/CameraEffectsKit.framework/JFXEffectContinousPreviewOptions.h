/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXEffectPreviewOptions.h>

@class NSArray;

@interface JFXEffectContinousPreviewOptions : JFXEffectPreviewOptions {

	BOOL _loopAnimation;
	unsigned _maxFramesRenderedAtATime;
	unsigned long long _backgroundType;
	NSArray* _effectsToApplyToBackground;
	/*^block*/id _renderPropertiesConfigurationBlock;
	SCD_Struct_JF3 _effectAnimationDuration;

}

@property (assign,nonatomic) unsigned long long backgroundType;                   //@synthesize backgroundType=_backgroundType - In the implementation block
@property (nonatomic,retain) NSArray * effectsToApplyToBackground;                //@synthesize effectsToApplyToBackground=_effectsToApplyToBackground - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 effectAnimationDuration;              //@synthesize effectAnimationDuration=_effectAnimationDuration - In the implementation block
@property (assign,nonatomic) BOOL loopAnimation;                                  //@synthesize loopAnimation=_loopAnimation - In the implementation block
@property (assign,nonatomic) unsigned maxFramesRenderedAtATime;                   //@synthesize maxFramesRenderedAtATime=_maxFramesRenderedAtATime - In the implementation block
@property (nonatomic,copy) id renderPropertiesConfigurationBlock;                 //@synthesize renderPropertiesConfigurationBlock=_renderPropertiesConfigurationBlock - In the implementation block
-(unsigned long long)backgroundType;
-(void)setBackgroundType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)renderPropertiesConfigurationBlock;
-(void)setRenderPropertiesConfigurationBlock:(id)arg1 ;
-(id)initContinousPreviewOptions;
-(NSArray *)effectsToApplyToBackground;
-(void)setEffectsToApplyToBackground:(NSArray *)arg1 ;
-(SCD_Struct_JF3)effectAnimationDuration;
-(void)setEffectAnimationDuration:(SCD_Struct_JF3)arg1 ;
-(BOOL)loopAnimation;
-(void)setLoopAnimation:(BOOL)arg1 ;
-(unsigned)maxFramesRenderedAtATime;
-(void)setMaxFramesRenderedAtATime:(unsigned)arg1 ;
@end

