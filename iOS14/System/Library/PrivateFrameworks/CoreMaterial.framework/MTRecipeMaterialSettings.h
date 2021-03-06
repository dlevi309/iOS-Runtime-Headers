/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/

#import <libobjc.A.dylib/MTRecipeMaterialSettingsProviding.h>

@protocol MTTintingMTMaterialFiltering;
@class NSString, NSDictionary;

@interface MTRecipeMaterialSettings : NSObject <MTRecipeMaterialSettingsProviding> {

	long long _materialSettingsVersion;
	NSString* _recipeName;
	NSDictionary* _styles;
	id<MTTinting><MTMaterialFiltering> _baseMaterialSettings;
	id<MTTinting><MTMaterialFiltering> _baseOverlaySettings;
	id<MTTinting><MTMaterialFiltering> _primaryOverlaySettings;
	id<MTTinting><MTMaterialFiltering> _secondaryOverlaySettings;
	id<MTTinting><MTMaterialFiltering> _auxiliaryOverlaySettings;

}

@property (nonatomic,retain) NSDictionary * styles;                                                      //@synthesize styles=_styles - In the implementation block
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> baseMaterialSettings;                  //@synthesize baseMaterialSettings=_baseMaterialSettings - In the implementation block
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> baseOverlaySettings;                   //@synthesize baseOverlaySettings=_baseOverlaySettings - In the implementation block
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> primaryOverlaySettings;                //@synthesize primaryOverlaySettings=_primaryOverlaySettings - In the implementation block
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> secondaryOverlaySettings;              //@synthesize secondaryOverlaySettings=_secondaryOverlaySettings - In the implementation block
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> auxiliaryOverlaySettings;              //@synthesize auxiliaryOverlaySettings=_auxiliaryOverlaySettings - In the implementation block
@property (nonatomic,readonly) long long materialSettingsVersion;                                        //@synthesize materialSettingsVersion=_materialSettingsVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * recipeName;                                               //@synthesize recipeName=_recipeName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styleSetNameForStyleSetFromRecipeWithName:(id)arg1 ;
-(id)initWithRecipeName:(id)arg1 andDescription:(id)arg2 descendantDescriptions:(id)arg3 bundle:(id)arg4 ;
-(id)_newVisualStyleSet;
-(NSString *)recipeName;
-(void)setStyles:(NSDictionary *)arg1 ;
-(id<MTTinting><MTMaterialFiltering>)auxiliaryOverlaySettings;
-(id)_platformColorsStyleSetName;
-(NSString *)description;
-(id<MTTinting><MTMaterialFiltering>)primaryOverlaySettings;
-(id)styleNameForCategory:(id)arg1 ;
-(NSDictionary *)styles;
-(id<MTTinting><MTMaterialFiltering>)baseOverlaySettings;
-(long long)materialSettingsVersion;
-(id<MTTinting><MTMaterialFiltering>)secondaryOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)baseMaterialSettings;
-(id)settingsForConfiguration:(id)arg1 ;
-(id)_visualStyleSetDescription;
@end

