/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface RMSSample : NSObject {

	double _RMSScore;
	unsigned long long _lastSampleCount;

}

@property (assign,nonatomic) double RMSScore;                                 //@synthesize RMSScore=_RMSScore - In the implementation block
@property (assign,nonatomic) unsigned long long lastSampleCount;              //@synthesize lastSampleCount=_lastSampleCount - In the implementation block
-(double)RMSScore;
-(id)initWithRMSScore:(double)arg1 lastSampleCount:(unsigned long long)arg2 ;
-(long long)compareScoresDesc:(id)arg1 ;
-(void)setRMSScore:(double)arg1 ;
-(unsigned long long)lastSampleCount;
-(void)setLastSampleCount:(unsigned long long)arg1 ;
@end

