/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PKEditTableNoPassesViewDelegate>)delegate;
-(void)setDelegate:(id<PKEditTableNoPassesViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)scanCodeButtonTapped;
-(void)findAppsForWalletTapped;
@end

