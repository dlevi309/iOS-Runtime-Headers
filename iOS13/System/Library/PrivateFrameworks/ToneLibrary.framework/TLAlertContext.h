/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface TLAlertContext : NSObject {

	BOOL _beingInterrupted;
	long long _playbackBackEnd;
	NSObject*<OS_dispatch_source> _timeoutTimerSource;

}

@property (assign,nonatomic) long long playbackBackEnd;                                     //@synthesize playbackBackEnd=_playbackBackEnd - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimerSource;              //@synthesize timeoutTimerSource=_timeoutTimerSource - In the implementation block
@property (assign,getter=isBeingInterrupted,nonatomic) BOOL beingInterrupted;               //@synthesize beingInterrupted=_beingInterrupted - In the implementation block
-(long long)playbackBackEnd;
-(void)setPlaybackBackEnd:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimerSource;
-(void)setTimeoutTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)isBeingInterrupted;
-(void)setBeingInterrupted:(BOOL)arg1 ;
@end

