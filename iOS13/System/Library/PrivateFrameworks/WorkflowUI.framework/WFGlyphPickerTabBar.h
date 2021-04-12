/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UITabBarDelegate.h>

@protocol WFGlyphPickerTabBarDelegate;
@class UITabBar, NSString;

@interface WFGlyphPickerTabBar : UIView <UITabBarDelegate> {

	unsigned long long _selectedTabIndex;
	id<WFGlyphPickerTabBarDelegate> _delegate;
	UITabBar* _tabBar;

}

@property (assign,nonatomic,__weak) UITabBar * tabBar;                                     //@synthesize tabBar=_tabBar - In the implementation block
@property (assign,nonatomic) unsigned long long selectedTabIndex;                          //@synthesize selectedTabIndex=_selectedTabIndex - In the implementation block
@property (assign,nonatomic,__weak) id<WFGlyphPickerTabBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFGlyphPickerTabBarDelegate>)delegate;
-(void)setDelegate:(id<WFGlyphPickerTabBarDelegate>)arg1 ;
-(void)tabBar:(id)arg1 didSelectItem:(id)arg2 ;
-(UITabBar *)tabBar;
-(void)setTabBar:(UITabBar *)arg1 ;
-(id)initWithTabNames:(id)arg1 tabCharacters:(id)arg2 ;
-(void)setSelectedTabIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectedTabIndex;
@end

