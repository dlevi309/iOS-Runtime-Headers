/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>

@protocol _MKPinAnnotationViewDelegate;
@class UIImageView, UIColor;

@interface MKPinAnnotationView : MKAnnotationView {

	UIImageView* _shadowView;
	UIColor* _pinTintColor;
	id<_MKPinAnnotationViewDelegate> _delegate;
	int _state;
	BOOL _animatesDrop;

}

@property (assign,setter=_setDelegate:,nonatomic,__weak) id<_MKPinAnnotationViewDelegate> _delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * pinTintColor; 
@property (assign,nonatomic) BOOL animatesDrop; 
@property (assign,nonatomic) unsigned long long pinColor; 
+(Class)layerClass;
+(id)_shadowImage;
+(id)_reuseIdentifier;
+(id)_imageCache;
+(Class)_mapkitLeafClass;
+(id)_imageForLayer:(long long)arg1 state:(long long)arg2 mapType:(unsigned long long)arg3 traits:(id)arg4 ;
+(id)_imageForState:(long long)arg1 mapType:(unsigned long long)arg2 pinColor:(id)arg3 traits:(id)arg4 ;
+(id)redPinColor;
+(CGPoint)_calloutOffset;
+(CGPoint)_leftCalloutOffset;
+(CGPoint)_rightCalloutOffset;
+(id)greenPinColor;
+(id)purplePinColor;
+(id)_pinsWithMapType:(unsigned long long)arg1 pinColor:(id)arg2 traits:(id)arg3 ;
+(id)_bounceAnimation;
+(id)_dropBounceAnimation;
+(CGSize)_perceivedSize;
+(CGRect)_pinFrameForPosition:(CGPoint)arg1 ;
+(CGPoint)_perceivedAnchorPoint;
+(CGPoint)_shadowAnchorPoint;
-(id)description;
-(int)_state;
-(id<_MKPinAnnotationViewDelegate>)_delegate;
-(void)setCenter:(CGPoint)arg1 ;
-(id)_image;
-(void)_setDelegate:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_updateShadowLayer;
-(void)animationDidStart:(id)arg1 ;
-(void)_removeAllAnimations;
-(unsigned long long)pinColor;
-(void)setPinColor:(unsigned long long)arg1 ;
-(id)_highlightedImage;
-(id)_pins;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)_updateAnchorPosition:(CGPoint)arg1 alignToPixels:(BOOL)arg2 ;
-(void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)_defaultCollisionAlignmentRectInsets;
-(void)setPinTintColor:(UIColor *)arg1 ;
-(UIColor *)pinTintColor;
-(void)_invalidateImage;
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2 ;
-(void)_didUpdatePosition;
-(id)_pinBounceImages;
-(id)_pinJumpImages;
-(id)_floatingImage;
-(id)_bounceAnimation:(BOOL)arg1 withDelay:(double)arg2 addToLayer:(BOOL)arg3 ;
-(void)_liftForDraggingAnimated:(BOOL)arg1 ;
-(void)_dropAfterDraggingAndRevertPosition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_liftForDraggingAfterBounceAnimated:(BOOL)arg1 ;
-(void)_liftDidEnd:(id)arg1 ;
-(void)_cleanupAfterPinDropAnimation;
-(CGPoint)_draggingDropOffset;
-(void)setAnimatesDrop:(BOOL)arg1 ;
-(BOOL)animatesDrop;
-(CGRect)_significantBounds;
-(void)_stopDrop;
-(void)_dropFromDistance:(double)arg1 maxDistance:(double)arg2 withDelay:(double)arg3 ;
@end

