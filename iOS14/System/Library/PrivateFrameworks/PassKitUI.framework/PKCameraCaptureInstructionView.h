/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeaderView:(PKTableHeaderView *)arg1 ;
-(void)setPrimaryButton:(UIButton *)arg1 ;
-(void)setSecondaryButton:(UIButton *)arg1 ;
-(BOOL)isBuddyiPad;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)primaryButton;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(UIButton *)secondaryButton;
-(PKTableHeaderView *)headerView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
@end

