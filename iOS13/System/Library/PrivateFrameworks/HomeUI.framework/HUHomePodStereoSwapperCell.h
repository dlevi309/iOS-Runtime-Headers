/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol HUHomePodStereoSwapperCellDelegate;
@class UIButton, HUHomePodDetailView;

@interface HUHomePodStereoSwapperCell : UITableViewCell {

	UIButton* _swapButton;
	HUHomePodDetailView* _leftHomePod;
	HUHomePodDetailView* _rightHomePod;
	id<HUHomePodStereoSwapperCellDelegate> _delegate;

}

@property (nonatomic,readonly) UIButton * swapButton;                                             //@synthesize swapButton=_swapButton - In the implementation block
@property (nonatomic,readonly) HUHomePodDetailView * leftHomePod;                                 //@synthesize leftHomePod=_leftHomePod - In the implementation block
@property (nonatomic,readonly) HUHomePodDetailView * rightHomePod;                                //@synthesize rightHomePod=_rightHomePod - In the implementation block
@property (assign,nonatomic,__weak) id<HUHomePodStereoSwapperCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HUHomePodStereoSwapperCellDelegate>)delegate;
-(void)setDelegate:(id<HUHomePodStereoSwapperCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_swap;
-(void)_setupConstraints;
-(UIButton *)swapButton;
-(HUHomePodDetailView *)leftHomePod;
-(HUHomePodDetailView *)rightHomePod;
@end

