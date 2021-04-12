/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTCacheableResource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface AVTAvatarConfiguration : NSObject <AVTCacheableResource, NSCopying> {

	NSMutableDictionary* _presetsStorage;
	NSMutableDictionary* _colorPresetsStorage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * presetsStorage;                   //@synthesize presetsStorage=_presetsStorage - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * colorPresetsStorage;              //@synthesize colorPresetsStorage=_colorPresetsStorage - In the implementation block
+(id)configurationPresetWithPreset:(id)arg1 settingKind:(SCD_Struct_AV4)arg2 ;
+(id)configurationColorPresetWithColorPreset:(id)arg1 settingKind:(SCD_Struct_AV4)arg2 coreModel:(id)arg3 ;
+(id)keyForSettingKind:(SCD_Struct_AV4)arg1 ;
+(id)configurationFromAvatar:(id)arg1 ;
+(id)configurationFromAvatar:(id)arg1 coreModel:(id)arg2 ;
-(id)colorPresetForSettingKind:(SCD_Struct_AV4)arg1 ;
-(id)init;
-(id)presets;
-(id)presetForCategory:(long long)arg1 ;
-(void)addConfigurationPreset:(id)arg1 ;
-(void)addConfigurationColorPreset:(id)arg1 ;
-(id)initWithPresets:(id)arg1 colorPresets:(id)arg2 ;
-(NSMutableDictionary *)presetsStorage;
-(NSMutableDictionary *)colorPresetsStorage;
-(void)removePresetsForSettingKind:(SCD_Struct_AV4)arg1 storage:(id)arg2 ;
-(id)presetsForStorage:(id)arg1 ;
-(id)presetForSettingKind:(SCD_Struct_AV4)arg1 storage:(id)arg2 ;
-(id)presetConfigurationPresets;
-(id)colorConfigurationPresets;
-(void)addColorPreset:(id)arg1 ;
-(void)removePresetsForCategory:(long long)arg1 ;
-(void)removeColorPresetsForSettingKind:(SCD_Struct_AV4)arg1 ;
-(id)configurationPresets;
-(id)configurationPresetForSettingKind:(SCD_Struct_AV4)arg1 ;
-(void)addPreset:(id)arg1 ;
-(NSString *)description;
-(id)volatileIdentifierForScope:(id)arg1 ;
-(unsigned long long)costForScope:(id)arg1 ;
-(unsigned long long)hash;
-(id)colorPresets;
-(id)persistentIdentifierForScope:(id)arg1 ;
-(BOOL)requiresEncryption;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)applyToAvatar:(id)arg1 ;
@end

