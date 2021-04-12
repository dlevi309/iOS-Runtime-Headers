/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIResponder, UIKBRenderConfig, UIView, UIInputViewController, UIKeyboard;

@interface UIInputViewSet : NSObject {

	BOOL _isSplit;
	double _splitHeightDelta;
	UIResponder* _restorableResponder;
	UIKBRenderConfig* _restorableRenderConfig;
	UIResponder* _accessoryViewNextResponder;
	BOOL _restoreUsingBecomeFirstResponder;
	UIView* _inputView;
	UIView* _inputAccessoryView;
	UIView* _inputAssistantView;
	UIInputViewController* _inputViewController;
	UIInputViewController* _accessoryViewController;
	UIInputViewController* _assistantViewController;
	BOOL _isNullInputView;
	BOOL _isCustomInputView;
	BOOL _isRemoteKeyboard;
	CGRect _inputAssistantViewBounds;

}

@property (nonatomic,retain) UIView * inputView;                                           //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIView * inputAssistantView;                                  //@synthesize inputAssistantView=_inputAssistantView - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                  //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,retain) UIInputViewController * inputViewController;                  //@synthesize inputViewController=_inputViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * assistantViewController;              //@synthesize assistantViewController=_assistantViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * accessoryViewController;              //@synthesize accessoryViewController=_accessoryViewController - In the implementation block
@property (nonatomic,readonly) UIView * layeringView; 
@property (nonatomic,readonly) BOOL visible; 
@property (nonatomic,readonly) BOOL usesKeyClicks; 
@property (nonatomic,readonly) UIKeyboard * keyboard; 
@property (nonatomic,readonly) CGRect inputAccessoryViewBounds; 
@property (nonatomic,readonly) CGRect inputAssistantViewBounds;                            //@synthesize inputAssistantViewBounds=_inputAssistantViewBounds - In the implementation block
@property (nonatomic,readonly) CGRect inputViewBounds; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) BOOL supportsSplit; 
@property (nonatomic,readonly) BOOL isSplit;                                               //@synthesize isSplit=_isSplit - In the implementation block
@property (nonatomic,readonly) BOOL inputViewKeyboardCanSplit; 
@property (assign,nonatomic,__weak) UIResponder * restorableResponder;                     //@synthesize restorableResponder=_restorableResponder - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * restorableRenderConfig;                    //@synthesize restorableRenderConfig=_restorableRenderConfig - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * accessoryViewNextResponder;              //@synthesize accessoryViewNextResponder=_accessoryViewNextResponder - In the implementation block
@property (nonatomic,readonly) BOOL isInputViewPlaceholder; 
@property (nonatomic,readonly) BOOL isInputAssistantViewPlaceholder; 
@property (nonatomic,readonly) BOOL isInputAccessoryViewPlaceholder; 
@property (nonatomic,readonly) BOOL _inputViewIsSplit; 
@property (assign,nonatomic) double splitHeightDelta;                                      //@synthesize splitHeightDelta=_splitHeightDelta - In the implementation block
@property (nonatomic,readonly) UIView * splitExemptSubview; 
@property (assign,nonatomic) BOOL restoreUsingBecomeFirstResponder; 
@property (assign,nonatomic) BOOL isCustomInputView;                                       //@synthesize isCustomInputView=_isCustomInputView - In the implementation block
@property (assign,nonatomic) BOOL isRemoteKeyboard;                                        //@synthesize isRemoteKeyboard=_isRemoteKeyboard - In the implementation block
@property (nonatomic,readonly) BOOL isNullInputView;                                       //@synthesize isNullInputView=_isNullInputView - In the implementation block
+(id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 ;
+(id)inputSetWithKeyboardAndAccessoryView:(id)arg1 assistantView:(id)arg2 ;
+(id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 ;
+(id)inputSetWithKeyboardAndAccessoryView:(id)arg1 ;
+(id)inputSetWithPlaceholderAndAccessoryView:(id)arg1 ;
+(id)inputSetWithOriginalInputSet:(id)arg1 duplicateInputView:(BOOL)arg2 duplicateInputAccessoryView:(BOOL)arg3 duplicateInputAssistantView:(BOOL)arg4 ;
+(id)emptyInputSet;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isEmpty;
-(BOOL)visible;
-(UIKeyboard *)keyboard;
-(UIView *)inputAccessoryView;
-(UIView *)inputView;
-(UIInputViewController *)inputViewController;
-(BOOL)_inputViewSetSupportsSplit;
-(void)refreshPresentation;
-(BOOL)isNullInputView;
-(id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(BOOL)arg4 ;
-(void)setInputViewController:(UIInputViewController *)arg1 ;
-(BOOL)isCustomInputView;
-(UIInputViewController *)accessoryViewController;
-(UIView *)inputAssistantView;
-(UIInputViewController *)assistantViewController;
-(void)setInputView:(UIView *)arg1 ;
-(void)setInputAssistantView:(UIView *)arg1 ;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(BOOL)isInputViewPlaceholder;
-(void)_setRenderConfig:(id)arg1 ;
-(id)_themableInputAccessoryView;
-(BOOL)isRemoteKeyboard;
-(BOOL)_inputViewIsVisible;
-(BOOL)usesKeyClicks;
-(BOOL)_isKeyboard;
-(long long)keyboardOrientation:(id)arg1 ;
-(BOOL)_inputAccessoryViewSupportsSplit;
-(BOOL)_isFullscreen;
-(BOOL)_inputViewSupportsSplit;
-(BOOL)_actLikeInputAccessoryViewSupportsSplit;
-(BOOL)supportsSplit;
-(BOOL)isSplit;
-(BOOL)inputViewKeyboardCanSplit;
-(CGRect)inputViewBounds;
-(CGRect)_leftInputViewSetFrame;
-(CGRect)_rightInputViewSetFrame;
-(id)_splittableInputAccessoryView;
-(BOOL)isInputAccessoryViewPlaceholder;
-(BOOL)isInputAssistantViewPlaceholder;
-(BOOL)__isCKAccessoryView;
-(BOOL)canAnimateToInputViewSet:(id)arg1 ;
-(void)inheritNullState:(id)arg1 ;
-(void)setKeyboardAssistantBar:(id)arg1 ;
-(id)inputSetWithInputAccessoryViewOnly;
-(id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1 ;
-(id)normalizePlaceholders;
-(UIView *)layeringView;
-(UIView *)splitExemptSubview;
-(void)_forceRestoreUsingBecomeFirstResponder:(BOOL)arg1 ;
-(void)setRestoreUsingBecomeFirstResponder:(BOOL)arg1 ;
-(BOOL)restoreUsingBecomeFirstResponder;
-(BOOL)containsView:(id)arg1 ;
-(BOOL)containsResponder:(id)arg1 ;
-(BOOL)isStrictSupersetOfViewSet:(id)arg1 ;
-(BOOL)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2 ;
-(BOOL)_inputViewIsSplit;
-(CGRect)inputAccessoryViewBounds;
-(BOOL)hierarchyContainsView:(id)arg1 ;
-(BOOL)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2 ;
-(BOOL)_accessorySuppressesShadow;
-(void)_beginSplitTransitionIfNeeded;
-(void)_endSplitTransitionIfNeeded;
-(void)_setSplitProgress:(double)arg1 ;
-(void)setAssistantViewController:(UIInputViewController *)arg1 ;
-(void)setAccessoryViewController:(UIInputViewController *)arg1 ;
-(double)splitHeightDelta;
-(void)setSplitHeightDelta:(double)arg1 ;
-(UIResponder *)restorableResponder;
-(void)setRestorableResponder:(UIResponder *)arg1 ;
-(UIKBRenderConfig *)restorableRenderConfig;
-(void)setRestorableRenderConfig:(UIKBRenderConfig *)arg1 ;
-(UIResponder *)accessoryViewNextResponder;
-(void)setAccessoryViewNextResponder:(UIResponder *)arg1 ;
-(CGRect)inputAssistantViewBounds;
-(void)setIsCustomInputView:(BOOL)arg1 ;
-(void)setIsRemoteKeyboard:(BOOL)arg1 ;
@end

