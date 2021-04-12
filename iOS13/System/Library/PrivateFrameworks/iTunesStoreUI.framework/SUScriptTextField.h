/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SUScriptNavigationItem.h>

@class SUScriptFunction, NSString, WebScriptObject, NSNumber;

@interface SUScriptTextField : SUScriptObject <SUScriptNavigationItem> {

	SUScriptFunction* _shouldFocusFunction;
	NSString* _style;

}

@property (nonatomic,readonly) BOOL canBecomeFirstResponder; 
@property (retain) NSString * autocapitalizationType; 
@property (retain) NSString * autocorrectionType; 
@property (retain) NSString * keyboardType; 
@property (retain) NSString * placeholder; 
@property (retain) WebScriptObject * shouldFocusFunction; 
@property (readonly) NSString * style; 
@property (retain) NSString * value; 
@property (retain) NSNumber * width; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)keyboardType;
-(id)_keyboardType;
-(NSString *)style;
-(id)_className;
-(NSNumber *)width;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setAutocorrectionType:(NSString *)arg1 ;
-(void)setAutocapitalizationType:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setKeyboardType:(NSString *)arg1 ;
-(NSString *)placeholder;
-(NSString *)autocorrectionType;
-(NSString *)autocapitalizationType;
-(double)_defaultWidth;
-(BOOL)blur;
-(BOOL)focus;
-(id)attributeKeys;
-(id)_autocorrectionType;
-(id)_autocapitalizationType;
-(id)scriptAttributeKeys;
-(id)buttonItem;
-(id)initWithTextFieldStyle:(id)arg1 ;
-(BOOL)_styleIsValid:(id)arg1 ;
-(id)_boxedNativeTextField;
-(id)_copyPlaceholder;
-(id)_copyValue;
-(id)_newTextField;
-(void)setNativeObjectWithBarButtonItem:(id)arg1 ;
-(void)setNativeObjectWithSearchBar:(id)arg1 ;
-(void)setNativeObjectWithTextField:(id)arg1 ;
-(void)setShouldFocusFunction:(WebScriptObject *)arg1 ;
-(WebScriptObject *)shouldFocusFunction;
@end

