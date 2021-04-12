/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {

	float _preferredRate;
	NSArray* _supportedPlaybackRates;

}

@property (nonatomic,copy) NSArray * supportedPlaybackRates;              //@synthesize supportedPlaybackRates=_supportedPlaybackRates - In the implementation block
-(float)preferredRate;
-(void)setPreferredRate:(float)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setSupportedPlaybackRates:(NSArray *)arg1 ;
-(id)newCommandEventWithPlaybackRate:(float)arg1 ;
-(NSArray *)supportedPlaybackRates;
@end

