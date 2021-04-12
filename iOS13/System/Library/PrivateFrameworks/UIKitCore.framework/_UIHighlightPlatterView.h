/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class UITargetedPreview, _UIPortalView, UIView, _UIPlatterSoftShadowView;

@interface _UIHighlightPlatterView : UIView {

	double _shadowAlpha;
	double _backgroundAlpha;
	UITargetedPreview* _targetedPreview;
	_UIPortalView* _portalView;
	UIView* _backgroundView;
	_UIPlatterSoftShadowView* _shadowView;

}

@property (nonatomic,retain) UITargetedPreview * targetedPreview;                //@synthesize targetedPreview=_targetedPreview - In the implementation block
@property (nonatomic,retain) _UIPortalView * portalView;                         //@synthesize portalView=_portalView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) _UIPlatterSoftShadowView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,nonatomic) double shadowAlpha;                                 //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (assign,nonatomic) double backgroundAlpha;                             //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
-(UIView *)backgroundView;
-(double)backgroundAlpha;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setShadowAlpha:(double)arg1 ;
-(double)shadowAlpha;
-(void)setBackgroundView:(UIView *)arg1 ;
-(_UIPlatterSoftShadowView *)shadowView;
-(void)setShadowView:(_UIPlatterSoftShadowView *)arg1 ;
-(UITargetedPreview *)targetedPreview;
-(void)setTargetedPreview:(UITargetedPreview *)arg1 ;
-(_UIPortalView *)portalView;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(id)initWithTargetedPreview:(id)arg1 ;
@end

