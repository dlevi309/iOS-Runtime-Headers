/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIKeyInput.h>

@class TVRCPINEntryAttributes, NSMutableString, NSString, UITextInputPasswordRules;

@interface _TVRPasscodeField : UIControl <UIKeyInput> {

	BOOL _useSystemColors;
	TVRCPINEntryAttributes* _PINEntryattributes;
	NSMutableString* _mutablePasscode;

}

@property (nonatomic,retain) NSMutableString * mutablePasscode;                          //@synthesize mutablePasscode=_mutablePasscode - In the implementation block
@property (nonatomic,retain) TVRCPINEntryAttributes * PINEntryattributes;                //@synthesize PINEntryattributes=_PINEntryattributes - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) BOOL useSystemColors;                                       //@synthesize useSystemColors=_useSystemColors - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasText;
-(long long)autocapitalizationType;
-(void)clear;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(long long)keyboardType;
-(BOOL)enablesReturnKeyAutomatically;
-(long long)spellCheckingType;
-(long long)returnKeyType;
-(long long)autocorrectionType;
-(long long)keyboardAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isSecureTextEntry;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(CGSize)_contentSize;
-(NSString *)text;
-(BOOL)acceptsFloatingKeyboard;
-(BOOL)acceptsSplitKeyboard;
-(double)_contentWidthWithDotSize:(double)arg1 entrySpacing:(double)arg2 groupSpacing:(double)arg3 ;
-(BOOL)useSystemColors;
-(void)setPINEntryattributes:(TVRCPINEntryAttributes *)arg1 ;
-(TVRCPINEntryAttributes *)PINEntryattributes;
-(void)setUseSystemColors:(BOOL)arg1 ;
-(NSMutableString *)mutablePasscode;
-(void)setMutablePasscode:(NSMutableString *)arg1 ;
@end

