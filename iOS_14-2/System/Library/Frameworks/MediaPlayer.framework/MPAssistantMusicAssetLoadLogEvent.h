/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAssistantMusicLogEvent.h>

@interface MPAssistantMusicAssetLoadLogEvent : MPAssistantMusicLogEvent {

	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(long long)eventCode;
-(void)setDuration:(double)arg1 ;
-(id)eventName;
-(id)eventPayload;
-(double)duration;
@end

