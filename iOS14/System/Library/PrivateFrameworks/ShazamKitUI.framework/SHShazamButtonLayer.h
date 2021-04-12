/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKitUI.framework/ShazamKitUI
*/

#import <ShazamKitUI/ShazamKitUI-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol SHShazamButtonViewDelegate;
@class CALayer, CAShapeLayer, NSString;

@interface SHShazamButtonLayer : CALayer <CAAnimationDelegate> {

	BOOL _initialAnimationPerformed;
	id<SHShazamButtonViewDelegate> _buttonDelegate;
	CALayer* _backgroundLayer;
	CALayer* _shapeLayer;
	CAShapeLayer* _topTransparentLayer;
	CAShapeLayer* _bottomTransparentLayer;
	CAShapeLayer* _topSolidLayer;
	CAShapeLayer* _bottomSolidLayer;
	CAShapeLayer* _topBorder;

}

@property (nonatomic,retain) CALayer * backgroundLayer;                                         //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain) CALayer * shapeLayer;                                              //@synthesize shapeLayer=_shapeLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * topTransparentLayer;                                //@synthesize topTransparentLayer=_topTransparentLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * bottomTransparentLayer;                             //@synthesize bottomTransparentLayer=_bottomTransparentLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * topSolidLayer;                                      //@synthesize topSolidLayer=_topSolidLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * bottomSolidLayer;                                   //@synthesize bottomSolidLayer=_bottomSolidLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * topBorder;                                          //@synthesize topBorder=_topBorder - In the implementation block
@property (assign,nonatomic) BOOL initialAnimationPerformed;                                    //@synthesize initialAnimationPerformed=_initialAnimationPerformed - In the implementation block
@property (assign,nonatomic,__weak) id<SHShazamButtonViewDelegate> buttonDelegate;              //@synthesize buttonDelegate=_buttonDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSublayers;
-(id)init;
-(id<SHShazamButtonViewDelegate>)buttonDelegate;
-(void)setButtonDelegate:(id<SHShazamButtonViewDelegate>)arg1 ;
-(CALayer *)shapeLayer;
-(void)setShapeLayer:(CALayer *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CALayer *)backgroundLayer;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(CAShapeLayer *)topBorder;
-(void)setTopBorder:(CAShapeLayer *)arg1 ;
-(void)buildView;
-(void)drawTransparentShape;
-(BOOL)initialAnimationPerformed;
-(void)setInitialAnimationPerformed:(BOOL)arg1 ;
-(void)performSDrawingAnimationWithDuration:(double)arg1 delay:(double)arg2 ;
-(void)removeTransparentShapeWithDuration:(double)arg1 delay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)drawSolidShapeWithDuration:(double)arg1 delay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)drawSolidShape;
-(void)removeTransparentShape;
-(CAShapeLayer *)topSolidLayer;
-(CAShapeLayer *)bottomSolidLayer;
-(CAShapeLayer *)topTransparentLayer;
-(CAShapeLayer *)bottomTransparentLayer;
-(void)setTopTransparentLayer:(CAShapeLayer *)arg1 ;
-(void)setBottomTransparentLayer:(CAShapeLayer *)arg1 ;
-(CGPathRef)topStrokePath;
-(id)strokeLayerWithPath:(CGPathRef)arg1 color:(CGColorRef)arg2 ;
-(CGPathRef)bottomStrokePath;
-(void)setTopSolidLayer:(CAShapeLayer *)arg1 ;
-(void)setBottomSolidLayer:(CAShapeLayer *)arg1 ;
-(CGPathRef)topStrokeLongPath;
-(CGPathRef)bottomStrokeLongPath;
-(void)performSDrawingIntroAnimation;
-(void)skipIntroAnimation;
-(void)performFadeInIntroAnimation:(double)arg1 delay:(double)arg2 ;
@end

