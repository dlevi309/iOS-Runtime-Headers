/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL hasNonPlaceholderViews; 
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
+(id)inputSetWithOriginalInputSet:(id)arg1 duplicateInputView:(BOOL)arg2 duplicateInputAccessoryView:(BOOL)arg3 duplicateInputAssistantView:(BOOL)arg4 ;
+(id)inputSetWithKeyboardAndAccessoryView:(id)arg1 ;
+(id)inputSetWithPlaceholderAndAccessoryView:(id)arg1 ;
+(id)inputSetWithKeyboardAndAccessoryView:(id)arg1 assistantView:(id)arg2 ;
+(id)emptyInputSet;
+(id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 ;
+(id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 ;
-(void)_setRenderConfig:(id)arg1 ;
-(UIView *)inputAccessoryView;
-(CGRect)inputAccessoryViewBounds;
-(BOOL)_isFullscreen;
-(UIResponder *)restorableResponder;
-(void)setInputAssistantView:(UIView *)arg1 ;
-(void)_setSplitProgress:(double)arg1 ;
-(void)setInputViewController:(UIInputViewController *)arg1 ;
-(void)setRestorableRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)setInputView:(UIView *)arg1 ;
-(BOOL)_inputAccessoryViewSupportsSplit;
-(BOOL)_inputViewIsSplit;
-(id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(BOOL)arg4 ;
-(void)setAssistantViewController:(UIInputViewController *)arg1 ;
-(BOOL)_inputViewSupportsSplit;
-(void)_forceRestoreUsingBecomeFirstResponder:(BOOL)arg1 ;
-(UIView *)inputAssistantView;
-(BOOL)visible;
-(BOOL)isCustomInputView;
-(CGRect)inputViewBounds;
-(UIView *)inputView;
-(id)inputSetWithInputAccessoryViewOnly;
-(void)_endSplitTransitionIfNeeded;
-(BOOL)isRemoteKeyboard;
-(BOOL)__isCKAccessoryView;
-(UIResponder *)accessoryViewNextResponder;
-(BOOL)canAnimateToInputViewSet:(id)arg1 ;
-(UIKeyboard *)keyboard;
-(BOOL)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2 ;
-(UIView *)splitExemptSubview;
-(CGRect)inputAssistantViewBounds;
-(void)setRestorableResponder:(UIResponder *)arg1 ;
-(BOOL)hasNonPlaceholderViews;
-(void)setKeyboardAssistantBar:(id)arg1 ;
-(UIView *)layeringView;
-(BOOL)isInputAssistantViewPlaceholder;
-(void)_beginSplitTransitionIfNeeded;
-(id)description;
-(void)refreshPresentation;
-(BOOL)containsResponder:(id)arg1 ;
-(BOOL)_isKeyboard;
-(CGRect)_leftInputViewSetFrame;
-(BOOL)restoreUsingBecomeFirstResponder;
-(UIInputViewController *)assistantViewController;
-(id)_themableInputAccessoryView;
-(BOOL)_accessorySuppressesShadow;
-(void)inheritNullState:(id)arg1 ;
-(BOOL)isInputViewPlaceholder;
-(BOOL)isNullInputView;
-(BOOL)supportsSplit;
-(id)normalizePlaceholders;
-(BOOL)isStrictSupersetOfViewSet:(id)arg1 ;
-(BOOL)inputViewKeyboardCanSplit;
-(long long)keyboardOrientation:(id)arg1 ;
-(id)_splittableInputAccessoryView;
-(BOOL)_inputViewIsVisible;
-(BOOL)containsView:(id)arg1 ;
-(BOOL)_inputViewSetSupportsSplit;
-(void)setSplitHeightDelta:(double)arg1 ;
-(void)setIsRemoteKeyboard:(BOOL)arg1 ;
-(BOOL)_actLikeInputAccessoryViewSupportsSplit;
-(BOOL)isEmpty;
-(id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1 ;
-(BOOL)isInputAccessoryViewPlaceholder;
-(BOOL)hierarchyContainsView:(id)arg1 ;
-(BOOL)usesKeyClicks;
-(UIInputViewController *)accessoryViewController;
-(BOOL)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2 ;
-(UIKBRenderConfig *)restorableRenderConfig;
-(void)setAccessoryViewController:(UIInputViewController *)arg1 ;
-(UIInputViewController *)inputViewController;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(BOOL)isSplit;
-(void)setRestoreUsingBecomeFirstResponder:(BOOL)arg1 ;
-(double)splitHeightDelta;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(CGRect)_rightInputViewSetFrame;
-(void)setAccessoryViewNextResponder:(UIResponder *)arg1 ;
-(void)setIsCustomInputView:(BOOL)arg1 ;
@end

