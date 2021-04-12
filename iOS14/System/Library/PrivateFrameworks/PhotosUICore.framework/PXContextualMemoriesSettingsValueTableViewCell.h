/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIButton, UIView, NSLayoutConstraint;

@interface PXContextualMemoriesSettingsValueTableViewCell : UITableViewCell {

	UILabel* _valueLabel;
	/*^block*/id _resetHandler;
	UIButton* _resetButton;
	UIView* _containerView;
	NSLayoutConstraint* _topLayoutMarginConstraint;
	NSLayoutConstraint* _bottomLayoutMarginConstraint;
	NSLayoutConstraint* _leftLayoutMarginConstraint;
	NSLayoutConstraint* _rightLayoutMarginConstraint;

}

@property (nonatomic,retain) UIButton * resetButton;                                         //@synthesize resetButton=_resetButton - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                         //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topLayoutMarginConstraint;                 //@synthesize topLayoutMarginConstraint=_topLayoutMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomLayoutMarginConstraint;              //@synthesize bottomLayoutMarginConstraint=_bottomLayoutMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftLayoutMarginConstraint;                //@synthesize leftLayoutMarginConstraint=_leftLayoutMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rightLayoutMarginConstraint;               //@synthesize rightLayoutMarginConstraint=_rightLayoutMarginConstraint - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                                         //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,copy) id resetHandler;                                                  //@synthesize resetHandler=_resetHandler - In the implementation block
-(void)layoutMarginsDidChange;
-(void)setContainerView:(UIView *)arg1 ;
-(void)_setUpConstraints;
-(void)_didPressReset:(id)arg1 ;
-(UIButton *)resetButton;
-(void)setResetButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)topLayoutMarginConstraint;
-(void)setTopLayoutMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomLayoutMarginConstraint;
-(void)setBottomLayoutMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leftLayoutMarginConstraint;
-(void)setResetHandler:(id)arg1 ;
-(void)setLeftLayoutMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)rightLayoutMarginConstraint;
-(void)setRightLayoutMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)containerView;
-(id)resetHandler;
-(UILabel *)valueLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

