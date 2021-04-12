/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIView.h>

@class NSProgress, CAShapeLayer;

@interface DCCircularProgressView : UIView {

	double _progress;
	NSProgress* _observedProgress;
	CAShapeLayer* _circleLayer;

}

@property (nonatomic,retain) CAShapeLayer * circleLayer;                 //@synthesize circleLayer=_circleLayer - In the implementation block
@property (assign,nonatomic) double progress;                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSProgress * observedProgress;              //@synthesize observedProgress=_observedProgress - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)awakeFromNib;
-(NSProgress *)observedProgress;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(CAShapeLayer *)circleLayer;
-(CGPathRef)newPathForProgress:(double)arg1 ;
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
@end

