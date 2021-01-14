/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {

	float _preferredRate;
	NSArray* _supportedPlaybackRates;

}

@property (nonatomic,copy) NSArray * supportedPlaybackRates;              //@synthesize supportedPlaybackRates=_supportedPlaybackRates - In the implementation block
-(id)newCommandEventWithPlaybackRate:(float)arg1 ;
-(float)preferredRate;
-(id)_mediaRemoteCommandInfoOptions;
-(NSArray *)supportedPlaybackRates;
-(void)setPreferredRate:(float)arg1 ;
-(void)setSupportedPlaybackRates:(NSArray *)arg1 ;
@end

