/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIColor, UIView;

@interface _UIParallaxDimmingView : UIView {

	UIImageView* leftEdgeFade;
	BOOL _backgroundIsDimmed;
	UIColor* _dimmingColor;
	UIView* _addingSubview;

}

@property (nonatomic,retain) UIColor * dimmingColor;               //@synthesize dimmingColor=_dimmingColor - In the implementation block
@property (assign,nonatomic) BOOL backgroundIsDimmed;              //@synthesize backgroundIsDimmed=_backgroundIsDimmed - In the implementation block
@property (nonatomic,retain) UIView * addingSubview;               //@synthesize addingSubview=_addingSubview - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setDimmingColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 overrideDimmingColor:(id)arg2 ;
-(void)setBackgroundIsDimmed:(BOOL)arg1 ;
-(id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 shouldReverseLayoutDirection:(BOOL)arg3 ;
-(void)_updateLeftEdgeFade:(BOOL)arg1 ;
-(void)crossFade;
-(UIColor *)dimmingColor;
-(void)setAddingSubview:(UIView *)arg1 ;
-(UIView *)addingSubview;
-(BOOL)backgroundIsDimmed;
-(id)defaultBorderColor;
-(id)_basicAnimationWithKeyPath:(id)arg1 ;
@end

