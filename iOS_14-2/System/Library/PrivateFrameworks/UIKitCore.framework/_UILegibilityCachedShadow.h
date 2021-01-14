/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UILegibilitySettings, UIImage;

@interface _UILegibilityCachedShadow : NSObject {

	_UILegibilitySettings* _settings;
	double _strength;
	UIImage* _shadow;

}

@property (nonatomic,retain) _UILegibilitySettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) double strength;                               //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) UIImage * shadow;                              //@synthesize shadow=_shadow - In the implementation block
-(double)strength;
-(UIImage *)shadow;
-(void)setStrength:(double)arg1 ;
-(BOOL)matchesSettings:(id)arg1 strength:(double)arg2 ;
-(void)setSettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)settings;
-(void)setShadow:(UIImage *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

