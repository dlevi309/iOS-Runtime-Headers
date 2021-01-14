/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCounterTransformLayer:(BOOL)arg1 ;
-(void)setInverseTransformLayer:(BOOL)arg1 ;
-(BOOL)isCounterTransformLayer;
-(BOOL)isInverseTransformLayer;
@end

