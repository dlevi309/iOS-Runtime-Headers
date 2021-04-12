/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@interface FMKeyFrame : NSObject {

	float _value;
	long long _sampleTime;

}

@property (assign,nonatomic) long long sampleTime;              //@synthesize sampleTime=_sampleTime - In the implementation block
@property (assign,nonatomic) float value;                       //@synthesize value=_value - In the implementation block
-(void)setValue:(float)arg1 ;
-(id)description;
-(long long)sampleTime;
-(float)value;
-(void)setSampleTime:(long long)arg1 ;
-(id)initWithValue:(float)arg1 atTime:(long long)arg2 ;
@end

