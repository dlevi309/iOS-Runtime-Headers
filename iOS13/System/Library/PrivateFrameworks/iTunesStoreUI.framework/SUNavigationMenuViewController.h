/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUMenuViewController.h>

@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController {

	SUNavigationMenu* _navigationMenu;

}

@property (nonatomic,readonly) SUNavigationMenu * navigationMenu;              //@synthesize navigationMenu=_navigationMenu - In the implementation block
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_cancelAction:(id)arg1 ;
-(long long)numberOfMenuItems;
-(SUNavigationMenu *)navigationMenu;
-(id)initWithNavigationMenu:(id)arg1 ;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(void)_protocolButtonAction:(id)arg1 ;
@end

