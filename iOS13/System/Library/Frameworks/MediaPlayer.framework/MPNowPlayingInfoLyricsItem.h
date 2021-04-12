/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(MPNowPlayingInfoLyricsItemToken *)token;
-(NSString *)lyrics;
-(id)initWithLyrics:(id)arg1 userProvided:(BOOL)arg2 ;
-(id)initWithLyrics:(id)arg1 userProvided:(BOOL)arg2 token:(id)arg3 ;
-(id)initWithMediaRemoteLyricsItem:(void*)arg1 ;
-(BOOL)userProvided;
-(void*)mediaRemoteLyricsItem;
@end

