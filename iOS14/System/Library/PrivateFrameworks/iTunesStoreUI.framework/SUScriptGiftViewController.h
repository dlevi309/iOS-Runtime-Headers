/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)attributeKeys;
-(id)_className;
-(id)scriptAttributeKeys;
-(id)newNativeViewController;
-(void)setCreditGiftStyle:(long long)arg1 ;
-(void)setProductGiftItem:(id)arg1 ;
-(long long)giftCategoryApps;
-(long long)giftCategoryBooks;
-(long long)giftCategoryMedia;
@end

