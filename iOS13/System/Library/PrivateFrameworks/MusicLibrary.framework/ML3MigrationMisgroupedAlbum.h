/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSMutableArray, NSArray;

@interface ML3MigrationMisgroupedAlbum : NSObject {

	NSMutableArray* _misgroupedTracks;
	long long _albumPID;
	long long _albumArtistPID;

}

@property (nonatomic,readonly) long long albumPID;                      //@synthesize albumPID=_albumPID - In the implementation block
@property (nonatomic,readonly) long long albumArtistPID;                //@synthesize albumArtistPID=_albumArtistPID - In the implementation block
@property (nonatomic,readonly) NSArray * misgroupedTracks; 
-(id)initWithAlbumPID:(long long)arg1 albumArtistPID:(long long)arg2 ;
-(void)addMisgroupedTrack:(id)arg1 ;
-(NSArray *)misgroupedTracks;
-(long long)albumArtistPID;
-(long long)albumPID;
@end

