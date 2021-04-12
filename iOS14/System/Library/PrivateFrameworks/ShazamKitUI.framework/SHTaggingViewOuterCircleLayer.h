/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKitUI.framework/ShazamKitUI
*/

#import <QuartzCore/CALayer.h>

@class CALayer;

@interface SHTaggingViewOuterCircleLayer : CALayer {

	CALayer* _circleContainerLayer;
	CALayer* _circleLayer;

}

@property (nonatomic,retain) CALayer * circleContainerLayer;              //@synthesize circleContainerLayer=_circleContainerLayer - In the implementation block
@property (nonatomic,retain) CALayer * circleLayer;                       //@synthesize circleLayer=_circleLayer - In the implementation block
-(void)setup;
-(void)layoutSublayers;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(CALayer *)circleLayer;
-(void)setCircleLayer:(CALayer *)arg1 ;
-(void)setCircleContainerLayer:(CALayer *)arg1 ;
-(CALayer *)circleContainerLayer;
@end

