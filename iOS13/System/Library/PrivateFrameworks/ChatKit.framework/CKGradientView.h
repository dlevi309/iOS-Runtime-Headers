/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKLayerDelegate.h>

@protocol CKGradientReferenceView;
@class UIView, NSArray, UIImage, CKBaseLayer, CATransformLayer;

@interface CKGradientView : UIView <CKLayerDelegate> {

	UIView*<CKGradientReferenceView> _referenceView;
	NSArray* _colors;
	UIImage* _maskImage;
	CKBaseLayer* _gradientLayer;
	CATransformLayer* _trackingLayer;
	CGRect _gradientFrame;

}

@property (nonatomic,retain) CKBaseLayer * gradientLayer;                                        //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) CGRect gradientFrame;                                               //@synthesize gradientFrame=_gradientFrame - In the implementation block
@property (nonatomic,retain) CATransformLayer * trackingLayer;                                   //@synthesize trackingLayer=_trackingLayer - In the implementation block
@property (assign,nonatomic,__weak) UIView*<CKGradientReferenceView> referenceView;              //@synthesize referenceView=_referenceView - In the implementation block
@property (nonatomic,retain) NSArray * colors;                                                   //@synthesize colors=_colors - In the implementation block
@property (nonatomic,retain) UIImage * maskImage;                                                //@synthesize maskImage=_maskImage - In the implementation block
@property (nonatomic,readonly) UIImage * gradient; 
+(id)gradientViews;
-(void)dealloc;
-(id)description;
-(UIImage *)maskImage;
-(void)setMaskImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setColors:(NSArray *)arg1 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(CKBaseLayer *)gradientLayer;
-(UIView*<CKGradientReferenceView>)referenceView;
-(void)setReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(UIImage *)gradient;
-(void)setGradientLayer:(CKBaseLayer *)arg1 ;
-(NSArray *)colors;
-(void)ckLayerDidBecomeVisible:(BOOL)arg1 ;
-(void)setGradientFrame:(CGRect)arg1 ;
-(CGRect)gradientFrame;
-(void)setTrackingLayer:(CATransformLayer *)arg1 ;
-(CATransformLayer *)trackingLayer;
-(void)updateAnimation;
-(void)updateGradientImage;
@end

