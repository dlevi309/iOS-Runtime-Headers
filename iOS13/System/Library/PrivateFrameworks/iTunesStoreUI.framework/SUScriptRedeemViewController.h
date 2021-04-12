/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSString;

@interface SUScriptRedeemViewController : SUScriptViewController {

	long long _category;
	NSString* _initialCode;

}

@property (nonatomic,copy) NSString * initialCode; 
@property (nonatomic,readonly) long long redeemCategoryApps; 
@property (nonatomic,readonly) long long redeemCategoryBooks; 
@property (nonatomic,readonly) long long redeemCategoryMedia; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)_className;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(NSString *)initialCode;
-(void)setInitialCode:(NSString *)arg1 ;
-(id)newNativeViewController;
-(void)setRedeemStyle:(long long)arg1 ;
-(long long)redeemCategoryApps;
-(long long)redeemCategoryBooks;
-(long long)redeemCategoryMedia;
@end

