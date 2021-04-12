/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExpanded:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)expanded;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)backButton;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

