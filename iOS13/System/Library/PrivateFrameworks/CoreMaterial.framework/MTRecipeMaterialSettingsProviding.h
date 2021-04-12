/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/


@protocol MTRecipeMaterialSettingsProviding <MTMaterialVersioning,MTMaterialStyleProviding>
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> baseMaterialSettings; 
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> baseOverlaySettings; 
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> primaryOverlaySettings; 
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> secondaryOverlaySettings; 
@property (nonatomic,readonly) id<MTTinting><MTMaterialFiltering> auxiliaryOverlaySettings; 
@required
-(id<MTTinting><MTMaterialFiltering>)baseMaterialSettings;
-(id<MTTinting><MTMaterialFiltering>)baseOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)primaryOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)secondaryOverlaySettings;
-(id<MTTinting><MTMaterialFiltering>)auxiliaryOverlaySettings;
-(id)settingsForConfiguration:(id)arg1;

@end

