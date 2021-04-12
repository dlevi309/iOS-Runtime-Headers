/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)colors;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(void)layoutSublayers;
-(CALayer *)gradientLayer;
-(id)init;
-(void)setGradientFrame:(CGRect)arg1 ;
-(void)setTrackingLayer:(CATransformLayer *)arg1 ;
-(id)description;
-(CATransformLayer *)trackingLayer;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)setReferenceView:(id<IMDynamicGradientReferenceView>)arg1 ;
-(id<IMDynamicGradientReferenceView>)referenceView;
-(void)setScreenScale:(double)arg1 ;
-(void)setGradientLayer:(CALayer *)arg1 ;
-(CGRect)gradientFrame;
-(double)screenScale;
-(CGImageRef)gradient;
-(void)dealloc;
-(void)_updateAnimation;
-(void)_updateGradientImage;
-(double)_floorToPixels:(double)arg1 ;
-(void)didMoveToWindow:(id)arg1 ;
@end

