/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
*/


@interface TTSTimerObject : NSObject {

	double _endTime;
	long long _intId;
	double _remainingTime;
	/*^block*/id _block;

}

@property (assign,nonatomic) double endTime;                    //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) long long intId;                   //@synthesize intId=_intId - In the implementation block
@property (assign,nonatomic) double remainingTime;              //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,copy) id block;                            //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(id)description;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(long long)intId;
-(void)setIntId:(long long)arg1 ;
@end

