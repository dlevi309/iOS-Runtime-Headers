/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UIButtonBarButtonVisualProvider;

@interface UIKBRenderConfig : NSObject <NSCopying> {

	BOOL _useEmojiStyles;
	BOOL _lightKeyboard;
	long long _forceQuality;
	double _blurRadius;
	double _blurSaturation;
	double _keycapOpacity;
	double _lightKeycapOpacity;
	_UIButtonBarButtonVisualProvider* _buttonBarVisualProvider;

}

@property (assign,nonatomic) BOOL lightKeyboard;                                                        //@synthesize lightKeyboard=_lightKeyboard - In the implementation block
@property (assign,nonatomic) long long forceQuality;                                                    //@synthesize forceQuality=_forceQuality - In the implementation block
@property (assign,nonatomic) double blurRadius;                                                         //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) double blurSaturation;                                                     //@synthesize blurSaturation=_blurSaturation - In the implementation block
@property (assign,nonatomic) double keycapOpacity;                                                      //@synthesize keycapOpacity=_keycapOpacity - In the implementation block
@property (assign,nonatomic) double lightKeycapOpacity;                                                 //@synthesize lightKeycapOpacity=_lightKeycapOpacity - In the implementation block
@property (nonatomic,readonly) BOOL whiteText; 
@property (nonatomic,readonly) long long backdropStyle; 
@property (nonatomic,readonly) long long blurEffectStyle; 
@property (nonatomic,readonly) _UIButtonBarButtonVisualProvider * buttonBarVisualProvider;              //@synthesize buttonBarVisualProvider=_buttonBarVisualProvider - In the implementation block
+(id)configForAppearance:(long long)arg1 inputMode:(id)arg2 ;
+(id)darkConfig;
+(id)defaultConfig;
+(id)defaultEmojiConfig;
+(id)lowQualityDarkConfig;
+(long long)backdropStyleForStyle:(long long)arg1 quality:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(double)blurRadius;
-(BOOL)lightKeyboard;
-(void)setLightKeyboard:(BOOL)arg1 ;
-(long long)backdropStyle;
-(BOOL)whiteText;
-(long long)blurEffectStyle;
-(double)lightKeycapOpacity;
-(double)keycapOpacity;
-(long long)forceQuality;
-(double)blurSaturation;
-(void)setBlurSaturation:(double)arg1 ;
-(void)setKeycapOpacity:(double)arg1 ;
-(void)setLightKeycapOpacity:(double)arg1 ;
-(void)setForceQuality:(long long)arg1 ;
-(_UIButtonBarButtonVisualProvider *)buttonBarVisualProvider;
@end

