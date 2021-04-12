/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(void)_clearCache;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(void)dealloc;
-(void)_handleDidEnterBackgroundNotification:(id)arg1 ;
-(void)_handleDidReceiveMemoryWarningNotification:(id)arg1 ;
-(void)_handleWillEnterForegroundNotification:(id)arg1 ;
-(void)_cacheArtworkRepresentation:(id)arg1 forKey:(id)arg2 ;
-(void)_setCacheSize:(unsigned long long)arg1 preserveExisting:(BOOL)arg2 ;
@end

