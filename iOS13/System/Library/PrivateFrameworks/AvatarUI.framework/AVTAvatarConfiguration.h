/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)configurationFromAvatar:(id)arg1 coreModel:(id)arg2 ;
+(id)configurationPresetWithPreset:(id)arg1 settingKind:(SCD_Struct_AV4)arg2 ;
+(id)configurationColorPresetWithColorPreset:(id)arg1 settingKind:(SCD_Struct_AV4)arg2 coreModel:(id)arg3 ;
+(id)keyForSettingKind:(SCD_Struct_AV4)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)requiresEncryption;
-(id)presetForCategory:(long long)arg1 ;
-(void)addPreset:(id)arg1 ;
-(id)volatileIdentifierForScope:(id)arg1 ;
-(unsigned long long)costForScope:(id)arg1 ;
-(id)presets;
-(id)colorPresets;
-(id)persistentIdentifierForScope:(id)arg1 ;
-(void)applyToAvatar:(id)arg1 ;
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
-(id)colorPresetForSettingKind:(SCD_Struct_AV4)arg1 ;
-(id)configurationPresets;
-(id)configurationPresetForSettingKind:(SCD_Struct_AV4)arg1 ;
@end

