/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _UIButtonBarButtonVisualProvider;

@interface UIKBRenderConfig : NSObject <NSCopying> {

	BOOL _useEmojiStyles;
	BOOL _lightKeyboard;
	BOOL _isFloating;
	long long _forceQuality;
	double _blurRadius;
	double _blurSaturation;
	double _keycapOpacity;
	double _lightKeycapOpacity;
	NSString* _controlKeyBackgroundName;
	NSString* _activatedKeyplaneSwitchControlKeyBackgroundName;
	_UIButtonBarButtonVisualProvider* _buttonBarVisualProvider;

}

@property (assign,nonatomic) BOOL lightKeyboard;                                                        //@synthesize lightKeyboard=_lightKeyboard - In the implementation block
@property (assign,nonatomic) long long forceQuality;                                                    //@synthesize forceQuality=_forceQuality - In the implementation block
@property (assign,nonatomic) double blurRadius;                                                         //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) double blurSaturation;                                                     //@synthesize blurSaturation=_blurSaturation - In the implementation block
@property (assign,nonatomic) double keycapOpacity;                                                      //@synthesize keycapOpacity=_keycapOpacity - In the implementation block
@property (assign,nonatomic) double lightKeycapOpacity;                                                 //@synthesize lightKeycapOpacity=_lightKeycapOpacity - In the implementation block
@property (assign,nonatomic) NSString * controlKeyBackgroundName;                                       //@synthesize controlKeyBackgroundName=_controlKeyBackgroundName - In the implementation block
@property (assign,nonatomic) NSString * activatedKeyplaneSwitchControlKeyBackgroundName;                //@synthesize activatedKeyplaneSwitchControlKeyBackgroundName=_activatedKeyplaneSwitchControlKeyBackgroundName - In the implementation block
@property (assign,nonatomic) BOOL isFloating;                                                           //@synthesize isFloating=_isFloating - In the implementation block
@property (nonatomic,readonly) BOOL whiteText; 
@property (nonatomic,readonly) long long backdropStyle; 
@property (nonatomic,readonly) long long blurEffectStyle; 
@property (nonatomic,readonly) _UIButtonBarButtonVisualProvider * buttonBarVisualProvider;              //@synthesize buttonBarVisualProvider=_buttonBarVisualProvider - In the implementation block
+(id)lowQualityDarkConfig;
+(id)defaultEmojiConfig;
+(long long)backdropStyleForStyle:(long long)arg1 quality:(long long)arg2 ;
+(id)defaultConfig;
+(id)darkConfig;
+(id)configForAppearance:(long long)arg1 inputMode:(id)arg2 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setIsFloating:(BOOL)arg1 ;
-(BOOL)isFloating;
-(NSString *)activatedKeyplaneSwitchControlKeyBackgroundName;
-(void)setBlurSaturation:(double)arg1 ;
-(double)lightKeycapOpacity;
-(double)blurRadius;
-(void)setForceQuality:(long long)arg1 ;
-(id)description;
-(BOOL)lightKeyboard;
-(long long)blurEffectStyle;
-(BOOL)whiteText;
-(void)setControlKeyBackgroundName:(NSString *)arg1 ;
-(long long)forceQuality;
-(void)setKeycapOpacity:(double)arg1 ;
-(void)setLightKeycapOpacity:(double)arg1 ;
-(double)blurSaturation;
-(void)setActivatedKeyplaneSwitchControlKeyBackgroundName:(NSString *)arg1 ;
-(double)keycapOpacity;
-(void)setLightKeyboard:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UIButtonBarButtonVisualProvider *)buttonBarVisualProvider;
-(long long)backdropStyle;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)controlKeyBackgroundName;
@end

