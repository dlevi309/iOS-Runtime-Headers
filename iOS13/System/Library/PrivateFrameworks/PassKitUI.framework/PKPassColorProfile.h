/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class UIColor;

@interface PKPassColorProfile : NSObject {

	double _backgroundLightness;
	double _foregroundLightness;
	double _labelLightness;
	PKPassColorProfile* _stripProfile;
	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	UIColor* _labelColor;
	UIColor* _highlightColor;
	double _overlayDarkeningAlpha;
	double _regularDarkeningAlpha;
	double _overlayLighteningAlpha;
	double _regularLighteningAlpha;

}

@property (nonatomic,readonly) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * foregroundColor;                  //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * labelColor;                       //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,readonly) UIColor * highlightColor;                   //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,readonly) BOOL isLight; 
@property (nonatomic,readonly) double overlayDarkeningAlpha;               //@synthesize overlayDarkeningAlpha=_overlayDarkeningAlpha - In the implementation block
@property (nonatomic,readonly) double regularDarkeningAlpha;               //@synthesize regularDarkeningAlpha=_regularDarkeningAlpha - In the implementation block
@property (nonatomic,readonly) double overlayLighteningAlpha;              //@synthesize overlayLighteningAlpha=_overlayLighteningAlpha - In the implementation block
@property (nonatomic,readonly) double regularLighteningAlpha;              //@synthesize regularLighteningAlpha=_regularLighteningAlpha - In the implementation block
+(id)profileForDisplayProfile:(id)arg1 ;
-(void)dealloc;
-(UIColor *)backgroundColor;
-(UIColor *)labelColor;
-(UIColor *)highlightColor;
-(UIColor *)foregroundColor;
-(id)labelImageForGlyph:(id)arg1 ;
-(BOOL)isLight;
-(id)foregroundAttributesForFont:(id)arg1 ;
-(id)labelAttributesForFont:(id)arg1 ;
-(id)labelColorOverStrip:(BOOL)arg1 ;
-(id)foregroundColorOverStrip:(BOOL)arg1 ;
-(id)_initWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3 ;
-(id)_imageForGlyph:(id)arg1 color:(id)arg2 ;
-(void)_calculateColorsWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3 ;
-(id)foregroundImageForGlyph:(id)arg1 ;
-(double)overlayDarkeningAlpha;
-(double)regularDarkeningAlpha;
-(double)overlayLighteningAlpha;
-(double)regularLighteningAlpha;
@end

