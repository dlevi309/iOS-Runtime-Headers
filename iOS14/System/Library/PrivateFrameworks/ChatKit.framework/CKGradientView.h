/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(CKBaseLayer *)gradientLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)ckLayerDidBecomeVisible:(BOOL)arg1 ;
-(void)setGradientFrame:(CGRect)arg1 ;
-(void)setMaskImage:(UIImage *)arg1 ;
-(void)didMoveToSuperview;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(void)updateAnimation;
-(void)setTrackingLayer:(CATransformLayer *)arg1 ;
-(id)description;
-(CATransformLayer *)trackingLayer;
-(void)updateGradientImage;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(UIView*<CKGradientReferenceView>)referenceView;
-(UIImage *)maskImage;
-(void)setGradientLayer:(CKBaseLayer *)arg1 ;
-(CGRect)gradientFrame;
-(UIImage *)gradient;
-(void)dealloc;
@end

