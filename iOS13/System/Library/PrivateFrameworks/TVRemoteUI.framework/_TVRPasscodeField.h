/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (nonatomic,readonly) BOOL hasText; 
-(void)clear;
-(long long)keyboardType;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)_contentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)drawRect:(CGRect)arg1 ;
-(long long)spellCheckingType;
-(long long)autocorrectionType;
-(long long)autocapitalizationType;
-(long long)keyboardAppearance;
-(long long)returnKeyType;
-(BOOL)enablesReturnKeyAutomatically;
-(BOOL)isSecureTextEntry;
-(BOOL)acceptsFloatingKeyboard;
-(BOOL)acceptsSplitKeyboard;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(BOOL)hasText;
-(double)_contentWidthWithDotSize:(double)arg1 entrySpacing:(double)arg2 groupSpacing:(double)arg3 ;
-(BOOL)useSystemColors;
-(void)setPINEntryattributes:(TVRCPINEntryAttributes *)arg1 ;
-(TVRCPINEntryAttributes *)PINEntryattributes;
-(void)setUseSystemColors:(BOOL)arg1 ;
-(NSMutableString *)mutablePasscode;
-(void)setMutablePasscode:(NSMutableString *)arg1 ;
@end

