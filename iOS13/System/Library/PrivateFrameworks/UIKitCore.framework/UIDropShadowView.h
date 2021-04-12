/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _UIGrabber, NSArray, _UICutoutShadowView;

@interface UIDropShadowView : UIView {

	BOOL _masksTopCornersOnly;
	BOOL _supportsShadowAndGrabber;
	UIView* _contentView;
	UIView* _overlayView;
	_UIGrabber* _grabber;
	long long _independentCorners;
	UIView* _firstCornerClippingDescendant;
	NSArray* _cornerClippingDescendants;
	_UICutoutShadowView* _magicShadowView;
	UIRectCornerRadii _environmentMatchingCornerRadii;

}

@property (nonatomic,readonly) BOOL supportsShadowAndGrabber;                               //@synthesize supportsShadowAndGrabber=_supportsShadowAndGrabber - In the implementation block
@property (nonatomic,readonly) long long independentCorners;                                //@synthesize independentCorners=_independentCorners - In the implementation block
@property (nonatomic,__weak,readonly) UIView * firstCornerClippingDescendant;               //@synthesize firstCornerClippingDescendant=_firstCornerClippingDescendant - In the implementation block
@property (nonatomic,readonly) NSArray * cornerClippingDescendants;                         //@synthesize cornerClippingDescendants=_cornerClippingDescendants - In the implementation block
@property (nonatomic,readonly) UIView * deepestClippingView; 
@property (nonatomic,readonly) _UICutoutShadowView * magicShadowView;                       //@synthesize magicShadowView=_magicShadowView - In the implementation block
@property (assign,nonatomic) UIRectCornerRadii environmentMatchingCornerRadii;              //@synthesize environmentMatchingCornerRadii=_environmentMatchingCornerRadii - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                          //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) _UIGrabber * grabber;                                        //@synthesize grabber=_grabber - In the implementation block
@property (assign,nonatomic) BOOL masksTopCornersOnly;                                      //@synthesize masksTopCornersOnly=_masksTopCornersOnly - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setMasksTopCornersOnly:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 independentCorners:(long long)arg2 supportsShadowAndGrabber:(BOOL)arg3 stylesSheetsAsCards:(BOOL)arg4 ;
-(_UIGrabber *)grabber;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)willBeginRotationWithOriginalBounds:(CGRect)arg1 newBounds:(CGRect)arg2 ;
-(void)setMagicShadowAlpha:(double)arg1 ;
-(void)setGrabberAlpha:(double)arg1 ;
-(void)setEnvironmentMatchingCornerRadii:(UIRectCornerRadii)arg1 ;
-(void)didFinishRotation;
-(NSArray *)cornerClippingDescendants;
-(UIView *)firstCornerClippingDescendant;
-(BOOL)supportsShadowAndGrabber;
-(long long)independentCorners;
-(UIView *)deepestClippingView;
-(_UICutoutShadowView *)magicShadowView;
-(UIRectCornerRadii)environmentMatchingCornerRadii;
-(UIView *)overlayView;
-(BOOL)masksTopCornersOnly;
@end

