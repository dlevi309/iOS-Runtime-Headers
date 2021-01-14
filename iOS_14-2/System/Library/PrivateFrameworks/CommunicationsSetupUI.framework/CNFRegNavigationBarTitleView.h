/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(id)_defaultFont;
-(UINavigationItem *)item;
-(void)setItem:(UINavigationItem *)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateTitleLabel;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(BOOL)_useSilverLookForBarStyle:(long long)arg1 ;
-(id)initWithNavigationItem:(id)arg1 ;
-(void)dealloc;
-(id)_titleTextColorForBarStyle:(long long)arg1 ;
@end

