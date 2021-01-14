/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject {

	void* _echo;
	void* _echo_library;
	void* _echo_cluster_playlist;
	NSMutableData* _sharedBlobMutableData;

}
+(BOOL)hasGeniusFeatureEnabled;
+(BOOL)hasGeniusDataAvailable;
+(id)geniusTracksForSeedTrack:(id)arg1 error:(id*)arg2 ;
+(id)playlistControllerWithSeedTracks:(id)arg1 error:(id*)arg2 ;
+(void)populateContainer:(id)arg1 withSeedTrack:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(unsigned long long)defaultMinTrackCount;
+(unsigned long long)defaultTrackCount;
+(BOOL)useFakeGeniusData;
+(void)ignoreUnusedWarnings;
-(id)init;
-(id)tracksFromClusterForCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(BOOL)_onBackgroundQueue_fakePopulateContainer:(id)arg1 withSeedTrack:(id)arg2 error:(id*)arg3 ;
-(BOOL)_onBackgroundQueue_populateContainer:(id)arg1 seedTrack:(id)arg2 error:(id*)arg3 ;
-(BOOL)_createClusterPlaylistWithSeedTracks:(id)arg1 error:(id*)arg2 ;
-(id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)arg1 maxTracks:(unsigned long long)arg2 stride:(int)arg3 ;
-(BOOL)_canIncludeTrackInGeniusContainer:(id)arg1 ;
-(id)_sharedBlobMutableData;
@end

