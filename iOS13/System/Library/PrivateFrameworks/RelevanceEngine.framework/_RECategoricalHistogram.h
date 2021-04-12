/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REHistogram.h>

@class RETaggedFeatureValueCountedSet;

@interface _RECategoricalHistogram : REHistogram {

	RETaggedFeatureValueCountedSet* _values;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countForValue:(unsigned long long)arg1 ;
-(void)addValue:(unsigned long long)arg1 ;
-(void)removeValue:(unsigned long long)arg1 ;
-(unsigned long long)standardDeviation;
-(unsigned long long)mean;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2 ;
-(unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2 ;
@end

