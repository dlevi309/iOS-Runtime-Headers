/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)_mapkitLeafClass;
+(id)_shadowImage;
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
+(id)_imageCache;
+(id)_reuseIdentifier;
+(Class)layerClass;
-(id<_MKPinAnnotationViewDelegate>)_delegate;
-(id)_image;
-(void)_invalidateImage;
-(int)_state;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_removeAllAnimations;
-(id)_pins;
-(void)_updateAnchorPosition:(CGPoint)arg1 alignToPixels:(BOOL)arg2 ;
-(void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)_defaultCollisionAlignmentRectInsets;
-(void)setPinColor:(unsigned long long)arg1 ;
-(id)_highlightedImage;
-(void)_stopDrop;
-(unsigned long long)pinColor;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)description;
-(void)setCenter:(CGPoint)arg1 ;
-(BOOL)isHighlighted;
-(void)setPinTintColor:(UIColor *)arg1 ;
-(UIColor *)pinTintColor;
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)_didUpdatePosition;
-(void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2 ;
-(id)_pinBounceImages;
-(id)_pinJumpImages;
-(id)_floatingImage;
-(void)_liftDidEnd:(id)arg1 ;
-(id)_bounceAnimation:(BOOL)arg1 withDelay:(double)arg2 addToLayer:(BOOL)arg3 ;
-(void)_liftForDraggingAnimated:(BOOL)arg1 ;
-(void)_dropAfterDraggingAndRevertPosition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_liftForDraggingAfterBounceAnimated:(BOOL)arg1 ;
-(void)_cleanupAfterPinDropAnimation;
-(CGPoint)_draggingDropOffset;
-(void)setAnimatesDrop:(BOOL)arg1 ;
-(BOOL)animatesDrop;
-(CGRect)_significantBounds;
-(void)_dropFromDistance:(double)arg1 maxDistance:(double)arg2 withDelay:(double)arg3 ;
-(void)_setDelegate:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateShadowLayer;
-(void)setHighlighted:(BOOL)arg1 ;
@end

