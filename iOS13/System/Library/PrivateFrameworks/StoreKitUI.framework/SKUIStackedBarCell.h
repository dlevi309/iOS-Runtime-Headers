/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UILabel, UIButton, UIView;

@interface SKUIStackedBarCell : UIButton {

	BOOL _expanded;
	UILabel* _expandedLabel;
	UIButton* _backButton;
	UIView* _separator;

}

@property (assign,nonatomic) BOOL expanded;                        //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) UIButton * backButton;              //@synthesize backButton=_backButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIButton *)backButton;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
@end

