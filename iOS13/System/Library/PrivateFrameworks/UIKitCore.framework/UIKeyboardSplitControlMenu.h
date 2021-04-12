/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardMenuView.h>
#import <UIKitCore/_UIInputSwitcherSplitMenu.h>

@class NSArray;

@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView <_UIInputSwitcherSplitMenu> {

	CGSize m_preferredSize;
	NSArray* _items;
	/*^block*/id _finishSplitTransitionBlock;

}

@property (nonatomic,copy) id finishSplitTransitionBlock;              //@synthesize finishSplitTransitionBlock=_finishSplitTransitionBlock - In the implementation block
+(id)sharedInstance;
+(id)activeInstance;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredSize;
-(unsigned long long)numberOfItems;
-(id)finishSplitTransitionBlock;
-(void)setFinishSplitTransitionBlock:(id)arg1 ;
-(unsigned long long)defaultSelectedIndex;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(void)didFinishSplitTransition;
-(id)titleForItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1 ;
-(int)visibleItemForIndex:(unsigned long long)arg1 ;
-(void)actionForItem:(id)arg1 ;
-(void)setSplitAndUndocked:(BOOL)arg1 ;
@end

