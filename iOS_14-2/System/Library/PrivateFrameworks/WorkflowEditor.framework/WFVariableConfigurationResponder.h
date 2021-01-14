/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UIResponder.h>
#import <libobjc.A.dylib/WFVariableConfigurationAccessoryViewDelegate.h>
#import <libobjc.A.dylib/WFVariableConfigurationViewControllerDelegate.h>
#import <libobjc.A.dylib/WFVariableDelegate.h>
#import <UIKit/UIKeyInput.h>

@protocol WFVariableConfigurationResponderDelegate;
@class UIView, WFVariableConfigurationAccessoryView, WFVariableConfigurationView, WFVariable, NSString, UITextInputPasswordRules;

@interface WFVariableConfigurationResponder : UIResponder <WFVariableConfigurationAccessoryViewDelegate, WFVariableConfigurationViewControllerDelegate, WFVariableDelegate, UIKeyInput> {

	BOOL _showsAccessoryActions;
	UIView* _nextResponder;
	WFVariableConfigurationAccessoryView* _accessoryView;
	WFVariableConfigurationView* _configurationView;
	id<WFVariableConfigurationResponderDelegate> _delegate;
	unsigned long long _exitAccessory;
	WFVariable* _variable;

}

@property (nonatomic,readonly) WFVariableConfigurationAccessoryView * accessoryView;                    //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,readonly) WFVariableConfigurationView * configurationView;                         //@synthesize configurationView=_configurationView - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableConfigurationResponderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsAccessoryActions;                                                //@synthesize showsAccessoryActions=_showsAccessoryActions - In the implementation block
@property (assign,nonatomic) unsigned long long exitAccessory;                                          //@synthesize exitAccessory=_exitAccessory - In the implementation block
@property (assign,nonatomic) unsigned long long resultType; 
@property (nonatomic,readonly) WFVariable * variable;                                                   //@synthesize variable=_variable - In the implementation block
@property (assign,nonatomic,__weak) UIView * nextResponder;                                             //@synthesize nextResponder=_nextResponder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
+(BOOL)shouldShowConfigurationOnInsertionOfVariable:(id)arg1 ;
-(BOOL)hasText;
-(id)inputAccessoryView;
-(BOOL)resignFirstResponder;
-(void)setResultType:(unsigned long long)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(UIView *)nextResponder;
-(WFVariableConfigurationView *)configurationView;
-(id<WFVariableConfigurationResponderDelegate>)delegate;
-(void)setNextResponder:(UIView *)arg1 ;
-(WFVariableConfigurationAccessoryView *)accessoryView;
-(unsigned long long)resultType;
-(id)inputView;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<WFVariableConfigurationResponderDelegate>)arg1 ;
-(id)initWithVariable:(id)arg1 ;
-(WFVariable *)variable;
-(void)dealloc;
-(void)updateAccessoryView;
-(void)variableDidChange:(id)arg1 ;
-(void)setExitAccessory:(unsigned long long)arg1 ;
-(void)setShowsAccessoryActions:(BOOL)arg1 ;
-(void)configurationViewController:(id)arg1 didUpdateVariable:(id)arg2 ;
-(void)configurationViewController:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(/*^block*/id)arg4 commitHandler:(/*^block*/id)arg5 ;
-(void)accessoryViewDidDismiss:(id)arg1 ;
-(void)accessoryViewDidDelete:(id)arg1 ;
-(void)accessoryViewDidRename:(id)arg1 ;
-(void)accessoryViewDidRevealAction:(id)arg1 ;
-(void)accessoryViewDidReturnToKeyboard:(id)arg1 ;
-(BOOL)showsAccessoryActions;
-(unsigned long long)exitAccessory;
@end

