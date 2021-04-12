/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKitUI.framework/ShazamKitUI
*/

#import <QuartzCore/CALayer.h>

@class CALayer, CAShapeLayer;

@interface SHTaggingViewAutoShadowLayer : CALayer {

	CALayer* _autoShadowBackgroundLayer;
	CAShapeLayer* _autoShadowOuterLayer;

}

@property (nonatomic,retain) CALayer * autoShadowBackgroundLayer;              //@synthesize autoShadowBackgroundLayer=_autoShadowBackgroundLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * autoShadowOuterLayer;              //@synthesize autoShadowOuterLayer=_autoShadowOuterLayer - In the implementation block
-(void)layoutSublayers;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setupSublayers;
-(void)setAutoShadowBackgroundLayer:(CALayer *)arg1 ;
-(CALayer *)autoShadowBackgroundLayer;
-(void)setAutoShadowOuterLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)autoShadowOuterLayer;
@end

