/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTitles:(NSArray *)arg1 ;
-(long long)numberOfMenuItems;
-(NSArray *)titles;
-(NSString *)cancelButtonTitle;
-(void)_cancelAction:(id)arg1 ;
-(void)dealloc;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(id)initWithTitles:(id)arg1 ;
-(void)reloadContentSizeForViewInPopover;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(BOOL)isMenuItemEnabledAtIndex:(long long)arg1 ;
@end

