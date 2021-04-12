/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface _UIDirectionalRotationLayer : CALayer {

	CATransform3D _previousTransform;
	BOOL _counterTransformLayer;
	BOOL _inverseTransformLayer;

}

@property (assign,getter=isCounterTransformLayer,nonatomic) BOOL counterTransformLayer;              //@synthesize counterTransformLayer=_counterTransformLayer - In the implementation block
@property (assign,getter=isInverseTransformLayer,nonatomic) BOOL inverseTransformLayer;              //@synthesize inverseTransformLayer=_inverseTransformLayer - In the implementation block
-(void)setTransform:(CATransform3D)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isCounterTransformLayer;
-(BOOL)isInverseTransformLayer;
-(void)setCounterTransformLayer:(BOOL)arg1 ;
-(void)setInverseTransformLayer:(BOOL)arg1 ;
@end

