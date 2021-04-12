/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_className;
-(id)titleView;
-(void)setTitleView:(id)arg1 ;
-(id)leftItemsSupplementBackButton;
-(id)hidesBackButton;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)backButtonTitle;
-(void)setBackButtonTitle:(NSString *)arg1 ;
-(void)setHidesBackButton:(id)arg1 ;
-(void)setLeftItemsSupplementBackButton:(id)arg1 ;
-(id)attributeKeys;
-(id)rightItems;
-(void)setRightItems:(id)arg1 ;
-(id)leftItems;
-(void)setLeftItems:(id)arg1 ;
-(id<SUScriptNavigationItem>)leftItem;
-(void)setLeftItem:(id<SUScriptNavigationItem>)arg1 ;
-(id<SUScriptNavigationItem>)rightItem;
-(void)setRightItem:(id<SUScriptNavigationItem>)arg1 ;
-(id)scriptAttributeKeys;
-(void)setTitleView:(id)arg1 animated:(BOOL)arg2 ;
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

