/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/


@protocol MTRecipeMaterialSettingsProviding <MTMaterialVersioning,MTMaterialStyleProviding>
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> baseMaterialSettings; 
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> baseOverlaySettings; 
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> primaryOverlaySettings; 
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> secondaryOverlaySettings; 
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> auxiliaryOverlaySettings; 
@required
-(id<MTTinting><MTMaterialFiltering>)auxiliaryOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)primaryOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)baseOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)secondaryOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)baseMaterialSettings;
-(id)settingsForConfiguration:(id)arg1;

@end

