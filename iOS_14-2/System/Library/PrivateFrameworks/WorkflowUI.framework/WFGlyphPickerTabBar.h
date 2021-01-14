/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITabBar *)tabBar;
-(id<WFGlyphPickerTabBarDelegate>)delegate;
-(void)setDelegate:(id<WFGlyphPickerTabBarDelegate>)arg1 ;
-(void)setTabBar:(UITabBar *)arg1 ;
-(void)tabBar:(id)arg1 didSelectItem:(id)arg2 ;
-(id)initWithTabNames:(id)arg1 tabCharacters:(id)arg2 ;
-(void)setSelectedTabIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectedTabIndex;
@end

