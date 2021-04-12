/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
*/


#import <AccessoryMediaLibrary/AccessoryMediaLibrary-Structs.h>
@class NSString;

@interface ACCMediaLibraryUpdatePlaylistContentItem : NSObject {

	NSString* _mediaLibraryUID;
	unsigned long long _playlistPersistentID;
	unsigned long long _validMask;
	unsigned long long _persistentID;
	NSString* _title;
	NSString* _albumTitle;
	NSString* _artist;
	NSString* _albumArtist;
	NSString* _genre;
	NSString* _composer;

}

@property (nonatomic,retain) NSString * mediaLibraryUID;                           //@synthesize mediaLibraryUID=_mediaLibraryUID - In the implementation block
@property (assign,nonatomic) unsigned long long playlistPersistentID;              //@synthesize playlistPersistentID=_playlistPersistentID - In the implementation block
@property (nonatomic,readonly) unsigned long long validMask;                       //@synthesize validMask=_validMask - In the implementation block
@property (assign,nonatomic) unsigned long long persistentID;                      //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,retain) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * albumTitle;                                //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,retain) NSString * artist;                                    //@synthesize artist=_artist - In the implementation block
@property (nonatomic,retain) NSString * albumArtist;                               //@synthesize albumArtist=_albumArtist - In the implementation block
@property (nonatomic,retain) NSString * genre;                                     //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) NSString * composer;                                  //@synthesize composer=_composer - In the implementation block
-(id)description;
-(id)debugDescription;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)genre;
-(NSString *)artist;
-(unsigned long long)persistentID;
-(void)setPersistentID:(unsigned long long)arg1 ;
-(NSString *)composer;
-(void)setComposer:(NSString *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)albumArtist;
-(void)setAlbumArtist:(NSString *)arg1 ;
-(NSString *)albumTitle;
-(void)setGenre:(NSString *)arg1 ;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(void)fillStruct:(SCD_Struct_AC2*)arg1 ;
-(void)setMediaLibraryUID:(NSString *)arg1 ;
-(NSString *)mediaLibraryUID;
-(unsigned long long)validMask;
-(id)copyNSRepresentation:(int)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 playlistPersistentID:(unsigned long long)arg3 ;
-(id)initWithMediaLibrary:(id)arg1 playlistPersistentID:(unsigned long long)arg2 dict:(id)arg3 ;
-(void)setPlaylistPersistentID:(unsigned long long)arg1 ;
-(unsigned long long)playlistPersistentID;
@end

