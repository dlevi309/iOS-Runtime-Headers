/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIImageView, _UIBarBackgroundShadowView, UIView, NSString, _UIBarBackgroundLayout;

@interface _UIBarBackground : UIView {

	UIVisualEffectView* _effectView1;
	UIImageView* _colorAndImageView1;
	_UIBarBackgroundShadowView* _shadowView1;
	UIVisualEffectView* _effectView2;
	UIImageView* _colorAndImageView2;
	_UIBarBackgroundShadowView* _shadowView2;
	UIView* _topInsetView;
	double _bg1LastLayoutHeight;
	double _bg2LastLayoutHeight;
	struct {
		unsigned needsTopInsetView : 1;
		unsigned needsEffectView1 : 1;
		unsigned needsColorAndImageView1 : 1;
		unsigned needsShadowView1 : 1;
		unsigned needsEffectView2 : 1;
		unsigned needsColorAndImageView2 : 1;
		unsigned needsShadowView2 : 1;
	}  _backgroundFlags;
	BOOL _topAligned;
	NSString* _groupName;
	_UIBarBackgroundLayout* _layout;
	UIView* _customBackgroundView;

}

@property (nonatomic,copy) NSString * groupName;                           //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) BOOL topAligned;                              //@synthesize topAligned=_topAligned - In the implementation block
@property (nonatomic,retain) _UIBarBackgroundLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UIView * customBackgroundView;                //@synthesize customBackgroundView=_customBackgroundView - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(_UIBarBackgroundLayout *)layout;
-(void)setLayout:(_UIBarBackgroundLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_shadowView;
-(void)_setupBackgroundValues;
-(void)_updateBackgroundViewVisiblity;
-(CGRect)frameForYOrigin:(double)arg1 height:(double)arg2 ;
-(void)_orderSubviews;
-(void)_setupShadowView:(id)arg1 effect:(id)arg2 image:(id)arg3 shadowColor:(id)arg4 shadowTint:(id)arg5 alpha:(double)arg6 ;
-(void)cleanupBackgroundViews;
-(void)prepareBackgroundViews;
-(void)updateBackground;
-(id)_encodableSubviews;
-(void)setCustomBackgroundView:(UIView *)arg1 ;
-(void)transition:(unsigned long long)arg1 toLayout:(id)arg2 ;
-(void)transitionBackgroundViews;
-(id)_backgroundEffectView;
-(void)set_backgroundEffectView:(id)arg1 ;
-(void)set_shadowView:(id)arg1 ;
-(BOOL)topAligned;
-(void)setTopAligned:(BOOL)arg1 ;
-(UIView *)customBackgroundView;
@end

