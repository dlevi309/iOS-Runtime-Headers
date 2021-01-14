/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

@class NSArray, MDLAnimatedScalarArray;


@protocol MDLMorphDeformerComponent <MDLComponent>
@property (nonatomic,readonly) NSArray * targetShapes; 
@property (nonatomic,readonly) NSArray * shapeSetTargetWeights; 
@property (nonatomic,readonly) NSArray * shapeSetTargetCounts; 
@property (nonatomic,readonly) MDLAnimatedScalarArray * weights; 
@required
-(MDLAnimatedScalarArray *)weights;
-(NSArray *)targetShapes;
-(NSArray *)shapeSetTargetWeights;
-(NSArray *)shapeSetTargetCounts;

@end

