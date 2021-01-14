/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UITextDocumentInterfaceDelegate.h>
#import <UIKit/UITextInputDelegate.h>

@protocol UITextDocumentProxy;
@class NSString, UIKeyboard, UIInputView;

@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate> {

	BOOL _commitInputModeOnTouchEnd;
	BOOL _inputModeListIsShown;
	BOOL _viewConformsToRemotePlaceholder;
	double _touchBegan;
	BOOL _alignsToContentViewController;
	BOOL _autosizeToCurrentKeyboard;
	BOOL _hasDictationKey;
	id<UITextDocumentProxy> _textDocumentProxy;
	NSString* _primaryLanguage;

}

@property (nonatomic,readonly) UIKeyboard * _keyboard; 
@property (nonatomic,readonly) BOOL _isPlaceholder; 
@property (assign,nonatomic) BOOL _alignsToContentViewController;                                                //@synthesize alignsToContentViewController=_alignsToContentViewController - In the implementation block
@property (assign,setter=_setAutosizeToCurrentKeyboard:,nonatomic) BOOL _autosizeToCurrentKeyboard;              //@synthesize autosizeToCurrentKeyboard=_autosizeToCurrentKeyboard - In the implementation block
@property (nonatomic,retain) UIInputView * inputView; 
@property (nonatomic,readonly) id<UITextDocumentProxy> textDocumentProxy;                                        //@synthesize textDocumentProxy=_textDocumentProxy - In the implementation block
@property (nonatomic,copy) NSString * primaryLanguage;                                                           //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasDictationKey;                                                               //@synthesize hasDictationKey=_hasDictationKey - In the implementation block
@property (nonatomic,readonly) BOOL hasFullAccess; 
@property (nonatomic,readonly) BOOL needsInputModeSwitchKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_requiresProxyInterface;
+(void)presentDialogForAddingKeyboard;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_setTextDocumentProxy:(id)arg1 ;
-(void)_setExtensionContextUUID:(id)arg1 ;
-(BOOL)_canBecomeFirstResponder;
-(BOOL)hasDictationKey;
-(void)dismissKeyboard;
-(void)_setupInputController;
-(void)handleInputModeListFromView:(id)arg1 withEvent:(id)arg2 ;
-(UIKeyboard *)_keyboard;
-(void)_updateConformanceCache;
-(void)_didResetDocumentState;
-(void)set_alignsToContentViewController:(BOOL)arg1 ;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(void)textWillChange:(id)arg1 ;
-(id)_extensionContext;
-(void)setInputView:(UIInputView *)arg1 ;
-(id)_compatibilityController;
-(void)selectionWillChange:(id)arg1 ;
-(void)returnToPreviousInputMode;
-(id)_textDocumentInterface;
-(void)_willResetDocumentState;
-(void)advanceToNextInputMode;
-(BOOL)_alignsToContentViewController;
-(void)setHasDictationKey:(BOOL)arg1 ;
-(BOOL)needsInputModeSwitchKey;
-(void)proceedShouldReturnIfPossibleForASP;
-(UIInputView *)inputView;
-(void)selectionDidChange:(id)arg1 ;
-(BOOL)_autosizeToCurrentKeyboard;
-(id)_proxyInterface;
-(void)setView:(id)arg1 ;
-(void)requestSupplementaryLexiconWithCompletion:(/*^block*/id)arg1 ;
-(void)set_autosizeToCurrentKeyboard:(BOOL)arg1 ;
-(BOOL)_isPlaceholder;
-(NSString *)primaryLanguage;
-(void)textDidChange:(id)arg1 ;
-(id<UITextDocumentProxy>)textDocumentProxy;
-(void)_setAutosizeToCurrentKeyboard:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning;
-(BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
-(BOOL)_canResignIfContainsFirstResponder;
-(BOOL)hasFullAccess;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

