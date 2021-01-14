/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKitUI.framework/ShazamKitUI
*/

#import <ShazamKitUI/ShazamKitUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer, CAShapeLayer;

@interface SHTaggingViewInnerCircleLayer : CALayer {

	CALayer* _circleContainerLayer;
	CAShapeLayer* _circle;

}

@property (nonatomic,retain) CAShapeLayer * circle;                       //@synthesize circle=_circle - In the implementation block
@property (nonatomic,retain) CALayer * circleContainerLayer;              //@synthesize circleContainerLayer=_circleContainerLayer - In the implementation block
-(void)setup;
-(void)layoutSublayers;
-(CAShapeLayer *)circle;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setCircleContainerLayer:(CALayer *)arg1 ;
-(CALayer *)circleContainerLayer;
-(void)setCircle:(CAShapeLayer *)arg1 ;
-(CGPathRef)circlePathForRect:(CGRect)arg1 ;
@end

