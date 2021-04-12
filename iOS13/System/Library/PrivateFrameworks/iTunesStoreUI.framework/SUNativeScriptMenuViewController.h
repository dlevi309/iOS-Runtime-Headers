/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUMenuViewController.h>

@class SUScriptFunction, NSArray;

@interface SUNativeScriptMenuViewController : SUMenuViewController {

	SUScriptFunction* _action;
	NSArray* _menuItems;

}

@property (nonatomic,retain) SUScriptFunction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSArray * menuItems;                    //@synthesize menuItems=_menuItems - In the implementation block
-(void)dealloc;
-(SUScriptFunction *)action;
-(void)setAction:(SUScriptFunction *)arg1 ;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
-(long long)numberOfMenuItems;
-(id)copyScriptViewController;
-(void)performActionForMenuItemAtIndex:(long long)arg1 ;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(BOOL)isMenuItemEnabledAtIndex:(long long)arg1 ;
@end

