/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class SUScriptFunction, WebScriptObject, NSNumber, NSString;

@interface SUScriptMenuViewController : SUScriptViewController {

	SUScriptFunction* _action;

}

@property (retain) WebScriptObject * action; 
@property (retain) id items; 
@property (retain) NSNumber * selectedIndex; 
@property (retain) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setItems:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(WebScriptObject *)action;
-(id)attributeKeys;
-(void)setAction:(WebScriptObject *)arg1 ;
-(id)items;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(id)_viewController;
-(NSNumber *)selectedIndex;
-(id)_className;
-(NSString *)title;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)newNativeViewController;
-(id)itemWithTitle:(id)arg1 userInfo:(id)arg2 ;
@end

