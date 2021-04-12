/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSString, NSArray, NSDictionary, UIImage;

@interface AVTPreset : NSObject {

	long long _category;
	NSString* _identifier;
	NSArray* _assets;
	NSString* _variant;
	float _intensity;
	BOOL _mirrored;
	NSArray* _dependencies;
	NSDictionary* _tags;
	NSDictionary* _specializationSettings;

}

@property (nonatomic,readonly) long long category; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * displayableName; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,readonly) BOOL hasComponent; 
@property (nonatomic,readonly) NSDictionary * tags;                      //@synthesize tags=_tags - In the implementation block
@property (readonly) NSDictionary * specializationSettings;              //@synthesize specializationSettings=_specializationSettings - In the implementation block
+(id)presetWithCategory:(long long)arg1 identifier:(id)arg2 ;
+(id)availablePresetsForCategory:(long long)arg1 ;
+(id)colorPresetsForCategory:(long long)arg1 colorIndex:(unsigned long long)arg2 ;
+(id)findPresetWithIdentifier:(id)arg1 inPresets:(id)arg2 ;
+(void)registerVariantNamed:(id)arg1 forComponentType:(long long)arg2 ;
+(void)loadPresets;
+(id)_colorPresetsForCategory:(long long)arg1 palette:(id)arg2 ;
+(id)colorPresetsForCategory:(long long)arg1 ;
+(void)enumerateVariantDependenciesForComponentType:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)secondaryColorPresetsForCategory:(long long)arg1 ;
-(id)init;
-(id)description;
-(NSString *)identifier;
-(long long)category;
-(NSString *)localizedName;
-(NSDictionary *)tags;
-(float)intensity;
-(id)maskImage;
-(id)cache;
-(id)assets;
-(UIImage *)thumbnail;
-(BOOL)hasComponent;
-(id)colorPresets;
-(NSDictionary *)specializationSettings;
-(void)rebuildSpecializationSettings;
-(NSString *)displayableName;
-(BOOL)hasDependency;
-(void)enumeratePresetDependencies:(/*^block*/id)arg1 ;
-(void)enumerateVariantDependencies:(/*^block*/id)arg1 ;
-(void)applyPresetOnAvatar:(id)arg1 ;
@end

