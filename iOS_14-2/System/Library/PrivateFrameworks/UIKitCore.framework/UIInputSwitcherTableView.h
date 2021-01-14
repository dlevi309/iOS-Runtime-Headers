/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableView.h>

@class UIKeyboardMenuView;

@interface UIInputSwitcherTableView : UITableView {

	UIKeyboardMenuView* _menu;

}

@property (assign,nonatomic) UIKeyboardMenuView * menu;              //@synthesize menu=_menu - In the implementation block
-(UIKeyboardMenuView *)menu;
-(void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(void)setMenu:(UIKeyboardMenuView *)arg1 ;
-(void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
@end

