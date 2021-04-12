/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setRadius:(double)arg1 ;
-(id)init;
-(double)endAngle;
-(double)radius;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
-(void)setEndAngle:(double)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

