/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCAudioSessionDelegate <NSObject>
@optional
-(void)didSessionPause;
-(void)didSessionResume;
-(void)didSessionStop;
-(void)didSessionEnd;
-(void)didSessionBeginQuietTime;
-(void)didSessionEndQuietTime;
-(void)didSessionSampleRateChange;

@end

