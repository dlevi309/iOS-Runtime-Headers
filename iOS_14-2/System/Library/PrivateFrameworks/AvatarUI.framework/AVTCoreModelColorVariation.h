/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class AVTColorPreset, AVTCoreModelColor;

@interface AVTCoreModelColorVariation : NSObject {

	AVTColorPreset* _colorPreset;
	AVTCoreModelColor* _color;

}

@property (nonatomic,readonly) AVTColorPreset * colorPreset;              //@synthesize colorPreset=_colorPreset - In the implementation block
@property (nonatomic,readonly) AVTCoreModelColor * color;                 //@synthesize color=_color - In the implementation block
-(AVTCoreModelColor *)color;
-(id)description;
-(AVTColorPreset *)colorPreset;
-(id)initWithColor:(id)arg1 colorPreset:(id)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

