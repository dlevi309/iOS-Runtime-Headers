/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue, PXPlacesSnapshotFactoryDelegate;
@class NSString, UIImage, NSMutableArray, NSObject, PHAssetCollection, PHAsset, PHFetchResult, NSTimer;

@interface PXPlacesSnapshotFactory : NSObject <PHPhotoLibraryChangeObserver> {

	NSString* _cachedFilePathLight;
	NSString* _cachedFilePathDark;
	UIImage* _cachedSnapshotImageLight;
	UIImage* _cachedSnapshotImageDark;
	NSString* _cachedSnapshotImageIdentifier;
	UIImage* _placeholderImage;
	long long _cachedCount;
	NSMutableArray* _requestedCompletionBlocks;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _concurentQueue;
	BOOL _isRegisteredForPhotoLibraryChanges;
	BOOL _countCacheInvalidated;
	long long _currentUserInterfaceStyle;
	id<PXPlacesSnapshotFactoryDelegate> _delegate;
	PHAssetCollection* _placesCollection;
	PHAsset* _snapshottedAsset;
	PHFetchResult* _placesAssetsFetchResult;
	PHFetchResult* _assetCountFetchResult;
	NSTimer* _assetCountChangedTimer;
	NSMutableArray* _localSearches;

}

@property (assign,nonatomic) BOOL isRegisteredForPhotoLibraryChanges;                          //@synthesize isRegisteredForPhotoLibraryChanges=_isRegisteredForPhotoLibraryChanges - In the implementation block
@property (nonatomic,retain) PHAsset * snapshottedAsset;                                       //@synthesize snapshottedAsset=_snapshottedAsset - In the implementation block
@property (nonatomic,retain) PHFetchResult * placesAssetsFetchResult;                          //@synthesize placesAssetsFetchResult=_placesAssetsFetchResult - In the implementation block
@property (assign,nonatomic) BOOL countCacheInvalidated;                                       //@synthesize countCacheInvalidated=_countCacheInvalidated - In the implementation block
@property (nonatomic,retain) PHFetchResult * assetCountFetchResult;                            //@synthesize assetCountFetchResult=_assetCountFetchResult - In the implementation block
@property (nonatomic,retain) NSTimer * assetCountChangedTimer;                                 //@synthesize assetCountChangedTimer=_assetCountChangedTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * localSearches;                                   //@synthesize localSearches=_localSearches - In the implementation block
@property (assign,nonatomic) long long currentUserInterfaceStyle;                              //@synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle - In the implementation block
@property (assign,nonatomic,__weak) id<PXPlacesSnapshotFactoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHAssetCollection * placesCollection;                             //@synthesize placesCollection=_placesCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleAsyncPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)_addLocalSearch:(id)arg1 ;
-(id)_latestAssetWithLocation;
-(void)setAssetCountChangedTimer:(NSTimer *)arg1 ;
-(id)init;
-(void)setIsRegisteredForPhotoLibraryChanges:(BOOL)arg1 ;
-(id<PXPlacesSnapshotFactoryDelegate>)delegate;
-(id)_placeHolderImageForExtendedTraitCollection:(id)arg1 ;
-(void)setCurrentUserInterfaceStyle:(long long)arg1 ;
-(void)setCountCacheInvalidated:(BOOL)arg1 ;
-(NSTimer *)assetCountChangedTimer;
-(long long)assetCountWithForcedRefresh:(BOOL)arg1 ;
-(void)requestPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(BOOL)countCacheInvalidated;
-(void)setDelegate:(id<PXPlacesSnapshotFactoryDelegate>)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)requestAssetCountWithForcedRefresh:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(PHAsset *)snapshottedAsset;
-(long long)currentUserInterfaceStyle;
-(void)requestPlacesImageOfAsset:(id)arg1 withSnapshotOptions:(id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(NSMutableArray *)localSearches;
-(void)_removeLocalSearch:(id)arg1 ;
-(PHFetchResult *)assetCountFetchResult;
-(void)_requestPlacesSnapshotWithSnapshotOptions:(id)arg1 visibleRegion:(SCD_Struct_PX2)arg2 andCompletion:(/*^block*/id)arg3 ;
-(PHAssetCollection *)placesCollection;
-(void)setLocalSearches:(NSMutableArray *)arg1 ;
-(void)_fetchImageOfAsset:(id)arg1 withSnapshotOptions:(id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)setPlacesCollection:(PHAssetCollection *)arg1 ;
-(void)setPlacesAssetsFetchResult:(PHFetchResult *)arg1 ;
-(void)requestMapSnapshotForQuery:(id)arg1 snapshotOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAssetCountFetchResult:(PHFetchResult *)arg1 ;
-(void)removePreviousCachedImages;
-(void)_saveImage:(id)arg1 ofAsset:(id)arg2 atPath:(id)arg3 ;
-(void)tickAssetCountChangedTimer:(id)arg1 ;
-(BOOL)_imageExistsWithLocalIdentifier:(id)arg1 ;
-(void)setSnapshottedAsset:(PHAsset *)arg1 ;
-(BOOL)isRegisteredForPhotoLibraryChanges;
-(void)requestPlacesSnapshotWithSnapshotOptions:(id)arg1 assets:(id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(PHFetchResult *)placesAssetsFetchResult;
@end

