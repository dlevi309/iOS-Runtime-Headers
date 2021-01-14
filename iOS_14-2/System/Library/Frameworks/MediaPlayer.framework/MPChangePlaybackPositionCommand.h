/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPChangePlaybackPositionCommand : MPRemoteCommand {

	BOOL _canBeControlledByScrubbing;

}

@property (assign,nonatomic) BOOL canBeControlledByScrubbing;              //@synthesize canBeControlledByScrubbing=_canBeControlledByScrubbing - In the implementation block
-(id)newCommandEventWithPositionTime:(double)arg1 ;
-(void)setCanBeControlledByScrubbing:(BOOL)arg1 ;
-(BOOL)canBeControlledByScrubbing;
-(id)_mediaRemoteCommandInfoOptions;
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
@end

