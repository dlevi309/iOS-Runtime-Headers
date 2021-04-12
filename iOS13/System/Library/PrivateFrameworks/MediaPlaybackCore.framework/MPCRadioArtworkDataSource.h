/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@protocol OS_dispatch_queue;
@class CPLRUDictionary, NSObject;

@interface MPCRadioArtworkDataSource : MPAbstractNetworkArtworkDataSource {

	unsigned long long _backgroundCacheSize;
	unsigned long long _cacheSize;
	CPLRUDictionary* _cachedArtworkRepresentations;
	NSObject*<OS_dispatch_queue> _cachedArtworkRepresentationsAccessQueue;
	long long _resumeToForegroundCacheSize;

}
+(id)sharedRadioArtworkDataSource;
-(id)init;
-(void)dealloc;
-(void)_clearCache;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(void)_handleDidEnterBackgroundNotification:(id)arg1 ;
-(void)_handleDidReceiveMemoryWarningNotification:(id)arg1 ;
-(void)_handleWillEnterForegroundNotification:(id)arg1 ;
-(void)_cacheArtworkRepresentation:(id)arg1 forKey:(id)arg2 ;
-(void)_setCacheSize:(unsigned long long)arg1 preserveExisting:(BOOL)arg2 ;
@end

