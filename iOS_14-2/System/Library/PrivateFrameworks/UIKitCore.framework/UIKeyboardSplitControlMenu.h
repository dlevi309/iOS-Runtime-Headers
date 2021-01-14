/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)activeInstance;
+(id)sharedInstance;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)numberOfItems;
-(CGSize)preferredSize;
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
-(void)dealloc;
@end

