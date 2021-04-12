/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSString;

@interface PHAssetExportRequestOptions : NSObject {

	BOOL _includeAllAssetResources;
	BOOL _treatLivePhotoAsStill;
	BOOL _flattenSlomoVideos;
	BOOL _dontAllowRAW;
	BOOL _shouldStripLocation;
	BOOL _shouldStripCaption;
	BOOL _shouldStripAccessibilityDescription;
	BOOL _disableMetadataCorrections;
	BOOL _shouldBundleComplexAssetResources;
	BOOL _forceDateTimeMetadataBaking;
	BOOL _forceLocationMetadataBaking;
	BOOL _forceCaptionMetadataBaking;
	BOOL _forceAccessibilityDescriptionMetadataBaking;
	long long _variant;
	NSString* _videoExportPreset;
	NSString* _videoExportFileType;
	NSString* _customFilenameBase;
	long long _locationComparisonStrategy;

}

@property (assign,nonatomic) long long locationComparisonStrategy;                          //@synthesize locationComparisonStrategy=_locationComparisonStrategy - In the implementation block
@property (assign,nonatomic) BOOL forceDateTimeMetadataBaking;                              //@synthesize forceDateTimeMetadataBaking=_forceDateTimeMetadataBaking - In the implementation block
@property (assign,nonatomic) BOOL forceLocationMetadataBaking;                              //@synthesize forceLocationMetadataBaking=_forceLocationMetadataBaking - In the implementation block
@property (assign,nonatomic) BOOL forceCaptionMetadataBaking;                               //@synthesize forceCaptionMetadataBaking=_forceCaptionMetadataBaking - In the implementation block
@property (assign,nonatomic) BOOL forceAccessibilityDescriptionMetadataBaking;              //@synthesize forceAccessibilityDescriptionMetadataBaking=_forceAccessibilityDescriptionMetadataBaking - In the implementation block
@property (assign,nonatomic) BOOL includeAllAssetResources;                                 //@synthesize includeAllAssetResources=_includeAllAssetResources - In the implementation block
@property (assign,nonatomic) long long variant;                                             //@synthesize variant=_variant - In the implementation block
@property (assign,nonatomic) BOOL treatLivePhotoAsStill;                                    //@synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill - In the implementation block
@property (assign,nonatomic) BOOL flattenSlomoVideos;                                       //@synthesize flattenSlomoVideos=_flattenSlomoVideos - In the implementation block
@property (assign,nonatomic) BOOL dontAllowRAW;                                             //@synthesize dontAllowRAW=_dontAllowRAW - In the implementation block
@property (assign,nonatomic) BOOL shouldStripLocation;                                      //@synthesize shouldStripLocation=_shouldStripLocation - In the implementation block
@property (assign,nonatomic) BOOL shouldStripCaption;                                       //@synthesize shouldStripCaption=_shouldStripCaption - In the implementation block
@property (assign,nonatomic) BOOL shouldStripAccessibilityDescription;                      //@synthesize shouldStripAccessibilityDescription=_shouldStripAccessibilityDescription - In the implementation block
@property (nonatomic,copy) NSString * videoExportPreset;                                    //@synthesize videoExportPreset=_videoExportPreset - In the implementation block
@property (nonatomic,copy) NSString * videoExportFileType;                                  //@synthesize videoExportFileType=_videoExportFileType - In the implementation block
@property (assign,nonatomic) BOOL disableMetadataCorrections;                               //@synthesize disableMetadataCorrections=_disableMetadataCorrections - In the implementation block
@property (assign,nonatomic) BOOL shouldBundleComplexAssetResources;                        //@synthesize shouldBundleComplexAssetResources=_shouldBundleComplexAssetResources - In the implementation block
@property (nonatomic,copy) NSString * customFilenameBase;                                   //@synthesize customFilenameBase=_customFilenameBase - In the implementation block
-(BOOL)forceAccessibilityDescriptionMetadataBaking;
-(long long)variant;
-(void)setVariant:(long long)arg1 ;
-(void)setForceAccessibilityDescriptionMetadataBaking:(BOOL)arg1 ;
-(void)setForceCaptionMetadataBaking:(BOOL)arg1 ;
-(id)description;
-(void)setShouldBundleComplexAssetResources:(BOOL)arg1 ;
-(BOOL)dontAllowRAW;
-(BOOL)includeAllAssetResources;
-(void)setIncludeAllAssetResources:(BOOL)arg1 ;
-(BOOL)treatLivePhotoAsStill;
-(BOOL)flattenSlomoVideos;
-(void)setTreatLivePhotoAsStill:(BOOL)arg1 ;
-(void)setFlattenSlomoVideos:(BOOL)arg1 ;
-(void)setDontAllowRAW:(BOOL)arg1 ;
-(BOOL)shouldStripLocation;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(BOOL)shouldStripCaption;
-(void)setShouldStripCaption:(BOOL)arg1 ;
-(BOOL)shouldStripAccessibilityDescription;
-(void)setShouldStripAccessibilityDescription:(BOOL)arg1 ;
-(NSString *)videoExportFileType;
-(void)setVideoExportFileType:(NSString *)arg1 ;
-(BOOL)shouldBundleComplexAssetResources;
-(NSString *)customFilenameBase;
-(void)setCustomFilenameBase:(NSString *)arg1 ;
-(long long)locationComparisonStrategy;
-(void)setLocationComparisonStrategy:(long long)arg1 ;
-(BOOL)forceCaptionMetadataBaking;
-(NSString *)videoExportPreset;
-(BOOL)forceDateTimeMetadataBaking;
-(void)setVideoExportPreset:(NSString *)arg1 ;
-(void)setForceDateTimeMetadataBaking:(BOOL)arg1 ;
-(void)setDisableMetadataCorrections:(BOOL)arg1 ;
-(BOOL)forceLocationMetadataBaking;
-(void)setForceLocationMetadataBaking:(BOOL)arg1 ;
-(BOOL)disableMetadataCorrections;
@end

