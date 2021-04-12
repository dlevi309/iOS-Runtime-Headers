/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIBezierPath, UIView, _UIPlatterShadowView;

@interface _UIPlatterSoftShadowView : UIView {

	BOOL _needsPunchOut;
	UIBezierPath* _shadowPath;
	UIView* _backgroundView;
	_UIPlatterShadowView* _diffuseShadowView;
	_UIPlatterShadowView* _rimShadowView;

}

@property (nonatomic,readonly) UIView * backgroundView;                               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) _UIPlatterShadowView * diffuseShadowView;              //@synthesize diffuseShadowView=_diffuseShadowView - In the implementation block
@property (nonatomic,readonly) _UIPlatterShadowView * rimShadowView;                  //@synthesize rimShadowView=_rimShadowView - In the implementation block
@property (nonatomic,copy) UIBezierPath * shadowPath;                                 //@synthesize shadowPath=_shadowPath - In the implementation block
@property (assign,nonatomic) BOOL needsPunchOut;                                      //@synthesize needsPunchOut=_needsPunchOut - In the implementation block
-(void)setShadowPath:(UIBezierPath *)arg1 ;
-(void)_updateForShadowPath;
-(UIBezierPath *)shadowPath;
-(id)initWithFrame:(CGRect)arg1 shadowPath:(id)arg2 ;
-(void)setNeedsPunchOut:(BOOL)arg1 ;
-(BOOL)needsPunchOut;
-(UIView *)backgroundView;
-(_UIPlatterShadowView *)diffuseShadowView;
-(_UIPlatterShadowView *)rimShadowView;
@end

