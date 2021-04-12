/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSDate, MPNowPlayingInfoLyricsItemToken;

@interface MPNowPlayingInfoLyricsEvent : NSObject {

	void* _mediaRemoteLyricsEvent;

}

@property (nonatomic,readonly) void* mediaRemoteLyricsEvent;                         //@synthesize mediaRemoteLyricsEvent=_mediaRemoteLyricsEvent - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) MPNowPlayingInfoLyricsItemToken * token; 
-(void)dealloc;
-(MPNowPlayingInfoLyricsItemToken *)token;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithMediaRemoteLyricsEvent:(void*)arg1 ;
-(void*)mediaRemoteLyricsEvent;
@end

