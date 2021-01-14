/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MDLMorphDeformerComponent.h>

@class NSArray, MDLAnimatedScalarArray, NSData, NSString;

@interface MDLMorphDeformer : NSObject <NSCopying, MDLMorphDeformerComponent> {

	NSArray* _targetShapes;
	MDLAnimatedScalarArray* _weights;
	NSData* _targetWeights;
	NSData* _targetCounts;

}

@property (nonatomic,retain) MDLAnimatedScalarArray * weights;               //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain) NSData * targetWeights;                         //@synthesize targetWeights=_targetWeights - In the implementation block
@property (nonatomic,retain) NSData * targetCounts;                          //@synthesize targetCounts=_targetCounts - In the implementation block
@property (nonatomic,readonly) NSArray * targetShapes;                       //@synthesize targetShapes=_targetShapes - In the implementation block
@property (nonatomic,readonly) NSArray * shapeSetTargetWeights; 
@property (nonatomic,readonly) NSArray * shapeSetTargetCounts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWeights:(MDLAnimatedScalarArray *)arg1 ;
-(MDLAnimatedScalarArray *)weights;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOther:(id)arg1 ;
-(NSArray *)targetShapes;
-(NSArray *)shapeSetTargetWeights;
-(NSArray *)shapeSetTargetCounts;
-(id)initWithTargetShapes:(id)arg1 shapeSetTargetWeights:(id)arg2 shapeSetTargetCounts:(id)arg3 ;
-(id)initWithTargetShapes:(id)arg1 shapeSetTargetWeights:(const float*)arg2 count:(unsigned long long)arg3 shapeSetTargetCounts:(const unsigned*)arg4 count:(unsigned long long)arg5 ;
-(unsigned long long)copyShapeSetTargetWeightsInto:(float*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)copyShapeSetTargetCountsInto:(unsigned*)arg1 maxCount:(unsigned long long)arg2 ;
-(NSData *)targetWeights;
-(void)setTargetWeights:(NSData *)arg1 ;
-(NSData *)targetCounts;
-(void)setTargetCounts:(NSData *)arg1 ;
@end

