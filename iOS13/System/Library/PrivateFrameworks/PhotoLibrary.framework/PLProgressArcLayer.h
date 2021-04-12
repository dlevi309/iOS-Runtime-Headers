/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <QuartzCore/CALayer.h>

@interface PLProgressArcLayer : CALayer {

	double _radius;
	double _startAngle;
	double _endAngle;
	double _lineWidth;

}

@property (assign,nonatomic) double radius;                  //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double startAngle;              //@synthesize startAngle=_startAngle - In the implementation block
@property (assign,nonatomic) double endAngle;                //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic) double lineWidth;               //@synthesize lineWidth=_lineWidth - In the implementation block
-(id)init;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
-(double)endAngle;
-(void)setEndAngle:(double)arg1 ;
@end

