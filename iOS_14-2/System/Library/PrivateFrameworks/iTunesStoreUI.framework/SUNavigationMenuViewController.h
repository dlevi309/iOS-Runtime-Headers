/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUMenuViewController.h>

@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController {

	SUNavigationMenu* _navigationMenu;

}

@property (nonatomic,readonly) SUNavigationMenu * navigationMenu;              //@synthesize navigationMenu=_navigationMenu - In the implementation block
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)numberOfMenuItems;
-(void)_cancelAction:(id)arg1 ;
-(void)dealloc;
-(SUNavigationMenu *)navigationMenu;
-(id)initWithNavigationMenu:(id)arg1 ;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(void)_protocolButtonAction:(id)arg1 ;
@end

