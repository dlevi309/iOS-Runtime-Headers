/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptCalloutView : SUScriptObject {

	BOOL _isVisible;
	NSString* _subtitle;
	NSString* _title;

}

@property (copy) NSString * subtitle; 
@property (copy) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_className;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)_menuDidHideNotification:(id)arg1 ;
-(void)_reloadUntructedString;
-(void)_setupCalloutBar;
-(void)_resetCalloutBar;
-(void)setTargetX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 ;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 ;
@end

