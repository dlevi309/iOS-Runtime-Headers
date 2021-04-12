/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol IMDynamicGradientReferenceView;
@class NSArray, CALayer, CATransformLayer;

@interface IMDynamicGradientLayer : CALayer {

	CGColorSpaceRef _colorSpace;
	double _screenScale;
	id<IMDynamicGradientReferenceView> _referenceView;
	NSArray* _colors;
	CALayer* _gradientLayer;
	CATransformLayer* _trackingLayer;
	CGRect _gradientFrame;

}

@property (nonatomic,retain) CALayer * gradientLayer;                                              //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) CGRect gradientFrame;                                                 //@synthesize gradientFrame=_gradientFrame - In the implementation block
@property (nonatomic,retain) CATransformLayer * trackingLayer;                                     //@synthesize trackingLayer=_trackingLayer - In the implementation block
@property (assign,nonatomic) double screenScale;                                                   //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) CGColorSpaceRef colorSpace;                                           //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic,__weak) id<IMDynamicGradientReferenceView> referenceView;              //@synthesize referenceView=_referenceView - In the implementation block
@property (nonatomic,copy) NSArray * colors;                                                       //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) CGImageRef gradient; 
-(id)init;
-(void)dealloc;
-(id)description;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(CALayer *)gradientLayer;
-(id<IMDynamicGradientReferenceView>)referenceView;
-(void)setReferenceView:(id<IMDynamicGradientReferenceView>)arg1 ;
-(void)setScreenScale:(double)arg1 ;
-(CGImageRef)gradient;
-(void)setGradientLayer:(CALayer *)arg1 ;
-(NSArray *)colors;
-(void)layoutSublayers;
-(double)screenScale;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)setGradientFrame:(CGRect)arg1 ;
-(CGRect)gradientFrame;
-(void)setTrackingLayer:(CATransformLayer *)arg1 ;
-(CATransformLayer *)trackingLayer;
-(void)_updateAnimation;
-(void)_updateGradientImage;
-(double)_floorToPixels:(double)arg1 ;
-(void)didMoveToWindow:(id)arg1 ;
@end

