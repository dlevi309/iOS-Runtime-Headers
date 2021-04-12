/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUMenuViewController.h>

@class NSString, NSArray;

@interface SUSimpleMenuViewController : SUMenuViewController {

	NSString* _cancelButtonTitle;
	NSArray* _titles;

}

@property (nonatomic,copy) NSArray * titles;                          //@synthesize titles=_titles - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
-(void)dealloc;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(void)_cancelAction:(id)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(id)initWithTitles:(id)arg1 ;
-(long long)numberOfMenuItems;
-(void)reloadContentSizeForViewInPopover;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(BOOL)isMenuItemEnabledAtIndex:(long long)arg1 ;
@end

