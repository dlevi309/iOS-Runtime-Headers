/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@interface PKShapeLayerPathState : NSObject {

	double _strokeStartT0;
	double _strokeStartT1;
	double _strokeEndT0;
	double _strokeEndT1;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithStrokeStartT0:(double)arg1 strokeStartT1:(double)arg2 strokeEndT0:(double)arg3 strokeEndT1:(double)arg4 ;
-(id)initWithShapeLayer:(id)arg1 reverse:(BOOL)arg2 ;
-(void)setProgress:(double)arg1 onShapeLayer:(id)arg2 withAnimationHandler:(/*^block*/id)arg3 ;
-(double)strokeStartAtProgress:(double)arg1 ;
-(double)strokeEndAtProgress:(double)arg1 ;
-(id)initWithShapeLayer:(id)arg1 ;
-(id)initWithStrokeStart:(double)arg1 strokeEnd:(double)arg2 ;
-(void)setProgress:(double)arg1 onShapeLayer:(id)arg2 ;
-(double)progressForShapeLayer:(id)arg1 ;
@end

