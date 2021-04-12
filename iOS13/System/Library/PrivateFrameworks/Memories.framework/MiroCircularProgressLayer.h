/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface MiroCircularProgressLayer : CALayer {

	float _progress;
	UIColor* _progressColor;
	double _circleLineWidth;
	double _arcLineWidth;
	double _animationDuration;

}

@property (assign,nonatomic) float progress;                        //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;               //@synthesize progressColor=_progressColor - In the implementation block
@property (assign,nonatomic) double circleLineWidth;                //@synthesize circleLineWidth=_circleLineWidth - In the implementation block
@property (assign,nonatomic) double arcLineWidth;                   //@synthesize arcLineWidth=_arcLineWidth - In the implementation block
@property (assign,nonatomic) double animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(float)progress;
-(void)setProgress:(float)arg1 ;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(UIColor *)progressColor;
-(void)drawInContext:(CGContextRef)arg1 ;
-(double)circleLineWidth;
-(void)setCircleLineWidth:(double)arg1 ;
-(double)arcLineWidth;
-(void)setArcLineWidth:(double)arg1 ;
@end

