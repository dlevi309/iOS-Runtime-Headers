/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTCacheableResource.h>

@class AVTColorPreset, NSDictionary, NSString;

@interface AVTCoreModelColor : NSObject <AVTCacheableResource> {

	BOOL _showSlider;
	float _rangeMin;
	float _rangeMax;
	AVTColorPreset* _baseColorPreset;
	unsigned long long _order;
	NSDictionary* _derivedColorsByCategories;
	SCD_Struct_AV4 _settingKind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,readonly) AVTColorPreset * baseColorPreset;                           //@synthesize baseColorPreset=_baseColorPreset - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV4 settingKind;                                 //@synthesize settingKind=_settingKind - In the implementation block
@property (nonatomic,readonly) unsigned long long order;                                   //@synthesize order=_order - In the implementation block
@property (getter=canShowSlider,nonatomic,readonly) BOOL showSlider;                       //@synthesize showSlider=_showSlider - In the implementation block
@property (nonatomic,readonly) float rangeMin;                                             //@synthesize rangeMin=_rangeMin - In the implementation block
@property (nonatomic,readonly) float rangeMax;                                             //@synthesize rangeMax=_rangeMax - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * derivedColorsByCategories;              //@synthesize derivedColorsByCategories=_derivedColorsByCategories - In the implementation block
-(NSString *)localizedName;
-(id)thumbnail;
-(float)rangeMin;
-(float)rangeMax;
-(NSString *)description;
-(id)volatileIdentifierForScope:(id)arg1 ;
-(unsigned long long)costForScope:(id)arg1 ;
-(AVTColorPreset *)baseColorPreset;
-(SCD_Struct_AV4)settingKind;
-(unsigned long long)hash;
-(BOOL)requiresEncryption;
-(NSString *)identifier;
-(id)initWithColorPreset:(id)arg1 settingKind:(SCD_Struct_AV4)arg2 order:(unsigned long long)arg3 showSlider:(BOOL)arg4 rangeMin:(float)arg5 rangeMax:(float)arg6 derivedColorsByCategories:(id)arg7 ;
-(NSDictionary *)derivedColorsByCategories;
-(id)initWithColorPreset:(id)arg1 settingKind:(SCD_Struct_AV4)arg2 order:(unsigned long long)arg3 derivedColorsByCategories:(id)arg4 ;
-(id)copyWithRangeMin:(float)arg1 rangeMax:(float)arg2 showSlider:(BOOL)arg3 ;
-(id)copyForPairedCategory:(long long)arg1 ;
-(BOOL)canShowSlider;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)order;
@end

