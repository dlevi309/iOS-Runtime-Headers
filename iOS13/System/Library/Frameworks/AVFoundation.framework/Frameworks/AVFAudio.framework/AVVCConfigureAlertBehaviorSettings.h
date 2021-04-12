/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@interface AVVCConfigureAlertBehaviorSettings : NSObject {

	unsigned long long _streamID;
	long long _startAlert;
	long long _stopAlert;
	long long _stopOnErrorAlert;

}

@property (assign,nonatomic) unsigned long long streamID;              //@synthesize streamID=_streamID - In the implementation block
@property (assign,nonatomic) long long startAlert;                     //@synthesize startAlert=_startAlert - In the implementation block
@property (assign,nonatomic) long long stopAlert;                      //@synthesize stopAlert=_stopAlert - In the implementation block
@property (assign,nonatomic) long long stopOnErrorAlert;               //@synthesize stopOnErrorAlert=_stopOnErrorAlert - In the implementation block
-(unsigned long long)streamID;
-(void)setStreamID:(unsigned long long)arg1 ;
-(long long)stopOnErrorAlert;
-(long long)stopAlert;
-(long long)startAlert;
-(id)initWithStreamID:(unsigned long long)arg1 ;
-(void)setStartAlert:(long long)arg1 ;
-(void)setStopAlert:(long long)arg1 ;
-(void)setStopOnErrorAlert:(long long)arg1 ;
@end

