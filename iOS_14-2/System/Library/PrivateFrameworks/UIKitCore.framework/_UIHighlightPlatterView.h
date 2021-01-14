/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)shadowAlpha;
-(void)setShadowAlpha:(double)arg1 ;
-(id)initWithTargetedPreview:(id)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setBackgroundAlpha:(double)arg1 ;
-(_UIPlatterSoftShadowView *)shadowView;
-(double)backgroundAlpha;
-(void)setTargetedPreview:(UITargetedPreview *)arg1 ;
-(_UIPortalView *)portalView;
-(void)setShadowView:(_UIPlatterSoftShadowView *)arg1 ;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(UITargetedPreview *)targetedPreview;
@end

