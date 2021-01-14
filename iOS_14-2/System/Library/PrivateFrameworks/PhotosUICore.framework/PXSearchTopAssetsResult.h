/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>
#import <libobjc.A.dylib/PXSearchResultItem.h>

@protocol PXSearchTopAssetsResultChangeDelegate;
@class NSArray, PHFetchResult, NSString, NSDictionary;

@interface PXSearchTopAssetsResult : NSObject <PHPhotoLibraryChangeObserver, PXSearchResultItem> {

	NSArray* _assetUUIDs;
	PHFetchResult* _topAssetsFetchResult;
	id<PXSearchTopAssetsResultChangeDelegate> _delegate;
	/*^block*/id _topAssetFilter;
	NSString* _priorityAssetUUID;
	NSArray* _removedObjects;
	NSArray* _hiddenObjects;

}

@property (nonatomic,copy,readonly) NSString * priorityAssetUUID;                                    //@synthesize priorityAssetUUID=_priorityAssetUUID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * removedObjects;                                        //@synthesize removedObjects=_removedObjects - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hiddenObjects;                                         //@synthesize hiddenObjects=_hiddenObjects - In the implementation block
@property (nonatomic,readonly) NSArray * assetUUIDs;                                                 //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (nonatomic,readonly) PHFetchResult * topAssetsFetchResult;                                 //@synthesize topAssetsFetchResult=_topAssetsFetchResult - In the implementation block
@property (assign,nonatomic,__weak) id<PXSearchTopAssetsResultChangeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSDictionary * debugDictionary; 
@property (nonatomic,copy) id topAssetFilter;                                                        //@synthesize topAssetFilter=_topAssetFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long itemType; 
+(id)sortedPreviewAssetsFrom:(id)arg1 priorityAssetUUID:(id)arg2 numberOfTopAssets:(long long)arg3 ;
+(id)_fetchAssetsForAssetUUIDs:(id)arg1 ;
+(id)_fetchResultForTopAssets:(id)arg1 ;
+(id)sampledAssetUUIDsFrom:(id)arg1 numberOfTopAssets:(long long)arg2 maxNumberToSample:(long long)arg3 rangeToSample:(long long)arg4 ;
-(NSString *)priorityAssetUUID;
-(id)init;
-(id<PXSearchTopAssetsResultChangeDelegate>)delegate;
-(NSString *)debugDescription;
-(NSArray *)removedObjects;
-(void)setDelegate:(id<PXSearchTopAssetsResultChangeDelegate>)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(unsigned long long)itemType;
-(NSDictionary *)debugDictionary;
-(NSArray *)assetUUIDs;
-(id)topAssetFilter;
-(id)initWithAssetUUIDs:(id)arg1 priorityAssetUUID:(id)arg2 ;
-(void)_filterTopAssets:(id)arg1 ;
-(void)_notifyDelegateOfAssetChanges:(id)arg1 newCuration:(BOOL)arg2 ;
-(BOOL)_shouldRecurateForChangeDetails:(id)arg1 ;
-(void)_curateThumbnailAssets;
-(unsigned long long)numberOfTopAssets;
-(void)setTopAssetFilter:(id)arg1 ;
-(NSArray *)hiddenObjects;
-(PHFetchResult *)topAssetsFetchResult;
-(void)dealloc;
@end

