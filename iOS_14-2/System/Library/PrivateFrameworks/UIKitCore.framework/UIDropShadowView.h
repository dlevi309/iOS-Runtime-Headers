/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _UIGrabber, NSArray, _UIRoundedRectShadowView;

@interface UIDropShadowView : UIView {

	BOOL _masksTopCornersOnly;
	BOOL _supportsShadowAndGrabber;
	UIView* _contentView;
	UIView* _overlayView;
	_UIGrabber* _grabber;
	double _grabberTopSpacing;
	long long _independentCorners;
	UIView* _firstCornerClippingDescendant;
	NSArray* _cornerClippingDescendants;
	_UIRoundedRectShadowView* _magicShadowView;
	UIRectCornerRadii _environmentMatchingCornerRadii;
	UIEdgeInsets _contentTouchInsets;

}

@property (nonatomic,readonly) BOOL supportsShadowAndGrabber;                               //@synthesize supportsShadowAndGrabber=_supportsShadowAndGrabber - In the implementation block
@property (nonatomic,readonly) long long independentCorners;                                //@synthesize independentCorners=_independentCorners - In the implementation block
@property (nonatomic,__weak,readonly) UIView * firstCornerClippingDescendant;               //@synthesize firstCornerClippingDescendant=_firstCornerClippingDescendant - In the implementation block
@property (nonatomic,readonly) NSArray * cornerClippingDescendants;                         //@synthesize cornerClippingDescendants=_cornerClippingDescendants - In the implementation block
@property (nonatomic,readonly) UIView * deepestClippingView; 
@property (nonatomic,readonly) _UIRoundedRectShadowView * magicShadowView;                  //@synthesize magicShadowView=_magicShadowView - In the implementation block
@property (assign,nonatomic) UIRectCornerRadii environmentMatchingCornerRadii;              //@synthesize environmentMatchingCornerRadii=_environmentMatchingCornerRadii - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                          //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) _UIGrabber * grabber;                                        //@synthesize grabber=_grabber - In the implementation block
@property (assign,nonatomic) double grabberTopSpacing;                                      //@synthesize grabberTopSpacing=_grabberTopSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentTouchInsets;                               //@synthesize contentTouchInsets=_contentTouchInsets - In the implementation block
@property (assign,nonatomic) BOOL masksTopCornersOnly;                                      //@synthesize masksTopCornersOnly=_masksTopCornersOnly - In the implementation block
-(void)setMagicShadowAlpha:(double)arg1 ;
-(void)setEnvironmentMatchingCornerRadii:(UIRectCornerRadii)arg1 ;
-(UIView *)overlayView;
-(_UIRoundedRectShadowView *)magicShadowView;
-(void)setOverlayView:(UIView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)deepestClippingView;
-(void)setMasksTopCornersOnly:(BOOL)arg1 ;
-(void)didFinishRotation;
-(double)grabberTopSpacing;
-(_UIGrabber *)grabber;
-(NSArray *)cornerClippingDescendants;
-(void)layoutSubviews;
-(void)setContentTouchInsets:(UIEdgeInsets)arg1 ;
-(long long)independentCorners;
-(BOOL)masksTopCornersOnly;
-(BOOL)supportsShadowAndGrabber;
-(void)setGrabberTopSpacing:(double)arg1 ;
-(UIView *)firstCornerClippingDescendant;
-(void)willBeginRotationWithOriginalBounds:(CGRect)arg1 newBounds:(CGRect)arg2 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(UIEdgeInsets)contentTouchInsets;
-(id)initWithFrame:(CGRect)arg1 independentCorners:(long long)arg2 supportsShadowAndGrabber:(BOOL)arg3 stylesSheetsAsCards:(BOOL)arg4 ;
-(UIRectCornerRadii)environmentMatchingCornerRadii;
@end

