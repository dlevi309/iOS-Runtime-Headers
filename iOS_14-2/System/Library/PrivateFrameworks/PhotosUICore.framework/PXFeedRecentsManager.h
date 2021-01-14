/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PLCloudFeedEntriesObserver.h>
#import <libobjc.A.dylib/PLAssetChangeObserver.h>
#import <libobjc.A.dylib/PLPhotoLibraryShouldReloadObserver.h>

@protocol PXFeedRecentsManagerDelegate;
@class NSMutableArray, PHPhotoLibrary, NSOrderedSet, NSArray;

@interface PXFeedRecentsManager : NSObject <PLCloudFeedEntriesObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver> {

	NSMutableArray* _pendingFeedEntriesChangeNotifications;
	NSMutableArray* _pendingAssetsChangeNotifications;
	PHPhotoLibrary* _photoLibrary;
	long long _count;
	id<PXFeedRecentsManagerDelegate> _delegate;
	NSOrderedSet* __cachedRecentAssets;
	NSArray* __cachedRecentPHAssets;

}

@property (setter=_setPhotoLibrary:,nonatomic,retain) PHPhotoLibrary * photoLibrary;                       //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,setter=_setCount:,nonatomic) long long count;                                            //@synthesize count=_count - In the implementation block
@property (setter=_setCachedRecentAssets:,nonatomic,copy) NSOrderedSet * _cachedRecentAssets;              //@synthesize _cachedRecentAssets=__cachedRecentAssets - In the implementation block
@property (setter=_setCachedRecentPHAssets:,nonatomic,copy) NSArray * _cachedRecentPHAssets;               //@synthesize _cachedRecentPHAssets=__cachedRecentPHAssets - In the implementation block
@property (assign,nonatomic,__weak) id<PXFeedRecentsManagerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * recentAssets; 
@property (nonatomic,copy,readonly) NSArray * recentPHAssets; 
-(PHPhotoLibrary *)photoLibrary;
-(id<PXFeedRecentsManagerDelegate>)delegate;
-(long long)count;
-(void)setDelegate:(id<PXFeedRecentsManagerDelegate>)arg1 ;
-(NSOrderedSet *)recentAssets;
-(id)initWithPhotoLibrary:(id)arg1 count:(long long)arg2 ;
-(void)_setCachedRecentAssets:(id)arg1 ;
-(NSArray *)recentPHAssets;
-(BOOL)_updateCachedRecentAssets;
-(void)_invalidateCachedRecentAssets;
-(void)_setPhotoLibrary:(id)arg1 ;
-(NSOrderedSet *)_cachedRecentAssets;
-(NSArray *)_cachedRecentPHAssets;
-(void)_setCachedRecentPHAssets:(id)arg1 ;
-(void)shouldReload:(id)arg1 ;
-(void)_didFinishPostingNotifications:(id)arg1 ;
-(void)assetsDidChange:(id)arg1 ;
-(void)cloudFeedEntriesDidChange:(id)arg1 ;
-(void)_setCount:(long long)arg1 ;
-(void)dealloc;
@end

