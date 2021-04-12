/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
*/

#import <CorePrediction/CPMLStorageManager.h>

@interface CPMLNaiveBayesStorageManager : CPMLStorageManager
-(double)getCountAndSetYCardinality:(double*)arg1 ;
-(double)getCountY:(unsigned long long)arg1 ;
-(double)getCountXGivenYAndSetXCardinality:(unsigned long long)arg1 withX:(unsigned long long)arg2 withY:(unsigned long long)arg3 withCardinalityX:(double*)arg4 ;
-(void)setCountY:(double)arg1 ;
-(void)setCountY:(unsigned long long)arg1 withCount:(double)arg2 ;
-(void)setCountXGivenY:(unsigned long long)arg1 withX:(unsigned long long)arg2 withY:(unsigned long long)arg3 withValue:(double)arg4 ;
-(void)setCardinalityXGivenY:(unsigned long long)arg1 withY:(unsigned long long)arg2 cardinalityValue:(double)arg3 ;
@end

