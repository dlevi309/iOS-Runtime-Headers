/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)stopAlert;
-(long long)startAlert;
-(long long)stopOnErrorAlert;
-(id)initWithStreamID:(unsigned long long)arg1 ;
-(void)setStartAlert:(long long)arg1 ;
-(void)setStopAlert:(long long)arg1 ;
-(void)setStopOnErrorAlert:(long long)arg1 ;
@end

