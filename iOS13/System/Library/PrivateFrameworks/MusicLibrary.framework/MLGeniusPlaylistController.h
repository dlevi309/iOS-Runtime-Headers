/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject {

	void* _echo;
	void* _echo_library;
	void* _echo_cluster_playlist;
	NSMutableData* _sharedBlobMutableData;

}
+(id)geniusTracksForSeedTrack:(id)arg1 error:(id*)arg2 ;
+(id)playlistControllerWithSeedTracks:(id)arg1 error:(id*)arg2 ;
+(void)populateContainer:(id)arg1 withSeedTrack:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(BOOL)hasGeniusDataAvailable;
+(BOOL)hasGeniusFeatureEnabled;
+(unsigned long long)defaultMinTrackCount;
+(unsigned long long)defaultTrackCount;
+(BOOL)useFakeGeniusData;
+(void)ignoreUnusedWarnings;
-(id)init;
-(void)dealloc;
-(id)tracksFromClusterForCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_onBackgroundQueue_fakePopulateContainer:(id)arg1 withSeedTrack:(id)arg2 error:(id*)arg3 ;
-(BOOL)_onBackgroundQueue_populateContainer:(id)arg1 seedTrack:(id)arg2 error:(id*)arg3 ;
-(BOOL)_createClusterPlaylistWithSeedTracks:(id)arg1 error:(id*)arg2 ;
-(id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)arg1 maxTracks:(unsigned long long)arg2 stride:(int)arg3 ;
-(BOOL)_canIncludeTrackInGeniusContainer:(id)arg1 ;
-(id)_sharedBlobMutableData;
@end

