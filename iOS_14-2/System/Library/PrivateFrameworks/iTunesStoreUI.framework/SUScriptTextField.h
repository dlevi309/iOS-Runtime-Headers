/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)autocapitalizationType;
-(BOOL)blur;
-(BOOL)focus;
-(NSString *)keyboardType;
-(void)setAutocorrectionType:(NSString *)arg1 ;
-(NSNumber *)width;
-(NSString *)autocorrectionType;
-(void)setKeyboardType:(NSString *)arg1 ;
-(id)init;
-(void)setAutocapitalizationType:(NSString *)arg1 ;
-(void)setWidth:(NSNumber *)arg1 ;
-(id)attributeKeys;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setPlaceholder:(NSString *)arg1 ;
-(id)_keyboardType;
-(id)_autocapitalizationType;
-(id)_autocorrectionType;
-(id)buttonItem;
-(NSString *)placeholder;
-(double)_defaultWidth;
-(id)_className;
-(NSString *)style;
-(NSString *)value;
-(void)dealloc;
-(id)scriptAttributeKeys;
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

