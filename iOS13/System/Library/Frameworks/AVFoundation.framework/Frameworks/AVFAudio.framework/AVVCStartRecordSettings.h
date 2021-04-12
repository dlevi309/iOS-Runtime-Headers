/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@interface AVVCStartRecordSettings : NSObject {

	BOOL _skipAlert;
	unsigned long long _streamID;
	unsigned long long _startHostTime;
	long long _startAlert;
	long long _stopAlert;
	long long _stopOnErrorAlert;

}

@property (assign,nonatomic) unsigned long long streamID;                   //@synthesize streamID=_streamID - In the implementation block
@property (assign,nonatomic) unsigned long long startHostTime;              //@synthesize startHostTime=_startHostTime - In the implementation block
@property (assign,nonatomic) long long startAlert;                          //@synthesize startAlert=_startAlert - In the implementation block
@property (assign,nonatomic) long long stopAlert;                           //@synthesize stopAlert=_stopAlert - In the implementation block
@property (assign,nonatomic) long long stopOnErrorAlert;                    //@synthesize stopOnErrorAlert=_stopOnErrorAlert - In the implementation block
@property (assign,nonatomic) BOOL skipAlert;                                //@synthesize skipAlert=_skipAlert - In the implementation block
-(unsigned long long)streamID;
-(void)setStreamID:(unsigned long long)arg1 ;
-(long long)stopOnErrorAlert;
-(long long)stopAlert;
-(long long)startAlert;
-(BOOL)skipAlert;
-(unsigned long long)startHostTime;
-(void)setStartAlert:(long long)arg1 ;
-(void)setStopAlert:(long long)arg1 ;
-(void)setStopOnErrorAlert:(long long)arg1 ;
-(id)initWithStreamID:(unsigned long long)arg1 atStartHostTime:(unsigned long long)arg2 ;
-(void)setStartHostTime:(unsigned long long)arg1 ;
-(void)setSkipAlert:(BOOL)arg1 ;
@end

