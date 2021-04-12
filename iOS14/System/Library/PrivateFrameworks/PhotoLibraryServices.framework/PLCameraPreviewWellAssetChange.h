/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, NSDate;

@interface PLCameraPreviewWellAssetChange : NSObject {

	BOOL _allowed;
	BOOL _shouldRefreshPreviewWellWithFetchRequest;
	NSString* _assetUUID;
	NSDate* _addedDate;
	double _sortToken;
	NSString* _thumbnailIdentifier;
	unsigned long long _effectiveThumbnailIndex;

}

@property (assign,getter=isAllowed,nonatomic) BOOL allowed;                              //@synthesize allowed=_allowed - In the implementation block
@property (nonatomic,copy) NSString * assetUUID;                                         //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,copy) NSDate * addedDate;                                           //@synthesize addedDate=_addedDate - In the implementation block
@property (assign,nonatomic) double sortToken;                                           //@synthesize sortToken=_sortToken - In the implementation block
@property (nonatomic,copy) NSString * thumbnailIdentifier;                               //@synthesize thumbnailIdentifier=_thumbnailIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long effectiveThumbnailIndex;                 //@synthesize effectiveThumbnailIndex=_effectiveThumbnailIndex - In the implementation block
@property (assign,nonatomic) BOOL shouldRefreshPreviewWellWithFetchRequest;              //@synthesize shouldRefreshPreviewWellWithFetchRequest=_shouldRefreshPreviewWellWithFetchRequest - In the implementation block
+(id)cameraPreviewWellAssetChangeToForceRefetch;
-(BOOL)isAllowed;
-(long long)compare:(id)arg1 ;
-(double)sortToken;
-(unsigned long long)effectiveThumbnailIndex;
-(long long)compareToDate:(id)arg1 sortToken:(double)arg2 ;
-(void)setEffectiveThumbnailIndex:(unsigned long long)arg1 ;
-(NSString *)thumbnailIdentifier;
-(BOOL)shouldRefreshPreviewWellWithFetchRequest;
-(id)initWithManagedAsset:(id)arg1 ;
-(void)setShouldRefreshPreviewWellWithFetchRequest:(BOOL)arg1 ;
-(void)setAddedDate:(NSDate *)arg1 ;
-(NSString *)assetUUID;
-(void)setAllowed:(BOOL)arg1 ;
-(void)setThumbnailIdentifier:(NSString *)arg1 ;
-(NSDate *)addedDate;
-(void)setAssetUUID:(NSString *)arg1 ;
-(void)setSortToken:(double)arg1 ;
@end

