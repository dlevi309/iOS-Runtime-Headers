/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class NSString, NSArray;

@interface MPCModelGenericAVItemTimedMetadataStreamFields : NSObject {

	BOOL _explicitContent;
	NSString* _title;
	NSString* _artist;
	NSString* _album;
	NSArray* _artworkDictionaries;

}

@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * artist;                                            //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSString * album;                                             //@synthesize album=_album - In the implementation block
@property (assign,getter=isExplicitContent,nonatomic) BOOL explicitContent;              //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,copy) NSArray * artworkDictionaries;                                //@synthesize artworkDictionaries=_artworkDictionaries - In the implementation block
-(NSString *)artist;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isExplicitContent;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(unsigned long long)hash;
-(void)setExplicitContent:(BOOL)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)artworkDictionaries;
-(void)setArtworkDictionaries:(NSArray *)arg1 ;
@end

