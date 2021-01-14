/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PUAssetsDataSourceManagerDelegate.h>
#import <libobjc.A.dylib/PUReviewAssetsDataSourceManagerDelegate.h>

@class PUReviewAssetsDataSourceManager, NSString;

@interface AEWrappedDataSourceManager : PXAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate, PUReviewAssetsDataSourceManagerDelegate> {

	PUReviewAssetsDataSourceManager* __attachedDataSourceManager;

}

@property (setter=_setAttachedDataSourceManager:,nonatomic,retain) PUReviewAssetsDataSourceManager * _attachedDataSourceManager;              //@synthesize _attachedDataSourceManager=__attachedDataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createInitialDataSource;
-(void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 changeDetails:(id)arg3 ;
-(void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 ;
-(id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1 ;
-(void)attachDataSourceManager:(id)arg1 ;
-(void)detachCurrentDataSourceManager;
-(void)_createDataSourceFromAssetsDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(PUReviewAssetsDataSourceManager *)_attachedDataSourceManager;
-(void)_setAttachedDataSourceManager:(id)arg1 ;
@end

