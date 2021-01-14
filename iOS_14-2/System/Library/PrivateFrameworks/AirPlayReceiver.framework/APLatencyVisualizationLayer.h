/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

