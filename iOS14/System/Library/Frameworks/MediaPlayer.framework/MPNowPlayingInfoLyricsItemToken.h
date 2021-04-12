/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString, NSDictionary;

@interface MPNowPlayingInfoLyricsItemToken : NSObject {

	void* _mediaRemoteLyricsItemToken;

}

@property (nonatomic,readonly) void* mediaRemoteLyricsItemToken;              //@synthesize mediaRemoteLyricsItemToken=_mediaRemoteLyricsItemToken - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
-(NSDictionary *)userInfo;
-(id)initWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithMediaRemoteLyricsItemToken:(void*)arg1 ;
-(void*)mediaRemoteLyricsItemToken;
-(NSString *)identifier;
-(void)dealloc;
@end

