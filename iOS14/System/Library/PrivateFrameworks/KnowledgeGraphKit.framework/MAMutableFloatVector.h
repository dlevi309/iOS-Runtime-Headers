/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <KnowledgeGraphKit/MAFloatVector.h>

@class _TtC17KnowledgeGraphKit27MAMutableFloatVectorWrapper;

@interface MAMutableFloatVector : MAFloatVector

@property (nonatomic,readonly) _TtC17KnowledgeGraphKit27MAMutableFloatVectorWrapper * wrapper; 
+(Class)wrapperClass;
-(void)addVector:(id)arg1 ;
-(void)appendArray:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)multiplyByScalar:(float)arg1 ;
-(void)appendFloat:(float)arg1 ;
-(void)setFloat:(float)arg1 atIndex:(long long)arg2 ;
-(void)appendDoubles:(const double*)arg1 count:(long long)arg2 ;
-(void)appendVector:(id)arg1 ;
-(void)appendFloats:(const float*)arg1 count:(long long)arg2 ;
-(void)subtractVector:(id)arg1 ;
-(void)subtractScalar:(float)arg1 ;
-(void)addScalar:(float)arg1 ;
-(void)divideByScalar:(float)arg1 ;
-(void)elementwiseRaiseToExponent:(float)arg1 ;
-(void)elementwiseMultiplyByVector:(id)arg1 ;
@end

