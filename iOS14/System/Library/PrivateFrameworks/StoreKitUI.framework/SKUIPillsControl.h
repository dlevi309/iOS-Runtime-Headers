/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class SKUIColorScheme, NSString, SKUISegmentedControl, NSArray;

@interface SKUIPillsControl : UIControl {

	SKUIColorScheme* _colorScheme;
	UIEdgeInsets _contentInset;
	long long _maximumNumberOfVisiblePills;
	NSString* _moreListTitle;
	SKUISegmentedControl* _segmentedControl;
	NSArray* _titles;

}

@property (nonatomic,copy) SKUIColorScheme * colorScheme;                        //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                          //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfVisiblePills;              //@synthesize maximumNumberOfVisiblePills=_maximumNumberOfVisiblePills - In the implementation block
@property (nonatomic,copy) NSString * moreListTitle;                             //@synthesize moreListTitle=_moreListTitle - In the implementation block
@property (assign,nonatomic) long long selectedIndex; 
@property (nonatomic,readonly) CGRect selectedPillFrame; 
@property (nonatomic,copy) NSArray * titles;                                     //@synthesize titles=_titles - In the implementation block
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setTitles:(NSArray *)arg1 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)layoutSubviews;
-(long long)selectedIndex;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)titles;
-(void)dealloc;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(NSString *)moreListTitle;
-(void)setMoreListTitle:(NSString *)arg1 ;
-(void)_segmentedControlAction:(id)arg1 ;
-(void)reloadPills;
-(CGRect)selectedPillFrame;
-(long long)maximumNumberOfVisiblePills;
-(void)setMaximumNumberOfVisiblePills:(long long)arg1 ;
@end

