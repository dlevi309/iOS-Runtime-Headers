/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCAudioSessionDelegate <NSObject>
@optional
-(void)didSessionResume;
-(void)didSessionEnd;
-(void)didSessionPause;
-(void)didSessionStop;
-(void)didSessionBeginQuietTime;
-(void)didSessionEndQuietTime;
-(void)didSessionSampleRateChange;

@end

