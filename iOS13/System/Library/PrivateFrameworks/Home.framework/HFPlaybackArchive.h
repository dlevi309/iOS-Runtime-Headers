/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class MPPlaybackArchive;

@interface HFPlaybackArchive : NSObject {

	MPPlaybackArchive* _mediaPlayerPlaybackArchive;

}

@property (nonatomic,retain) MPPlaybackArchive * mediaPlayerPlaybackArchive;              //@synthesize mediaPlayerPlaybackArchive=_mediaPlayerPlaybackArchive - In the implementation block
@property (assign,nonatomic) unsigned long long targetOptions; 
@property (nonatomic,readonly) BOOL isShuffleSupported; 
@property (nonatomic,readonly) BOOL isRepeatSupported; 
@property (assign,getter=isShuffleEnabled,nonatomic) BOOL shuffleEnabled; 
@property (assign,getter=isRepeatEnabled,nonatomic) BOOL repeatEnabled; 
-(void)setShuffleEnabled:(BOOL)arg1 ;
-(id)initWithMediaPlayerPlaybackArchive:(id)arg1 ;
-(MPPlaybackArchive *)mediaPlayerPlaybackArchive;
-(BOOL)isRepeatEnabled;
-(BOOL)isRepeatSupported;
-(void)setRepeatEnabled:(BOOL)arg1 ;
-(BOOL)isShuffleEnabled;
-(BOOL)isShuffleSupported;
-(unsigned long long)targetOptions;
-(void)setTargetOptions:(unsigned long long)arg1 ;
-(void)setMediaPlayerPlaybackArchive:(MPPlaybackArchive *)arg1 ;
@end

