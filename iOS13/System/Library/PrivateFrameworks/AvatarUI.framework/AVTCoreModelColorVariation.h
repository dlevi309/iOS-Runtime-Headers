/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class AVTColorPreset, AVTCoreModelColor;

@interface AVTCoreModelColorVariation : NSObject {

	AVTColorPreset* _colorPreset;
	AVTCoreModelColor* _color;

}

@property (nonatomic,readonly) AVTColorPreset * colorPreset;              //@synthesize colorPreset=_colorPreset - In the implementation block
@property (nonatomic,readonly) AVTCoreModelColor * color;                 //@synthesize color=_color - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(AVTCoreModelColor *)color;
-(AVTColorPreset *)colorPreset;
-(id)initWithColor:(id)arg1 colorPreset:(id)arg2 ;
@end

