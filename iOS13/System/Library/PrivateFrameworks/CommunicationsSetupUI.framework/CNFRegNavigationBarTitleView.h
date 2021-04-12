/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UINavigationItem, UILabel, UIActivityIndicatorView;

@interface CNFRegNavigationBarTitleView : UIView {

	UINavigationItem* _item;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (assign,nonatomic) UINavigationItem * item;              //@synthesize item=_item - In the implementation block
-(void)dealloc;
-(UINavigationItem *)item;
-(void)setItem:(UINavigationItem *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithNavigationItem:(id)arg1 ;
-(id)_defaultFont;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(BOOL)_useSilverLookForBarStyle:(long long)arg1 ;
-(void)_updateTitleLabel;
-(id)_titleTextColorForBarStyle:(long long)arg1 ;
@end

