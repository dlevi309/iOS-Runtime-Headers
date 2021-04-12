/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPMediaItem, FMSong, NSString, NSSet;

@interface VEKSong : NSObject <NSCopying> {

	unsigned long long _iTunesID;
	MPMediaItem* _iTunesMediaItem;
	FMSong* _fmSong;

}

@property (assign,nonatomic) unsigned long long iTunesID;                //@synthesize iTunesID=_iTunesID - In the implementation block
@property (nonatomic,retain) MPMediaItem * iTunesMediaItem;              //@synthesize iTunesMediaItem=_iTunesMediaItem - In the implementation block
@property (nonatomic,retain) FMSong * fmSong;                            //@synthesize fmSong=_fmSong - In the implementation block
@property (nonatomic,readonly) id songID; 
@property (nonatomic,readonly) BOOL isSmartMusic; 
@property (nonatomic,readonly) BOOL isiTunesMusic; 
@property (nonatomic,readonly) NSString * songName; 
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSString * artworkPath; 
@property (nonatomic,readonly) NSSet * genres; 
@property (nonatomic,readonly) long long mood; 
@property (nonatomic,readonly) BOOL isLocal; 
+(void)initialize;
+(id)availableSmartSongs;
+(id)featuredSmartSongsForMood:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isLocal;
-(long long)mood;
-(NSString *)artistName;
-(NSString *)artworkPath;
-(NSSet *)genres;
-(id)songID;
-(id)previewPlayerItemForDuration:(SCD_Struct_PM5)arg1 normalizedVolume:(double*)arg2 ;
-(FMSong *)fmSong;
-(NSString *)songName;
-(BOOL)isSmartMusic;
-(BOOL)isiTunesMusic;
-(id)initWithiTunesMusicID:(unsigned long long)arg1 ;
-(id)initWithSmartMusicID:(id)arg1 ;
-(id)_fetchMediaItemForMediaID:(unsigned long long)arg1 ;
-(void)setFmSong:(FMSong *)arg1 ;
-(void)setITunesID:(unsigned long long)arg1 ;
-(void)setITunesMediaItem:(MPMediaItem *)arg1 ;
-(unsigned long long)iTunesID;
-(MPMediaItem *)iTunesMediaItem;
-(id)fetchSmartSongArtwork;
-(long long)moodForMoodString:(id)arg1 ;
@end

