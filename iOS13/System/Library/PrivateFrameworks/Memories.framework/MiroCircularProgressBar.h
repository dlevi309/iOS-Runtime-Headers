/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIView.h>

@class UIColor;

@interface MiroCircularProgressBar : UIView

@property (assign,nonatomic) float progress; 
@property (nonatomic,retain) UIColor * progressColor; 
@property (assign,nonatomic) double circleLineWidth; 
@property (assign,nonatomic) double arcLineWidth; 
@property (assign,nonatomic) double animationDuration; 
+(Class)layerClass;
-(id)initWithCoder:(id)arg1 ;
-(float)progress;
-(void)setProgress:(float)arg1 ;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
-(double)circleLineWidth;
-(void)setCircleLineWidth:(double)arg1 ;
-(double)arcLineWidth;
-(void)setArcLineWidth:(double)arg1 ;
@end

