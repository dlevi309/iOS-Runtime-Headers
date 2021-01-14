/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)initWithMediaRemoteLyricsEvent:(void*)arg1 ;
-(void*)mediaRemoteLyricsEvent;
-(MPNowPlayingInfoLyricsItemToken *)token;
-(void)dealloc;
@end

