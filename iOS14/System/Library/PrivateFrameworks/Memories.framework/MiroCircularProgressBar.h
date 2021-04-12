/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol VisualCompletionInformable;
@class UIColor, NSString;

@interface MiroCircularProgressBar : UIView <CAAnimationDelegate> {

	id<VisualCompletionInformable> _delegate;

}

@property (assign,nonatomic) float progress; 
@property (nonatomic,retain) UIColor * progressColor; 
@property (assign,nonatomic) double circleLineWidth; 
@property (assign,nonatomic) double arcLineWidth; 
@property (assign,nonatomic) double animationDuration; 
@property (assign,nonatomic,__weak) id<VisualCompletionInformable> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(double)animationDuration;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(float)progress;
-(id<VisualCompletionInformable>)delegate;
-(void)setDelegate:(id<VisualCompletionInformable>)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)progressColor;
-(void)setProgressColor:(UIColor *)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(double)circleLineWidth;
-(void)setCircleLineWidth:(double)arg1 ;
-(double)arcLineWidth;
-(void)setArcLineWidth:(double)arg1 ;
@end

