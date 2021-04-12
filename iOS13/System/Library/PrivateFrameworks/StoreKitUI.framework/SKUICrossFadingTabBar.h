/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIScrollingTabBarBackgroundView, NSArray;

@interface SKUICrossFadingTabBar : UIView {

	SKUIScrollingTabBarBackgroundView* _backgroundView;
	NSArray* _tabBarButtons;

}

@property (nonatomic,readonly) SKUIScrollingTabBarBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) NSArray * tabBarButtons;                                             //@synthesize tabBarButtons=_tabBarButtons - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(SKUIScrollingTabBarBackgroundView *)backgroundView;
-(void)layoutSubviews;
-(NSArray *)tabBarButtons;
-(void)setTabBarButtons:(NSArray *)arg1 ;
@end

