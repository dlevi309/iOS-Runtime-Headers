/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSString;

@interface PHAssetExportRequestOptions : NSObject {

	BOOL _includeAllAssetResources;
	BOOL _treatLivePhotoAsStill;
	BOOL _flattenSlomoVideos;
	BOOL _dontAllowRAW;
	BOOL _shouldStripLocation;
	BOOL _ensureSRGBCompatibleColorSpace;
	BOOL _disableMetadataCorrections;
	BOOL _forceDateTimeMetadataBaking;
	BOOL _forceLocationMetadataBaking;
	long long _variant;
	NSString* _videoExportPreset;
	NSString* _videoExportFileType;
	long long _locationComparisonStrategy;

}

@property (assign,nonatomic) long long locationComparisonStrategy;              //@synthesize locationComparisonStrategy=_locationComparisonStrategy - In the implementation block
@property (assign,nonatomic) BOOL forceDateTimeMetadataBaking;                  //@synthesize forceDateTimeMetadataBaking=_forceDateTimeMetadataBaking - In the implementation block
@property (assign,nonatomic) BOOL forceLocationMetadataBaking;                  //@synthesize forceLocationMetadataBaking=_forceLocationMetadataBaking - In the implementation block
@property (assign,nonatomic) BOOL includeAllAssetResources;                     //@synthesize includeAllAssetResources=_includeAllAssetResources - In the implementation block
@property (assign,nonatomic) long long variant;                                 //@synthesize variant=_variant - In the implementation block
@property (assign,nonatomic) BOOL treatLivePhotoAsStill;                        //@synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill - In the implementation block
@property (assign,nonatomic) BOOL flattenSlomoVideos;                           //@synthesize flattenSlomoVideos=_flattenSlomoVideos - In the implementation block
@property (assign,nonatomic) BOOL dontAllowRAW;                                 //@synthesize dontAllowRAW=_dontAllowRAW - In the implementation block
@property (assign,nonatomic) BOOL shouldStripLocation;                          //@synthesize shouldStripLocation=_shouldStripLocation - In the implementation block
@property (assign,nonatomic) BOOL ensureSRGBCompatibleColorSpace;               //@synthesize ensureSRGBCompatibleColorSpace=_ensureSRGBCompatibleColorSpace - In the implementation block
@property (nonatomic,copy) NSString * videoExportPreset;                        //@synthesize videoExportPreset=_videoExportPreset - In the implementation block
@property (nonatomic,copy) NSString * videoExportFileType;                      //@synthesize videoExportFileType=_videoExportFileType - In the implementation block
@property (assign,nonatomic) BOOL disableMetadataCorrections;                   //@synthesize disableMetadataCorrections=_disableMetadataCorrections - In the implementation block
-(id)description;
-(long long)variant;
-(NSString *)videoExportPreset;
-(void)setVideoExportPreset:(NSString *)arg1 ;
-(void)setVariant:(long long)arg1 ;
-(BOOL)includeAllAssetResources;
-(void)setIncludeAllAssetResources:(BOOL)arg1 ;
-(BOOL)treatLivePhotoAsStill;
-(void)setTreatLivePhotoAsStill:(BOOL)arg1 ;
-(BOOL)flattenSlomoVideos;
-(void)setFlattenSlomoVideos:(BOOL)arg1 ;
-(BOOL)dontAllowRAW;
-(void)setDontAllowRAW:(BOOL)arg1 ;
-(BOOL)shouldStripLocation;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(BOOL)ensureSRGBCompatibleColorSpace;
-(void)setEnsureSRGBCompatibleColorSpace:(BOOL)arg1 ;
-(NSString *)videoExportFileType;
-(void)setVideoExportFileType:(NSString *)arg1 ;
-(BOOL)disableMetadataCorrections;
-(void)setDisableMetadataCorrections:(BOOL)arg1 ;
-(long long)locationComparisonStrategy;
-(void)setLocationComparisonStrategy:(long long)arg1 ;
-(BOOL)forceDateTimeMetadataBaking;
-(void)setForceDateTimeMetadataBaking:(BOOL)arg1 ;
-(BOOL)forceLocationMetadataBaking;
-(void)setForceLocationMetadataBaking:(BOOL)arg1 ;
@end

