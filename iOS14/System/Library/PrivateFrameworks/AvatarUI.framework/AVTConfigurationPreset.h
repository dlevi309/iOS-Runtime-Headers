/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


#import <AvatarUI/AvatarUI-Structs.h>
@interface AVTConfigurationPreset : NSObject {

	BOOL _defaultPreset;
	id _preset;
	SCD_Struct_AV4 _settingKind;

}

@property (nonatomic,readonly) SCD_Struct_AV4 settingKind;                             //@synthesize settingKind=_settingKind - In the implementation block
@property (nonatomic,readonly) id preset;                                              //@synthesize preset=_preset - In the implementation block
@property (getter=isDefaultPreset,nonatomic,readonly) BOOL defaultPreset;              //@synthesize defaultPreset=_defaultPreset - In the implementation block
-(id)initWithDefaultPresetForSettingKind:(SCD_Struct_AV4)arg1 ;
-(id)initWithPreset:(id)arg1 settingKind:(SCD_Struct_AV4)arg2 ;
-(id)description;
-(SCD_Struct_AV4)settingKind;
-(unsigned long long)hash;
-(id)preset;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isDefaultPreset;
@end

