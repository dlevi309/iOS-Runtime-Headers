/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@interface _DPRandomizedBit : NSObject {

	unsigned long long _index;
	long long _value;

}

@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long value;                       //@synthesize value=_value - In the implementation block
+(id)randomizedBit:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)init;
-(id)description;
-(long long)value;
-(unsigned long long)index;
-(id)initBit:(long long)arg1 atIndex:(unsigned long long)arg2 ;
@end

