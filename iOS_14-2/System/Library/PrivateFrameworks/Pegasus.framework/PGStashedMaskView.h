/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PGStashedMaskView : UIView {

	BOOL _tabHidden;
	BOOL _tabShownLeft;
	UIView* _mainBody;
	UIView* _tab;
	UIView* _tabTopCornerFill;
	UIView* _tabBottomCornerFill;
	UIView* _tabLeftTopCornerDestOut;
	UIView* _tabLeftBottomCornerDestOut;
	UIView* _tabRightTopCornerDestOut;
	UIView* _tabRightBottomCornerDestOut;
	UIView* _tabShadowView;
	CGSize _minimumStashTabSize;

}

@property (assign,nonatomic,__weak) UIView * tabShadowView;              //@synthesize tabShadowView=_tabShadowView - In the implementation block
@property (nonatomic,readonly) CGRect tabViewBounds; 
@property (assign,nonatomic) CGSize minimumStashTabSize;                 //@synthesize minimumStashTabSize=_minimumStashTabSize - In the implementation block
-(double)_continuousCornerRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setMinimumStashTabSize:(CGSize)arg1 ;
-(CGRect)tabViewBounds;
-(void)setTabHidden:(BOOL)arg1 left:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 minimumStashTabSize:(CGSize)arg2 ;
-(void)setTabShadowView:(UIView *)arg1 ;
-(CGSize)minimumStashTabSize;
-(CGRect)_mainBodyBounds;
-(UIView *)tabShadowView;
@end

