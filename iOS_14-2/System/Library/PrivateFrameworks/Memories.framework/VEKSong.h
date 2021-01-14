/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isLocal;
-(long long)mood;
-(id)songID;
-(NSSet *)genres;
-(NSString *)artistName;
-(id)description;
-(FMSong *)fmSong;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)artworkPath;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isiTunesMusic;
-(BOOL)isSmartMusic;
-(NSString *)songName;
-(id)previewPlayerItemForDuration:(SCD_Struct_PM8)arg1 normalizedVolume:(double*)arg2 ;
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

