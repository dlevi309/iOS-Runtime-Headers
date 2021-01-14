/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPhotosDetailsContext.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PHFetchResult, NSString;

@interface PXPeopleDetailsContext : PXPhotosDetailsContext <PXPhotoLibraryUIChangeObserver> {

	NSObject*<OS_dispatch_queue> _fetchingQueue;
	PHFetchResult* _keyFaceAssetFetchResult;

}

@property (nonatomic,readonly) PHFetchResult * keyFaceAssetFetchResult;              //@synthesize keyFaceAssetFetchResult=_keyFaceAssetFetchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetCollectionListFetchResultForPeople:(id)arg1 assetCount:(unsigned long long*)arg2 ;
+(id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 keyAssets:(id)arg3 enableCuration:(BOOL)arg4 enableKeyAssets:(BOOL)arg5 viewSourceOrigin:(long long)arg6 ;
+(id)photosDetailsContextForAsset:(id)arg1 parentContext:(id)arg2 ;
+(id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 viewSourceOrigin:(long long)arg3 ;
-(void)didPerformChanges;
-(id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(id)initWithPeople:(id)arg1 parentContext:(id)arg2 ;
-(id)initWithPeople:(id)arg1 parentContext:(id)arg2 assetCollectionsFetch:(id)arg3 ;
-(void)setKeyFaceAssetFetchResult:(PHFetchResult *)arg1 ;
-(void)_updateKeyFaceAssetFetchResult;
-(id)_fetchKeyFaceAssetFetchResultFromPerson:(id)arg1 ;
-(id)_displayTitleForPeople:(id)arg1 ;
-(PHFetchResult *)keyFaceAssetFetchResult;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)shouldUseKeyFace;
@end

