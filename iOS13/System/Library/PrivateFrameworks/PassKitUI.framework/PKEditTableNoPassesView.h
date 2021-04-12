/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKEditTableNoPassesViewDelegate;
@class UILabel, UIButton;

@interface PKEditTableNoPassesView : UIView {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _buttonScanCode;
	UIButton* _buttonFindApps;
	id<PKEditTableNoPassesViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKEditTableNoPassesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKEditTableNoPassesViewDelegate>)delegate;
-(void)setDelegate:(id<PKEditTableNoPassesViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)scanCodeButtonTapped;
-(void)findAppsForWalletTapped;
@end

