/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPChangePlaybackPositionCommand : MPRemoteCommand {

	BOOL _canBeControlledByScrubbing;

}

@property (assign,nonatomic) BOOL canBeControlledByScrubbing;              //@synthesize canBeControlledByScrubbing=_canBeControlledByScrubbing - In the implementation block
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCanBeControlledByScrubbing:(BOOL)arg1 ;
-(id)newCommandEventWithPositionTime:(double)arg1 ;
-(BOOL)canBeControlledByScrubbing;
@end

