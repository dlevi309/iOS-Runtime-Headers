/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIStackView.h>

@protocol _TVMenuBarStackViewDelegate;
@class NSArray;

@interface _TVMenuBarStackView : UIStackView {

	id<_TVMenuBarStackViewDelegate> _delegate;
	unsigned long long _selectedIndex;
	NSArray* _tabBarItems;

}

@property (assign,nonatomic,__weak) id<_TVMenuBarStackViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;                             //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,copy) NSArray * tabBarItems;                                          //@synthesize tabBarItems=_tabBarItems - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<_TVMenuBarStackViewDelegate>)delegate;
-(void)setDelegate:(id<_TVMenuBarStackViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(void)setTabBarItems:(NSArray *)arg1 ;
-(NSArray *)tabBarItems;
-(void)_configureView;
-(void)_buttonEventTouchUpInside:(id)arg1 ;
@end

