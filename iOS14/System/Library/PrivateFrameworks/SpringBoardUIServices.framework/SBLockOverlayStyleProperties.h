/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/


@class UIColor, _UIBackdropViewSettings;

@interface SBLockOverlayStyleProperties : NSObject {

	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIColor* _tintColor;
	double _tintAlpha;
	double _blurRadius;
	unsigned long long _style;
	long long _quality;
	_UIBackdropViewSettings* _settings;

}

@property (nonatomic,readonly) double tintAlpha;                       //@synthesize tintAlpha=_tintAlpha - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                    //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) double blurRadius;                      //@synthesize blurRadius=_blurRadius - In the implementation block
@property (nonatomic,readonly) unsigned long long style;               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long graphicsQuality;              //@synthesize quality=_quality - In the implementation block
-(void)_configure;
-(double)blurRadius;
-(id)description;
-(id)initWithStyle:(unsigned long long)arg1 quality:(long long)arg2 ;
-(id)_stringForStyle;
-(id)_stringForQuality;
-(id)_settingsForStyle;
-(double)tintAlpha;
-(long long)graphicsQuality;
-(UIColor *)tintColor;
-(unsigned long long)style;
@end

