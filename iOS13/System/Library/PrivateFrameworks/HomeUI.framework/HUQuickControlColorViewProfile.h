/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>

@protocol HFColorProfile;
@interface HUQuickControlColorViewProfile : HUQuickControlViewProfile {

	BOOL _supportsRGBColor;
	id<HFColorProfile> _colorProfile;
	unsigned long long _mode;

}

@property (assign,nonatomic) BOOL supportsRGBColor;                        //@synthesize supportsRGBColor=_supportsRGBColor - In the implementation block
@property (nonatomic,retain) id<HFColorProfile> colorProfile;              //@synthesize colorProfile=_colorProfile - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                      //@synthesize mode=_mode - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id<HFColorProfile>)colorProfile;
-(void)setColorProfile:(id<HFColorProfile>)arg1 ;
-(BOOL)supportsRGBColor;
-(void)setSupportsRGBColor:(BOOL)arg1 ;
@end

