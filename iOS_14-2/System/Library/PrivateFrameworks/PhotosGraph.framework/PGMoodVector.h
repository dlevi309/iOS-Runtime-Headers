/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PGMoodVector : NSObject <NSCopying> {

	double _vector[10];

}
-(double)sum;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)description;
-(void)normalize;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(double)valueForMood:(unsigned long long)arg1 ;
-(void)setValue:(double)arg1 forMood:(unsigned long long)arg2 ;
-(void)addValue:(double)arg1 forMood:(unsigned long long)arg2 ;
-(void)addValue:(double)arg1 forMoods:(unsigned long long)arg2 ;
-(void)multiplyByWeight:(double)arg1 forMood:(unsigned long long)arg2 ;
-(void)addMoodVector:(id)arg1 ;
-(void)substractMoodVector:(id)arg1 ;
-(void)multiplyMoodVector:(id)arg1 ;
-(void)multiplyByWeight:(double)arg1 ;
-(void)filterWithMoods:(unsigned long long)arg1 ;
-(unsigned long long)moodsWithThreshold:(double)arg1 ;
-(unsigned long long)weightedRandomMoodWithSeed:(unsigned long long)arg1 ;
-(id)moodArray;
@end

