/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)preset;
-(SCD_Struct_AV4)settingKind;
-(id)initWithDefaultPresetForSettingKind:(SCD_Struct_AV4)arg1 ;
-(id)initWithPreset:(id)arg1 settingKind:(SCD_Struct_AV4)arg2 ;
-(BOOL)isDefaultPreset;
@end

