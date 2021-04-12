/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSNumber;

@interface SUScriptDialog : SUScriptObject {

	NSString* _body;
	id _buttons;
	NSNumber* _cancelButtonIndex;
	NSNumber* _destructiveButtonIndex;
	id _textFields;
	NSString* _title;

}

@property (retain) NSString * body; 
@property (retain) id buttons; 
@property (retain) NSNumber * cancelButtonIndex; 
@property (retain) NSNumber * destructiveButtonIndex; 
@property (retain) id textFields; 
@property (retain) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(id)buttons;
-(void)setTitle:(NSString *)arg1 ;
-(void)show;
-(id)attributeKeys;
-(void)setCancelButtonIndex:(NSNumber *)arg1 ;
-(void)setDestructiveButtonIndex:(NSNumber *)arg1 ;
-(NSNumber *)cancelButtonIndex;
-(NSNumber *)destructiveButtonIndex;
-(id)_className;
-(id)textFields;
-(void)setButtons:(id)arg1 ;
-(NSString *)title;
-(void)dealloc;
-(void)setTextFields:(id)arg1 ;
-(void)dismiss;
-(id)scriptAttributeKeys;
-(id)_nativeDialog;
-(void)_logSheetWarnings;
-(void)showSheet;
-(void)showFromDOMElement:(id)arg1 ;
-(void)showSheetInPopOver:(id)arg1 ;
@end

