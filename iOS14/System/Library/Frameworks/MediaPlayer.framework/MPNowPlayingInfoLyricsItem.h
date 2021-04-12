/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPNowPlayingInfoLyricsItemToken, NSString;

@interface MPNowPlayingInfoLyricsItem : NSObject {

	void* _mediaRemoteLyricsItem;

}

@property (nonatomic,readonly) void* mediaRemoteLyricsItem;                          //@synthesize mediaRemoteLyricsItem=_mediaRemoteLyricsItem - In the implementation block
@property (nonatomic,readonly) MPNowPlayingInfoLyricsItemToken * token; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (nonatomic,readonly) BOOL userProvided; 
-(NSString *)lyrics;
-(BOOL)userProvided;
-(id)initWithLyrics:(id)arg1 userProvided:(BOOL)arg2 ;
-(id)initWithLyrics:(id)arg1 userProvided:(BOOL)arg2 token:(id)arg3 ;
-(id)initWithMediaRemoteLyricsItem:(void*)arg1 ;
-(void*)mediaRemoteLyricsItem;
-(MPNowPlayingInfoLyricsItemToken *)token;
-(void)dealloc;
@end

