/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString;

@interface PLPhotoEffect : NSObject {

	BOOL _isPortrait;
	BOOL _isLegacy;
	NSString* _filterIdentifier;
	NSString* _displayName;
	NSString* _CIFilterName;
	long long _lightingVersion;

}

@property (nonatomic,copy,readonly) NSString * filterIdentifier;              //@synthesize filterIdentifier=_filterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * CIFilterName;                  //@synthesize CIFilterName=_CIFilterName - In the implementation block
@property (nonatomic,readonly) long long latestVersion; 
@property (nonatomic,readonly) long long lightingVersion;                     //@synthesize lightingVersion=_lightingVersion - In the implementation block
@property (nonatomic,readonly) BOOL isPortrait;                               //@synthesize isPortrait=_isPortrait - In the implementation block
@property (nonatomic,readonly) BOOL isLegacy;                                 //@synthesize isLegacy=_isLegacy - In the implementation block
+(id)allEffects;
+(id)effectWithCIFilterName:(id)arg1 ;
+(id)_legacyEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 ;
+(id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 ;
+(id)_lightingEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 lightingVersion:(long long)arg3 ;
+(id)standardSupportedEffects;
+(id)allSupportedEffects;
+(BOOL)isEffectNoneForIdentifier:(id)arg1 ;
+(BOOL)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2 ;
+(unsigned long long)_indexOfEffectWithIdentifier:(id)arg1 ;
+(id)effectWithIdentifier:(id)arg1 ;
-(BOOL)isPortrait;
-(BOOL)isLegacy;
-(id)description;
-(long long)latestVersion;
-(NSString *)displayName;
-(NSString *)filterIdentifier;
-(id)newEffectFilter;
-(NSString *)CIFilterName;
-(long long)lightingVersion;
@end

