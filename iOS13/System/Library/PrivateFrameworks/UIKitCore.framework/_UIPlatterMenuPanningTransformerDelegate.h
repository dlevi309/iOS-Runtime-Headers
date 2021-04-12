/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIPlatterMenuPanningTransformerDelegate <NSObject>
@required
-(void)panningTransformer:(id)arg1 didBeginPanToTransformedPosition:(CGPoint)arg2;
-(void)panningTransformer:(id)arg1 didPanToTransformedPosition:(CGPoint)arg2 offsetFromPrevious:(CGVector)arg3 touchPosition:(CGPoint)arg4 velocity:(CGVector)arg5 didChangeAxis:(BOOL)arg6 axisLock:(unsigned long long)arg7;
-(void)panningTransformer:(id)arg1 didEndPanToTransformedPosition:(CGPoint)arg2 offsetFromPrevious:(CGVector)arg3 velocity:(CGVector)arg4;
-(void)panningTransformer:(id)arg1 didEnterTransitionNotchForTransformedPosition:(CGPoint)arg2;

@end

