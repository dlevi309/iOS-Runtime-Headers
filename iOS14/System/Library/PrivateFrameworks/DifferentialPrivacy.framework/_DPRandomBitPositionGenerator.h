/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@interface _DPRandomBitPositionGenerator : NSObject {

	unsigned long long _m;

}

@property (m,nonatomic,readonly) unsigned long long m;              //@synthesize m=_m - In the implementation block
+(id)generatorWithDimensionality:(unsigned long long)arg1 ;
-(unsigned long long)m;
-(unsigned long long)sample;
-(id)init;
-(id)description;
-(id)initWithDimensionality:(unsigned long long)arg1 ;
@end

