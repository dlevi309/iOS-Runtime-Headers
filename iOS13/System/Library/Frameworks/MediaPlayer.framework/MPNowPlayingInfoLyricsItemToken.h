/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString, NSDictionary;

@interface MPNowPlayingInfoLyricsItemToken : NSObject {

	void* _mediaRemoteLyricsItemToken;

}

@property (nonatomic,readonly) void* mediaRemoteLyricsItemToken;              //@synthesize mediaRemoteLyricsItemToken=_mediaRemoteLyricsItemToken - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
-(void)dealloc;
-(NSDictionary *)userInfo;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithMediaRemoteLyricsItemToken:(void*)arg1 ;
-(void*)mediaRemoteLyricsItemToken;
@end

