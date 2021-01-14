/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSString, NSArray, NSDictionary;

@interface AVTPreset : NSObject {

	long long _category;
	NSString* _identifier;
	NSArray* _assets;
	NSString* _morphVariant;
	NSString* _imageVariant;
	NSString* _materialVariant;
	float _morphVariantIntensity;
	float _textureAssetPresence;
	BOOL _mirrored;
	NSArray* _dependencies;
	NSDictionary* _assetSpecificMorphVariantDependencies;
	NSDictionary* _assetSpecificImageVariantDependencies;
	NSDictionary* _assetSpecificMaterialVariantDependencies;
	NSDictionary* _presetSpecificPresetDependencies;
	NSDictionary* _tags;
	NSDictionary* _specializationSettings;

}

@property (nonatomic,readonly) long long category; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * displayableName; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) BOOL hasComponent; 
@property (nonatomic,readonly) NSDictionary * tags;                      //@synthesize tags=_tags - In the implementation block
@property (readonly) NSDictionary * specializationSettings;              //@synthesize specializationSettings=_specializationSettings - In the implementation block
+(id)availablePresetsForCategory:(long long)arg1 ;
+(id)colorPresetsForCategory:(long long)arg1 colorIndex:(unsigned long long)arg2 ;
+(id)presetWithCategory:(long long)arg1 identifier:(id)arg2 ;
+(id)findPresetWithIdentifier:(id)arg1 inPresets:(id)arg2 ;
+(void)loadPresets;
+(id)_colorPresetsForCategory:(long long)arg1 palette:(id)arg2 ;
+(id)colorPresetsForCategory:(long long)arg1 ;
+(id)secondaryColorPresetsForCategory:(long long)arg1 ;
-(id)assets;
-(NSString *)localizedName;
-(NSDictionary *)tags;
-(id)cache;
-(long long)category;
-(id)description;
-(BOOL)hasComponent;
-(id)colorPresets;
-(NSString *)identifier;
-(void)enumerateVariantDependenciesOfKind:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateAssetSpecificVariantDependenciesOfKind:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(NSDictionary *)specializationSettings;
-(void)rebuildSpecializationSettings;
-(NSString *)displayableName;
-(void)enumeratePresetDependencies:(/*^block*/id)arg1 ;
-(void)enumeratePresetSpecificPresetDependencies:(/*^block*/id)arg1 ;
-(void)applyPresetByChangingComponentsOfMemoji:(id)arg1 ;
@end

