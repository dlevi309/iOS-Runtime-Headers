/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

