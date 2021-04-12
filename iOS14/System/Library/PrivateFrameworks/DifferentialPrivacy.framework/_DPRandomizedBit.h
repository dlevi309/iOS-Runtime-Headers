/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@interface _DPRandomizedBit : NSObject {

	unsigned long long _index;
	long long _value;

}

@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long value;                       //@synthesize value=_value - In the implementation block
+(id)randomizedBit:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)index;
-(id)init;
-(id)description;
-(long long)value;
-(id)initBit:(long long)arg1 atIndex:(unsigned long long)arg2 ;
@end

