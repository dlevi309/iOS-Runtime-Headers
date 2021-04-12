/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isFullScreen;
-(BOOL)isPlaying;
-(void)setActive:(BOOL)arg1;
-(BOOL)usesSharedAudioSession;
-(BOOL)isActive;
-(BOOL)shouldUnmuteWhenUserAdjustsVolume;
-(BOOL)isMuted;

@end

