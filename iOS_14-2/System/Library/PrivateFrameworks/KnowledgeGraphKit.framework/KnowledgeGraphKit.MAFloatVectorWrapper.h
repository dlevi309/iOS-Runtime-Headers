/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface KnowledgeGraphKit.MAFloatVectorWrapper : NSObject <NSCopying, NSMutableCopying> {

	 _floatVector;

}

@property (readonly,nonatomic) long long count; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) long long hash; 
+(id)zerosOfCount:(long long)arg1 ;
+(id)onesOfCount:(long long)arg1 ;
+(id)repeatingFloat:(float)arg1 count:(long long)arg2 ;
-(float)sum;
-(float)mean;
-(NSString *)debugDescription;
-(id)array;
-(float)floatAtIndex:(long long)arg1 ;
-(long long)count;
-(id)mutableCopyWithZone:(void*)arg1 ;
-(NSString *)description;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(id)data;
-(long long)hash;
-(id)copyWithZone:(void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(float)standardDeviation;
-(id)sliceFromStart:(long long)arg1 toEnd:(long long)arg2 ;
-(id)initWithFloats:(const float*)arg1 count:(long long)arg2 ;
-(id)vectorByDividingByScalar:(float)arg1 ;
-(id)vectorByElementwiseRaisingToExponent:(float)arg1 ;
-(id)vectorByMultiplyingByScalar:(float)arg1 ;
-(id)vectorByAddingScalar:(float)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2 ;
-(id)vectorBySubtractingVector:(id)arg1 ;
-(id)vectorByAddingVector:(id)arg1 ;
-(id)vectorBySubtractingScalar:(float)arg1 ;
-(id)vectorByElementwiseMultiplyingByWrapper:(id)arg1 ;
-(float)dotProductWithWrapper:(id)arg1 ;
-(float)sumOfSquares;
-(id)naturalLogarithm;
-(id)naturalLogarithmIfPositive;
-(id)init;
-(id)initWithArray:(id)arg1 ;
@end

