/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@interface PKShapeLayerPathState : NSObject {

	double _strokeStartT0;
	double _strokeStartT1;
	double _strokeEndT0;
	double _strokeEndT1;

}
-(id)init;
-(id)description;
-(id)initWithShapeLayer:(id)arg1 reverse:(BOOL)arg2 ;
-(id)initWithStrokeStartT0:(double)arg1 strokeStartT1:(double)arg2 strokeEndT0:(double)arg3 strokeEndT1:(double)arg4 ;
-(void)setProgress:(double)arg1 onShapeLayer:(id)arg2 withAnimationHandler:(/*^block*/id)arg3 ;
-(double)strokeStartAtProgress:(double)arg1 ;
-(double)strokeEndAtProgress:(double)arg1 ;
-(id)initWithShapeLayer:(id)arg1 ;
-(id)initWithStrokeStart:(double)arg1 strokeEnd:(double)arg2 ;
-(void)setProgress:(double)arg1 onShapeLayer:(id)arg2 ;
-(double)progressForShapeLayer:(id)arg1 ;
-(void)dealloc;
@end

