/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewControllerInterface.h>
#import <UIKit/UITextDocumentProxy.h>
#import <UIKit/UITextDocumentProxy_Private.h>

@protocol _UITextDocumentInterfaceDelegate;
@class NSString, UITextInputMode, NSUUID, _UIInputViewControllerState, _UIInputViewControllerOutput, TIKeyboardOutput, TIDocumentState, TITextInputTraits, UITextInputPasswordRules;

@interface _UITextDocumentInterface : UIInputViewControllerInterface <UITextDocumentProxy, UITextDocumentProxy_Private> {

	id<_UITextDocumentInterfaceDelegate> _delegate;
	_UIInputViewControllerState* _controllerState;
	_UIInputViewControllerOutput* _controllerOutput;
	TIKeyboardOutput* _keyboardOutput;

}

@property (getter=_controllerState,nonatomic,retain) _UIInputViewControllerState * controllerState;                 //@synthesize controllerState=_controllerState - In the implementation block
@property (getter=_controllerOutput,nonatomic,retain) _UIInputViewControllerOutput * controllerOutput;              //@synthesize controllerOutput=_controllerOutput - In the implementation block
@property (getter=_documentState,nonatomic,readonly) TIDocumentState * documentState; 
@property (getter=_textInputTraits,nonatomic,readonly) TITextInputTraits * textInputTraits; 
@property (getter=_keyboardOutput,nonatomic,readonly) TIKeyboardOutput * keyboardOutput;                            //@synthesize keyboardOutput=_keyboardOutput - In the implementation block
@property (assign,getter=_delegate,nonatomic) id<_UITextDocumentInterfaceDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * documentContextBeforeInput; 
@property (nonatomic,readonly) NSString * documentContextAfterInput; 
@property (nonatomic,readonly) NSString * selectedText; 
@property (nonatomic,readonly) UITextInputMode * documentInputMode; 
@property (nonatomic,copy,readonly) NSUUID * documentIdentifier; 
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
@property (nonatomic,readonly) NSString * markedText; 
@property (nonatomic,readonly) BOOL needsInputModeSwitchKey; 
-(BOOL)hasText;
-(void)unmarkText;
-(long long)autocapitalizationType;
-(NSString *)selectedText;
-(long long)smartInsertDeleteType;
-(id)_delegate;
-(UITextInputMode *)documentInputMode;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(long long)keyboardType;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(BOOL)enablesReturnKeyAutomatically;
-(long long)spellCheckingType;
-(long long)returnKeyType;
-(long long)smartDashesType;
-(long long)autocorrectionType;
-(long long)keyboardAppearance;
-(long long)smartQuotesType;
-(NSString *)textContentType;
-(BOOL)needsInputModeSwitchKey;
-(BOOL)isSecureTextEntry;
-(void)setDelegate:(id<_UITextDocumentInterfaceDelegate>)arg1 ;
-(NSUUID *)documentIdentifier;
-(NSString *)markedText;
-(void)setForwardingInterface:(id)arg1 ;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(void)_setPrimaryLanguage:(id)arg1 ;
-(void)_setShouldDismiss;
-(void)_setProceedShouldReturnIfPossibleForASP;
-(void)_setHasDictation:(BOOL)arg1 ;
-(void)_setShouldAdvanceInputMode;
-(void)_setInputModeList:(long long)arg1 touchBegan:(double)arg2 fromLocation:(CGPoint)arg3 updatePoint:(CGPoint)arg4 ;
-(id)_controllerState;
-(void)_createControllerOutputIfNecessary;
-(id)_documentState;
-(void)_willPerformOutputOperation;
-(id)_controllerOutput;
-(void)_didPerformOutputOperation;
-(void)setControllerOutput:(_UIInputViewControllerOutput *)arg1 ;
-(void)adjustTextPositionByCharacterOffset:(long long)arg1 ;
-(void)setControllerState:(_UIInputViewControllerState *)arg1 ;
-(NSString *)documentContextBeforeInput;
-(NSString *)documentContextAfterInput;
-(id)_keyboardOutput;
-(id)_textInputTraits;
-(void)dealloc;
@end

