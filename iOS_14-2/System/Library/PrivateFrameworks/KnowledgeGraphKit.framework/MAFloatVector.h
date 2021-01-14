/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class _TtC17KnowledgeGraphKit20MAFloatVectorWrapper;

@interface MAFloatVector : NSObject <NSCopying, NSMutableCopying> {

	_TtC17KnowledgeGraphKit20MAFloatVectorWrapper* _wrapper;

}

@property (nonatomic,readonly) _TtC17KnowledgeGraphKit20MAFloatVectorWrapper * wrapper;              //@synthesize wrapper=_wrapper - In the implementation block
@property (nonatomic,readonly) long long count; 
+(id)vectorRepeatingFloat:(float)arg1 count:(long long)arg2 ;
+(id)meanVectorWithFloatVectors:(id)arg1 ;
+(id)zerosOfCount:(long long)arg1 ;
+(id)onesOfCount:(long long)arg1 ;
+(Class)wrapperClass;
-(id)initWithDataTensor:(id)arg1 ;
-(float)sum;
-(float)mean;
-(id)init;
-(id)debugDescription;
-(id)array;
-(float)floatAtIndex:(long long)arg1 ;
-(long long)count;
-(id)initWithData:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(id)data;
-(unsigned long long)hash;
-(_TtC17KnowledgeGraphKit20MAFloatVectorWrapper *)wrapper;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(float)standardDeviation;
-(id)initWithWrapper:(id)arg1 ;
-(id)vectorByAppendingVector:(id)arg1 ;
-(id)sliceFromStart:(long long)arg1 toEnd:(long long)arg2 ;
-(id)initWithFloats:(const float*)arg1 count:(long long)arg2 ;
-(id)vectorByDividingByScalar:(float)arg1 ;
-(id)vectorByElementwiseRaisingToExponent:(float)arg1 ;
-(id)vectorByElementwiseNaturalLogarithmIfPositive;
-(id)vectorByMultiplyingByScalar:(float)arg1 ;
-(id)vectorByAddingScalar:(float)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2 ;
-(id)vectorBySubtractingVector:(id)arg1 ;
-(id)vectorByAddingVector:(id)arg1 ;
-(id)vectorBySubtractingScalar:(float)arg1 ;
-(float)sumOfSquares;
-(id)vectorByElementwiseMultiplyingByVector:(id)arg1 ;
-(float)dotProductWithVector:(id)arg1 ;
-(id)vectorByElementwiseNaturalLogarithm;
-(id)vectorByAppendingFloat:(float)arg1 ;
-(id)vectorByAppendingFloats:(const float*)arg1 count:(long long)arg2 ;
-(id)vectorByAppendingDoubles:(const double*)arg1 count:(long long)arg2 ;
-(id)vectorByAppendingArray:(id)arg1 ;
-(BOOL)_isArrayOfFloats:(id)arg1 ;
@end

