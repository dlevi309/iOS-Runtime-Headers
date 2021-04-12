/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAssistantMusicLogEvent.h>

@interface MPAssistantMusicAssetLoadLogEvent : MPAssistantMusicLogEvent {

	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(double)duration;
-(id)eventName;
-(void)setDuration:(double)arg1 ;
-(long long)eventCode;
-(id)eventPayload;
@end

