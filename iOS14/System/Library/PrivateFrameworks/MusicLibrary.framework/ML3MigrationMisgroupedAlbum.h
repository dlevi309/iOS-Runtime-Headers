/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)albumPID;
-(id)initWithAlbumPID:(long long)arg1 albumArtistPID:(long long)arg2 ;
-(void)addMisgroupedTrack:(id)arg1 ;
-(NSArray *)misgroupedTracks;
-(long long)albumArtistPID;
@end

