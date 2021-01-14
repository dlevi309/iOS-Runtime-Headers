/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <libobjc.A.dylib/ATAssetLinkControllerObserver.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, NSMutableOrderedSet, NSObject, NSOperationQueue, ATAssetLinkController, NSString;

@interface NMSMediaSyncInfoUpdater : NSObject <ATAssetLinkControllerObserver> {

	NSMutableDictionary* _syncInfo;
	NSMutableOrderedSet* _targetsNeedingSyncInfoSynchronize;
	NSObject*<OS_dispatch_source> _currentSyncInfoSynchronizeTimer;
	NSOperationQueue* _queue;
	BOOL _observing;
	ATAssetLinkController* _assetLinkController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMediaSyncInfoUpdater;
-(id)init;
-(void)_handleMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didUpdateAssetState:(id)arg2 ;
-(void)_handleMediaPinningMusicContentsInvalidatedNotification:(id)arg1 ;
-(void)_handleMediaPinningPodcastsContentsInvalidatedNotification:(id)arg1 ;
-(void)_handleMediaPinningAudiobooksContentsInvalidatedNotification:(id)arg1 ;
-(void)_handleMusicRecommendationsDidUpdateNotification:(id)arg1 ;
-(void)_setNeedsMediaSyncInfoUpdate;
-(void)_applyUpdatesFromAsset:(id)arg1 ;
-(void)beginUpdatingSyncInfo;
-(void)endUpdatingSyncInfo;
@end

