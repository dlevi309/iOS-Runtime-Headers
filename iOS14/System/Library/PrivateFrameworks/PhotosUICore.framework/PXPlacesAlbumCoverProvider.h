/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue, PXPlacesSnapshotFactoryDelegate;
@class UIImage, NSString, NSObject, PXPlacesSnapshotFactory, PHAssetCollection, NSMutableDictionary;

@interface PXPlacesAlbumCoverProvider : NSObject {

	UIImage* _cachedSnapshotImage;
	NSString* _cachedSnapshotImageIdentifier;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSObject*<OS_dispatch_queue> _requestsQueue;
	long long _cachedCount;
	PXPlacesSnapshotFactory* _factory;
	id<PXPlacesSnapshotFactoryDelegate> _factoryDelegate;
	PHAssetCollection* _placesCollection;
	NSMutableDictionary* _cachedPlaceholders;

}

@property (nonatomic,retain) PXPlacesSnapshotFactory * factory;                                //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) id<PXPlacesSnapshotFactoryDelegate> factoryDelegate;              //@synthesize factoryDelegate=_factoryDelegate - In the implementation block
@property (nonatomic,retain) PHAssetCollection * placesCollection;                             //@synthesize placesCollection=_placesCollection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPlaceholders;                         //@synthesize cachedPlaceholders=_cachedPlaceholders - In the implementation block
@property (assign,nonatomic) long long cachedCount;                                            //@synthesize cachedCount=_cachedCount - In the implementation block
+(id)_cachedSnapshotPathForFilename:(id)arg1 ;
+(id)_cachedSnapshotPathDark;
+(id)_cachedSnapshotPathLight;
-(id)placesAlbumCoverProviderLog;
-(id)_placeHolderImageForExtendedTraitCollection:(id)arg1 ;
-(id<PXPlacesSnapshotFactoryDelegate>)factoryDelegate;
-(void)setCachedPlaceholders:(NSMutableDictionary *)arg1 ;
-(id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1 ;
-(void)preloadCachedSnapshotForUserInterfaceStyle:(long long)arg1 ;
-(void)requestPlacesAlbumCover:(id)arg1 snapshotTraitCollection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PXPlacesSnapshotFactory *)factory;
-(BOOL)_fetchCachedSnapshotImage:(out id*)arg1 andIdentifier:(out id*)arg2 forUserInterfaceStyle:(long long)arg3 ;
-(void)requestAssetCountWithForcedRefresh:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCachedCount:(long long)arg1 ;
-(PHAssetCollection *)placesCollection;
-(id)initWithDelegate:(id)arg1 andPlacesCollection:(id)arg2 ;
-(void)preloadPlaceholderForTraitCollection:(id)arg1 ;
-(void)setPlacesCollection:(PHAssetCollection *)arg1 ;
-(void)setFactory:(PXPlacesSnapshotFactory *)arg1 ;
-(void)setFactoryDelegate:(id<PXPlacesSnapshotFactoryDelegate>)arg1 ;
-(id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(NSMutableDictionary *)cachedPlaceholders;
-(BOOL)_imageExistsWithLocalIdentifier:(id)arg1 ;
-(long long)cachedCount;
@end

