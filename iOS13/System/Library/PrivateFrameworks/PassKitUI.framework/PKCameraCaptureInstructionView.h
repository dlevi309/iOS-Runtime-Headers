/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIScrollView, UIButton, PKTableHeaderView;

@interface PKCameraCaptureInstructionView : UIView {

	long long _context;
	UIScrollView* _scrollView;
	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	PKTableHeaderView* _headerView;

}

@property (nonatomic,retain) UIButton * primaryButton;                    //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) UIButton * secondaryButton;                  //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,retain) PKTableHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(PKTableHeaderView *)headerView;
-(void)setHeaderView:(PKTableHeaderView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(BOOL)isBuddyiPad;
-(void)setPrimaryButton:(UIButton *)arg1 ;
-(void)setSecondaryButton:(UIButton *)arg1 ;
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
@end

