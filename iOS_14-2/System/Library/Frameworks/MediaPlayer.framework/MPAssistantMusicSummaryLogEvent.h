/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAssistantMusicLogEvent.h>

@class NSNumber;

@interface MPAssistantMusicSummaryLogEvent : MPAssistantMusicLogEvent {

	double _blockingSecureKeyLoadDuration;
	NSNumber* _perceivedTotalStartupTime;
	double _tracklistLoadDuration;

}

@property (assign,nonatomic) double blockingSecureKeyLoadDuration;              //@synthesize blockingSecureKeyLoadDuration=_blockingSecureKeyLoadDuration - In the implementation block
@property (nonatomic,copy) NSNumber * perceivedTotalStartupTime;                //@synthesize perceivedTotalStartupTime=_perceivedTotalStartupTime - In the implementation block
@property (assign,nonatomic) double tracklistLoadDuration;                      //@synthesize tracklistLoadDuration=_tracklistLoadDuration - In the implementation block
-(long long)eventCode;
-(id)eventName;
-(id)eventPayload;
-(double)blockingSecureKeyLoadDuration;
-(void)setBlockingSecureKeyLoadDuration:(double)arg1 ;
-(NSNumber *)perceivedTotalStartupTime;
-(void)setPerceivedTotalStartupTime:(NSNumber *)arg1 ;
-(double)tracklistLoadDuration;
-(void)setTracklistLoadDuration:(double)arg1 ;
@end

