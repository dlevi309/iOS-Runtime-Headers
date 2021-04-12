/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBShapeOperator : NSObject {

	double _scale;

}

@property (assign,nonatomic) double scale;              //@synthesize scale=_scale - In the implementation block
+(id)operatorWithScale:(double)arg1 ;
-(id)shapesByCenteringShapesPreservingLayout:(id)arg1 insideRect:(CGRect)arg2 horizontal:(BOOL)arg3 vertical:(BOOL)arg4 ;
-(id)shapesByHorizontallyCenteringShapesPreservingLayout:(id)arg1 insideRect:(CGRect)arg2 ;
-(CGSize)_scaleRange:(CGSize)arg1 factor:(double)arg2 ;
-(CGRect)_scaleRect:(CGRect)arg1 factor:(CGSize)arg2 ;
-(id)shapeByScalingShape:(id)arg1 factor:(CGSize)arg2 ;
-(id)geometryByScalingShapeGeometry:(id)arg1 factor:(CGSize)arg2 ;
-(id)shapesByRepositioningShapes:(id)arg1 withOffset:(CGPoint)arg2 ;
-(CGRect)rectByScalingRect:(CGRect)arg1 factor:(CGSize)arg2 ;
-(id)shapesByScalingShapes:(id)arg1 factor:(CGSize)arg2 ;
-(id)shapesByElaboratingShapes:(id)arg1 insideShape:(id)arg2 count:(long long)arg3 ;
-(id)shapesByCenteringShapes:(id)arg1 insideRect:(CGRect)arg2 ;
-(CGPoint)offsetForCenteringShapes:(id)arg1 insideRect:(CGRect)arg2 ;
-(id)shapesByCenteringShapesPreservingLayout:(id)arg1 insideRect:(CGRect)arg2 ;
-(id)shapesByVerticallyCenteringShapesPreservingLayout:(id)arg1 insideRect:(CGRect)arg2 ;
-(id)shapesByInsettingShapes:(id)arg1 withInsets:(UIEdgeInsets)arg2 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(id)shapesByResizingShapes:(id)arg1 withOffset:(CGPoint)arg2 ;
@end

