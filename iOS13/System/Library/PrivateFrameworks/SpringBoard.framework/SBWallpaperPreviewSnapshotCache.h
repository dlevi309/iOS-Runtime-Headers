/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBIconIndexNodeObserver.h>
#import <libobjc.A.dylib/SBWallpaperObserver.h>

@class SBWallpaperController, SBFMappedImageCache, SBIconController, SBIconModel, NSString;

@interface SBWallpaperPreviewSnapshotCache : NSObject <SBIconIndexNodeObserver, SBWallpaperObserver> {

	SBWallpaperController* _wallpaperController;
	SBFMappedImageCache* _imageCache;
	long long _invalidatedLocations;
	SBIconController* _iconController;
	SBIconModel* _model;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)cacheKeyForVariant:(long long)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)nodeDidMoveContainedNodes:(id)arg1 ;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(id)snapshotForVariant:(long long)arg1 options:(unsigned long long)arg2 wallpaperImage:(id)arg3 ;
-(id)initWithImageCache:(id)arg1 iconController:(id)arg2 wallpaperController:(id)arg3 ;
-(void)_switchToIconModel:(id)arg1 ;
-(void)_backlightFadeFinished;
-(void)_iconControllerDidChangeIconModel:(id)arg1 ;
-(id)_snapshotProviderForVariant:(long long)arg1 options:(unsigned long long)arg2 wallpaperImage:(id)arg3 ;
-(void)_modelWillLayout;
-(void)_modelDidLayout;
-(void)invalidateSnapshotsForLocations:(long long)arg1 ;
-(void)regenerateSnapshotsForLocations:(long long)arg1 ;
-(long long)_orientationForOptions:(unsigned long long)arg1 ;
-(id)_homeScreenSnapshotProviderWithOptions:(unsigned long long)arg1 wallpaperImage:(id)arg2 ;
-(id)_lockScreenSnapshotProviderWithOptions:(unsigned long long)arg1 wallpaperImage:(id)arg2 ;
-(id)lockScreenSnapshot;
-(id)homeScreenSnapshot;
@end

