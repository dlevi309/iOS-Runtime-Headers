/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)block;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(long long)intId;
-(void)setBlock:(id)arg1 ;
-(id)description;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(void)dealloc;
-(void)setIntId:(long long)arg1 ;
@end

