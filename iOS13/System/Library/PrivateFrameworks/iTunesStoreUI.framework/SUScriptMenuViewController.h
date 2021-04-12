/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(WebScriptObject *)action;
-(id)_className;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)setAction:(WebScriptObject *)arg1 ;
-(id)_viewController;
-(NSNumber *)selectedIndex;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)newNativeViewController;
-(id)itemWithTitle:(id)arg1 userInfo:(id)arg2 ;
@end

