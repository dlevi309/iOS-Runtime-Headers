/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@protocol LPMediaPlayer <NSObject>
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (getter=isFullScreen,nonatomic,readonly) BOOL fullScreen; 
@property (nonatomic,readonly) BOOL usesSharedAudioSession; 
@property (nonatomic,readonly) BOOL shouldUnmuteWhenUserAdjustsVolume; 
@property (nonatomic,readonly) unsigned long long lastInteractionTimestamp; 
@property (nonatomic,readonly) double unobscuredAreaFraction; 
@optional
-(BOOL)releaseDecodingResourcesIfInactive;
-(unsigned long long)lastInteractionTimestamp;
-(double)unobscuredAreaFraction;

@required
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1;
-(BOOL)isPlaying;
-(BOOL)isMuted;
-(BOOL)isFullScreen;
-(BOOL)usesSharedAudioSession;
-(BOOL)shouldUnmuteWhenUserAdjustsVolume;

@end

