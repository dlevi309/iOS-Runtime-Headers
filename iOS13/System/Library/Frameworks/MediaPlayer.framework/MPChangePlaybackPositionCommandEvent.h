/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangePlaybackPositionCommandEvent : MPRemoteCommandEvent {

	double _positionTime;

}

@property (nonatomic,readonly) double positionTime;              //@synthesize positionTime=_positionTime - In the implementation block
-(double)positionTime;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
@end

