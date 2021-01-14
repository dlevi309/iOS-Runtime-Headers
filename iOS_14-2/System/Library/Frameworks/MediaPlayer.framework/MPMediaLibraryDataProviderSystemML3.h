/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@protocol MPArtworkDataSource, OS_dispatch_queue;
@class NSObject;

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {

	id<MPArtworkDataSource> _completeMyCollectionArtworkDataSource;
	long long _currentRevision;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)_localizedGeniusErrorForError:(id)arg1 geniusEnabled:(BOOL)arg2 ;
+(id)_localizedCloudGeniusErrorForError:(id)arg1 ;
-(id)errorResolverForItem:(id)arg1 ;
-(void)_initInstanceVariableOnce;
-(BOOL)isGeniusEnabled;
-(id)initWithLibrary:(id)arg1 ;
-(id)completeMyCollectionArtworkDataSource;
-(void)geniusItemsForSeedItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class*)arg3 ;
-(void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long)_currentRevision;
-(void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)updateEntitesToCurrentRevision;
-(void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)releaseGeniusClusterPlaylist:(void*)arg1 ;
@end

