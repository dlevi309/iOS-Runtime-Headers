/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(UIImage *)shadow;
-(_UILegibilitySettings *)settings;
-(void)setSettings:(_UILegibilitySettings *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(BOOL)matchesSettings:(id)arg1 strength:(double)arg2 ;
-(void)setShadow:(UIImage *)arg1 ;
@end

