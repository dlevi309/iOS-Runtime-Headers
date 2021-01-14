/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface FIUIAnimatingTwoLabelView : UIView {

	UILabel* _visibleLabel;
	UILabel* _mainLabel;
	UILabel* _secondaryLabel;

}

@property (nonatomic,retain) UILabel * mainLabel;                   //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;              //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * visibleLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)mainLabel;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)setMainLabel:(UILabel *)arg1 ;
-(UILabel *)secondaryLabel;
-(id)initWithFrame:(CGRect)arg1 mainLabel:(id)arg2 secondaryLabel:(id)arg3 ;
-(void)applyFont:(id)arg1 ;
-(void)showMainLabelAnimated:(BOOL)arg1 ;
-(CGRect)_frameAboveBounds;
-(CGRect)_frameBelowBounds;
-(void)_updateHidden;
-(UILabel *)visibleLabel;
-(void)showSecondaryLabelAnimated:(BOOL)arg1 ;
@end

