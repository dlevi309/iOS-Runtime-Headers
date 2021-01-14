/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUErrorPresentationController.h>

@class NSDictionary;

@interface PUSharingErrorPresentationController : PUErrorPresentationController {

	unsigned long long _source;
	long long _preparationType;
	NSDictionary* _itemSourcesByAssetUUID;

}

@property (nonatomic,readonly) unsigned long long source;                      //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) long long preparationType;                      //@synthesize preparationType=_preparationType - In the implementation block
@property (nonatomic,copy) NSDictionary * itemSourcesByAssetUUID;              //@synthesize itemSourcesByAssetUUID=_itemSourcesByAssetUUID - In the implementation block
+(long long)sharingErrorTypeFromError:(id)arg1 ;
+(id)_defaultTitleForSource:(unsigned long long)arg1 assets:(id)arg2 ;
+(id)_defaultTitleForDownloadErrorForAssets:(id)arg1 forSource:(unsigned long long)arg2 ;
+(id)_mediaSpecificMessageForKeyPrefix:(id)arg1 forAssets:(id)arg2 ;
+(long long)errorTypeFromSimulatedErrorType:(long long)arg1 ;
+(BOOL)errorIsDownloadError:(id)arg1 ;
+(BOOL)errorIsLowDiskSpaceError:(id)arg1 ;
+(BOOL)errorIsUserNeedsReviewCloudSettingsError:(id)arg1 ;
-(void)setItemSourcesByAssetUUID:(NSDictionary *)arg1 ;
-(id)initWithErrors:(id)arg1 forAssets:(id)arg2 fromSource:(unsigned long long)arg3 preparationType:(long long)arg4 ;
-(long long)preparationType;
-(NSDictionary *)itemSourcesByAssetUUID;
-(BOOL)shouldShowFileRadarAction;
-(BOOL)shouldIncludeAssetInRadarDescription:(id)arg1 ;
-(id)additionalRadarDescriptionLinesForAsset:(id)arg1 ;
-(void)configureRadarPropertiesFromError:(id)arg1 withAssets:(id)arg2 ;
-(void)configureAlertPropertiesFromError:(id)arg1 withAssets:(id)arg2 willShowFileRadarButton:(BOOL)arg3 alertCompletion:(/*^block*/id)arg4 ;
-(unsigned long long)source;
@end

