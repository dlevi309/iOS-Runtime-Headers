/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class UINavigationItem, NSString;

@interface SUScriptNavigationItem : SUScriptObject

@property (nonatomic,readonly) UINavigationItem * nativeNavigationItem; 
@property (copy) NSString * backButtonTitle; 
@property (retain) NSString * prompt; 
@property (retain) NSString * title; 
@property (retain) id titleView; 
@property (assign) id hidesBackButton; 
@property (assign) id leftItemsSupplementBackButton; 
@property (retain) id<SUScriptNavigationItem> leftItem; 
@property (retain) id<SUScriptNavigationItem> leftMostItem; 
@property (retain) id<SUScriptNavigationItem> rightItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(void)disconnectNavigationItem:(id)arg1 forScriptObject:(id)arg2 ;
+(void)_disconnectNavigationItem:(id)arg1 scriptObject:(id)arg2 ;
+(id)_rootScriptObjectForObject:(id)arg1 ;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(id)titleView;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)attributeKeys;
-(void)setTitleView:(id)arg1 ;
-(void)setLeftItemsSupplementBackButton:(id)arg1 ;
-(id<SUScriptNavigationItem>)leftItem;
-(id)leftItems;
-(void)setTitleView:(id)arg1 animated:(BOOL)arg2 ;
-(id)leftItemsSupplementBackButton;
-(void)setLeftItem:(id<SUScriptNavigationItem>)arg1 ;
-(id)_className;
-(void)setRightItem:(id<SUScriptNavigationItem>)arg1 ;
-(void)setRightItems:(id)arg1 ;
-(void)setLeftItems:(id)arg1 ;
-(id)rightItems;
-(id)hidesBackButton;
-(void)setBackButtonTitle:(NSString *)arg1 ;
-(NSString *)backButtonTitle;
-(void)setHidesBackButton:(id)arg1 ;
-(id<SUScriptNavigationItem>)rightItem;
-(NSString *)title;
-(id)scriptAttributeKeys;
-(void)tearDownUserInterface;
-(id)initWithNativeNavigationItem:(id)arg1 ;
-(void)setLeftItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightItem:(id)arg1 animated:(BOOL)arg2 ;
-(UINavigationItem *)nativeNavigationItem;
-(id)_copyScriptObjectForButtonItem:(id)arg1 ;
-(void)setLeftItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftMostItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightItems:(id)arg1 animated:(BOOL)arg2 ;
-(id)_copyScriptButtonForButtonItem:(id)arg1 ;
-(id<SUScriptNavigationItem>)leftMostItem;
-(void)setLeftMostItem:(id<SUScriptNavigationItem>)arg1 ;
@end

