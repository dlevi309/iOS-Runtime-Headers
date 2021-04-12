/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <QuartzCore/CALayer.h>

@interface APLatencyVisualizationLayer : CALayer {

	double _dotOffset;
	double _dotDiameter;
	double _dotSpeed;
	double _dotSpeedX;
	double _dotSpeedY;
	void* _timeContext;
	/*function pointer*/void* _getAbsoluteTime;

}
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)init:(/*function pointer*/void*)arg1 timeContext:(void*)arg2 zPosition:(int)arg3 ;
@end

