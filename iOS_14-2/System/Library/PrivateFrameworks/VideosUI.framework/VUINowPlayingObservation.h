/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSString;

@interface VUINowPlayingObservation : NSObject {

	BOOL _playing;
	NSString* _nowPlayingAppBundleIdentifier;

}

@property (assign,getter=isPlaying,nonatomic) BOOL playing;                       //@synthesize playing=_playing - In the implementation block
@property (nonatomic,copy) NSString * nowPlayingAppBundleIdentifier;              //@synthesize nowPlayingAppBundleIdentifier=_nowPlayingAppBundleIdentifier - In the implementation block
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)nowPlayingAppBundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 isPlaying:(BOOL)arg2 ;
-(void)setNowPlayingAppBundleIdentifier:(NSString *)arg1 ;
@end

