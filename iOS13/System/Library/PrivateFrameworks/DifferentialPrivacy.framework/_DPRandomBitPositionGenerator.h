/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@interface _DPRandomBitPositionGenerator : NSObject {

	unsigned long long _m;

}

@property (m,nonatomic,readonly) unsigned long long m;              //@synthesize m=_m - In the implementation block
+(id)generatorWithDimensionality:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)sample;
-(unsigned long long)m;
-(id)initWithDimensionality:(unsigned long long)arg1 ;
@end

