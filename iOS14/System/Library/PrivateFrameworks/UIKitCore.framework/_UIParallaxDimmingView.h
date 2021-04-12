/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateLeftEdgeFade:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)setBackgroundIsDimmed:(BOOL)arg1 ;
-(BOOL)backgroundIsDimmed;
-(id)_basicAnimationWithKeyPath:(id)arg1 ;
-(UIColor *)dimmingColor;
-(void)setDimmingColor:(UIColor *)arg1 ;
-(void)setAddingSubview:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 overrideDimmingColor:(id)arg2 ;
-(UIView *)addingSubview;
-(id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 shouldReverseLayoutDirection:(BOOL)arg3 ;
-(id)defaultBorderColor;
-(void)crossFade;
@end

