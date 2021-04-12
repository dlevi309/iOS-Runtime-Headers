/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class SKUIItem;

@interface SUScriptGiftViewController : SUScriptViewController {

	long long _giftCategory;
	SKUIItem* _item;

}

@property (nonatomic,readonly) long long giftCategoryApps; 
@property (nonatomic,readonly) long long giftCategoryBooks; 
@property (nonatomic,readonly) long long giftCategoryMedia; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)_className;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)newNativeViewController;
-(void)setCreditGiftStyle:(long long)arg1 ;
-(void)setProductGiftItem:(id)arg1 ;
-(long long)giftCategoryApps;
-(long long)giftCategoryBooks;
-(long long)giftCategoryMedia;
@end

