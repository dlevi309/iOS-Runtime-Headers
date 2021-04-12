/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PUAssetsDataSourceManagerDelegate.h>

@class NSDictionary, PUAssetsDataSourceManager, NSString;

@interface PUAssetExplorerReviewScreenAssetsDataSourceManager : PUAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate> {

	NSDictionary* __replacementAssetsByUUID;
	PUAssetsDataSourceManager* __originalDataSourceManager;

}

@property (setter=_setReplacementAssetsByUUID:,nonatomic,copy) NSDictionary * _replacementAssetsByUUID;                                 //@synthesize _replacementAssetsByUUID=__replacementAssetsByUUID - In the implementation block
@property (setter=_setOriginalDataSourceManager:,nonatomic,retain) PUAssetsDataSourceManager * _originalDataSourceManager;              //@synthesize _originalDataSourceManager=__originalDataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateDataSource;
-(void)performChanges:(/*^block*/id)arg1 ;
-(NSDictionary *)_replacementAssetsByUUID;
-(void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 ;
-(id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1 ;
-(id)initWithOriginalDataSourceManager:(id)arg1 ;
-(void)detachFromOriginalDataSourceManager;
-(void)_setReplacementAssetsByUUID:(id)arg1 ;
-(PUAssetsDataSourceManager *)_originalDataSourceManager;
-(void)_setOriginalDataSourceManager:(id)arg1 ;
@end

