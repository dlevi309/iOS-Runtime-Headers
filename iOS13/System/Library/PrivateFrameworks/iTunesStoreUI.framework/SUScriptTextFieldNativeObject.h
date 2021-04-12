/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <libobjc.A.dylib/SUScriptTextFieldDelegate.h>

@class SUScriptTextFieldDelegate, NSString;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate> {

	SUScriptTextFieldDelegate* _textFieldDelegate;

}

@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long keyboardType; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) double width; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(long long)keyboardType;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)setAutocorrectionType:(long long)arg1 ;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(BOOL)resignFirstResponder;
-(void)setKeyboardType:(long long)arg1 ;
-(NSString *)placeholder;
-(long long)autocorrectionType;
-(long long)autocapitalizationType;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(id)_nativeObjectDelegate;
-(void)_setNativeObjectDelegate:(id)arg1 ;
-(void)_textDidChange:(id)arg1 ;
-(void)_textDidEndEditingOnExit:(id)arg1 ;
-(void)_sendScriptDidChange;
@end

