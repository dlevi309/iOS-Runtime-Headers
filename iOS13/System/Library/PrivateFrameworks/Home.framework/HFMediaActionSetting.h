/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFMediaPlaybackActionBuilder, HFPlaybackArchive;

@interface HFMediaActionSetting : NSObject {

	HFMediaPlaybackActionBuilder* _mediaActionBuilder;
	long long _originalHMNonPausePlaybackState;
	HFPlaybackArchive* _playbackArchive;

}

@property (nonatomic,readonly) HFMediaPlaybackActionBuilder * mediaActionBuilder;              //@synthesize mediaActionBuilder=_mediaActionBuilder - In the implementation block
@property (assign,nonatomic) long long originalHMNonPausePlaybackState;                        //@synthesize originalHMNonPausePlaybackState=_originalHMNonPausePlaybackState - In the implementation block
@property (nonatomic,retain) HFPlaybackArchive * playbackArchive;                              //@synthesize playbackArchive=_playbackArchive - In the implementation block
-(HFPlaybackArchive *)playbackArchive;
-(void)setPlaybackArchive:(HFPlaybackArchive *)arg1 ;
-(void)updatePlaybackState:(long long)arg1 ;
-(void)setOriginalHMNonPausePlaybackState:(long long)arg1 ;
-(HFMediaPlaybackActionBuilder *)mediaActionBuilder;
-(id)initWithActionBuilder:(id)arg1 ;
-(long long)originalHMNonPausePlaybackState;
@end

