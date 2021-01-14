/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SUScriptFunction *)action;
-(void)setAction:(SUScriptFunction *)arg1 ;
-(NSArray *)menuItems;
-(long long)numberOfMenuItems;
-(void)setMenuItems:(NSArray *)arg1 ;
-(void)dealloc;
-(id)copyScriptViewController;
-(void)performActionForMenuItemAtIndex:(long long)arg1 ;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(BOOL)isMenuItemEnabledAtIndex:(long long)arg1 ;
@end

