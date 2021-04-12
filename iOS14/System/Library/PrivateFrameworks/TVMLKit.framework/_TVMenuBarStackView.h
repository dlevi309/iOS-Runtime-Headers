/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<_TVMenuBarStackViewDelegate>)delegate;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<_TVMenuBarStackViewDelegate>)arg1 ;
-(unsigned long long)selectedIndex;
-(id)initWithCoder:(id)arg1 ;
-(void)_configureView;
-(void)setTabBarItems:(NSArray *)arg1 ;
-(NSArray *)tabBarItems;
-(void)_buttonEventTouchUpInside:(id)arg1 ;
@end

