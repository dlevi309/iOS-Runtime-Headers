/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>

@protocol HFColorProfile;
@interface HUQuickControlColorViewProfile : HUQuickControlViewProfile {

	BOOL _supportsRGBColor;
	BOOL _supportsNaturalLighting;
	BOOL _naturalLightingEnabled;
	id<HFColorProfile> _colorProfile;
	unsigned long long _mode;

}

@property (assign,nonatomic) BOOL supportsRGBColor;                        //@synthesize supportsRGBColor=_supportsRGBColor - In the implementation block
@property (assign,nonatomic) BOOL supportsNaturalLighting;                 //@synthesize supportsNaturalLighting=_supportsNaturalLighting - In the implementation block
@property (assign,nonatomic) BOOL naturalLightingEnabled;                  //@synthesize naturalLightingEnabled=_naturalLightingEnabled - In the implementation block
@property (nonatomic,retain) id<HFColorProfile> colorProfile;              //@synthesize colorProfile=_colorProfile - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                      //@synthesize mode=_mode - In the implementation block
-(unsigned long long)mode;
-(id)init;
-(void)setMode:(unsigned long long)arg1 ;
-(BOOL)supportsRGBColor;
-(id<HFColorProfile>)colorProfile;
-(void)setColorProfile:(id<HFColorProfile>)arg1 ;
-(void)setNaturalLightingEnabled:(BOOL)arg1 ;
-(BOOL)naturalLightingEnabled;
-(BOOL)supportsNaturalLighting;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSupportsRGBColor:(BOOL)arg1 ;
-(void)setSupportsNaturalLighting:(BOOL)arg1 ;
@end

