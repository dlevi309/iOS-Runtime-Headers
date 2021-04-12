/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class PHAssetExportRequestOptions, PHAsset, NSDictionary, NSString;

@interface PUActivityItemSourceConfiguration : NSObject {

	BOOL _requiresAssetExport;
	SCD_Struct_PU13 _sharingPreferences;
	unsigned long long _maxFileSizeLimit;
	long long _outputType;
	long long _assetExportKind;
	PHAssetExportRequestOptions* _assetExportRequestOptions;
	PHAsset* _asset;
	NSDictionary* _sharingVariants;
	NSString* _activityType;

}

@property (nonatomic,retain) PHAsset * asset;                                                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) NSDictionary * sharingVariants;                                           //@synthesize sharingVariants=_sharingVariants - In the implementation block
@property (nonatomic,copy) NSString * activityType;                                                  //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) SCD_Struct_PU13 sharingPreferences;                                     //@synthesize sharingPreferences=_sharingPreferences - In the implementation block
@property (nonatomic,readonly) unsigned long long maxFileSizeLimit;                                  //@synthesize maxFileSizeLimit=_maxFileSizeLimit - In the implementation block
@property (nonatomic,readonly) long long outputType;                                                 //@synthesize outputType=_outputType - In the implementation block
@property (nonatomic,readonly) BOOL requiresAssetExport;                                             //@synthesize requiresAssetExport=_requiresAssetExport - In the implementation block
@property (nonatomic,readonly) long long assetExportKind;                                            //@synthesize assetExportKind=_assetExportKind - In the implementation block
@property (nonatomic,readonly) PHAssetExportRequestOptions * assetExportRequestOptions;              //@synthesize assetExportRequestOptions=_assetExportRequestOptions - In the implementation block
+(BOOL)isAssetBundleSupportedByActivityType:(id)arg1 ;
+(BOOL)isLivePhotoBundleSupportedByActivityType:(id)arg1 ;
+(id)_activitiesThatDontRequireAssetExport;
+(unsigned long long)maxFileSizeLimitForActivityType:(id)arg1 asset:(id)arg2 ;
+(id)_activitiesThatSupportLivePhotoBundles;
+(id)_activitiesThatSupportAssetBundles;
+(id)_photosInternalActivities;
+(id)_photosActionSheetActivities;
+(id)_systemActivitiesThatDontSupportMomentShareLinks;
+(id)_activitiesThatDontSupportMomentShareLinks;
+(id)_activitiesThatOnlySupportMomentShareLinks;
+(id)_activitiesThatSupportHEIFHEVC;
+(BOOL)isMomentShareLinkSupportedByActivityType:(id)arg1 ;
+(BOOL)shouldExcludeAlternateVariantForActivityType:(id)arg1 ;
+(BOOL)supportsAssetLocalIdentifierForActivityType:(id)arg1 ;
+(id)descriptionForAssetExportKind:(long long)arg1 ;
+(id)descriptionForOutputType:(long long)arg1 ;
+(BOOL)shouldProvideAlternateVariantForActivityType:(id)arg1 forAsset:(id)arg2 withAvailableSharingVariants:(id)arg3 ;
+(BOOL)shouldProvideCompatibleFormatForActivityType:(id)arg1 andAvailableSharingVariants:(id)arg2 ;
+(BOOL)isIndividualItemPreparationSupportedByActivityType:(id)arg1 ;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)_configure;
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)activityType;
-(PHAsset *)asset;
-(BOOL)_requiresAssetsLibraryURLForAsset:(id)arg1 forActivityType:(id)arg2 ;
-(BOOL)_requiresAssetExportForAsset:(id)arg1 forActivityType:(id)arg2 ;
-(BOOL)_shouldFlattenSlomoVideoForActivityType:(id)arg1 ;
-(id)_customAccessibilityLabel;
-(id)_videoExportPresetForActivityType:(id)arg1 ;
-(id)_videoExportFileTypeForActivityType:(id)arg1 ;
-(BOOL)_wantsLivePhotoBundleForActivityType:(id)arg1 ;
-(BOOL)_wantsAssetBundleForActivityType:(id)arg1 ;
-(void)setSharingVariants:(NSDictionary *)arg1 ;
-(long long)outputType;
-(SCD_Struct_PU13)sharingPreferences;
-(void)setSharingPreferences:(SCD_Struct_PU13)arg1 ;
-(long long)assetExportKind;
-(unsigned long long)maxFileSizeLimit;
-(PHAssetExportRequestOptions *)assetExportRequestOptions;
-(BOOL)requiresAssetExport;
-(id)initWithAsset:(id)arg1 availableSharingVariants:(id)arg2 activityType:(id)arg3 preferences:(SCD_Struct_PU13)arg4 ;
-(NSDictionary *)sharingVariants;
@end

