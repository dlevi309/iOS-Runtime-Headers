/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)progress;
-(NSProgress *)observedProgress;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)awakeFromNib;
-(void)dealloc;
-(CAShapeLayer *)circleLayer;
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
-(CGPathRef)newPathForProgress:(double)arg1 ;
@end

