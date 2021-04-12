/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@interface FMKeyFrame : NSObject {

	float _value;
	long long _sampleTime;

}

@property (assign,nonatomic) long long sampleTime;              //@synthesize sampleTime=_sampleTime - In the implementation block
@property (assign,nonatomic) float value;                       //@synthesize value=_value - In the implementation block
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(long long)sampleTime;
-(void)setSampleTime:(long long)arg1 ;
-(id)initWithValue:(float)arg1 atTime:(long long)arg2 ;
@end

