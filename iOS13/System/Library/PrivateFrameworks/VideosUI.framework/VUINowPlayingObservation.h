/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSString;

@interface VUINowPlayingObservation : NSObject {

	BOOL _playing;
	NSString* _nowPlayingAppBundleIdentifier;

}

@property (assign,getter=isPlaying,nonatomic) BOOL playing;                       //@synthesize playing=_playing - In the implementation block
@property (nonatomic,copy) NSString * nowPlayingAppBundleIdentifier;              //@synthesize nowPlayingAppBundleIdentifier=_nowPlayingAppBundleIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
-(NSString *)nowPlayingAppBundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 isPlaying:(BOOL)arg2 ;
-(void)setNowPlayingAppBundleIdentifier:(NSString *)arg1 ;
@end

