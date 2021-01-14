/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SpotlightUIInternal/SpotlightUIInternal-Structs.h>
#import <UIKitCore/UISearchTextField.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScribbleInteractionDelegate.h>

@protocol UITextCursorAssertion;
@class UIResponder, SPUICompletionStringModel, NSArray, UIView, SPUIHeaderBlurView, MTMaterialView, SPUICompletionStringView, UIGestureRecognizer, UIScribbleInteraction, NSString, NSTimer, UIImage, SPSearchEntity;

@interface SPUITextField : UISearchTextField <UIGestureRecognizerDelegate, UIScribbleInteractionDelegate> {

	BOOL _useChunkyMetrics;
	BOOL _ignoreTokensUpdate;
	BOOL _lastUpdateWasDeletion;
	UIResponder* _responderForKeyboardInput;
	SPUICompletionStringModel* _searchFieldModel;
	long long _activeInterfaceOrientation;
	NSArray* _suggestions;
	UIView* _tintView;
	SPUIHeaderBlurView* _blurView;
	MTMaterialView* _materialView;
	SPUICompletionStringView* _hintingView;
	UIGestureRecognizer* _completionTapGestureRecognizer;
	id<UITextCursorAssertion> _caretAssertion;
	UIScribbleInteraction* _scribbleInteraction;
	NSString* _restorationStringOnKBMovement;
	NSTimer* _switchBackToSuggestionsTimer;
	UIImage* _microphoneImage;

}

@property (retain) NSArray * suggestions;                                                 //@synthesize suggestions=_suggestions - In the implementation block
@property (retain) UIView * tintView;                                                     //@synthesize tintView=_tintView - In the implementation block
@property (nonatomic,retain) SPUIHeaderBlurView * blurView;                               //@synthesize blurView=_blurView - In the implementation block
@property (retain) MTMaterialView * materialView;                                         //@synthesize materialView=_materialView - In the implementation block
@property (readonly) SPSearchEntity * searchEntity; 
@property (retain) SPUICompletionStringView * hintingView;                                //@synthesize hintingView=_hintingView - In the implementation block
@property (assign) BOOL ignoreTokensUpdate;                                               //@synthesize ignoreTokensUpdate=_ignoreTokensUpdate - In the implementation block
@property (retain) UIGestureRecognizer * completionTapGestureRecognizer;                  //@synthesize completionTapGestureRecognizer=_completionTapGestureRecognizer - In the implementation block
@property (assign) BOOL lastUpdateWasDeletion;                                            //@synthesize lastUpdateWasDeletion=_lastUpdateWasDeletion - In the implementation block
@property (retain) id<UITextCursorAssertion> caretAssertion;                              //@synthesize caretAssertion=_caretAssertion - In the implementation block
@property (retain) UIScribbleInteraction * scribbleInteraction;                           //@synthesize scribbleInteraction=_scribbleInteraction - In the implementation block
@property (retain) NSString * restorationStringOnKBMovement;                              //@synthesize restorationStringOnKBMovement=_restorationStringOnKBMovement - In the implementation block
@property (retain) NSTimer * switchBackToSuggestionsTimer;                                //@synthesize switchBackToSuggestionsTimer=_switchBackToSuggestionsTimer - In the implementation block
@property (retain) UIImage * microphoneImage;                                             //@synthesize microphoneImage=_microphoneImage - In the implementation block
@property (nonatomic,readonly) BOOL needsLandscapeHeight; 
@property (nonatomic,readonly) BOOL optOutOfGoButton; 
@property (nonatomic,readonly) NSString * textIncludingTokens; 
@property (assign,nonatomic,__weak) id<SPUITextFieldDelegate> delegate; 
@property (assign,nonatomic,__weak) UIResponder * responderForKeyboardInput;              //@synthesize responderForKeyboardInput=_responderForKeyboardInput - In the implementation block
@property (assign,nonatomic) BOOL useChunkyMetrics;                                       //@synthesize useChunkyMetrics=_useChunkyMetrics - In the implementation block
@property (nonatomic,retain) SPUICompletionStringModel * searchFieldModel;                //@synthesize searchFieldModel=_searchFieldModel - In the implementation block
@property (assign,nonatomic) long long activeInterfaceOrientation;                        //@synthesize activeInterfaceOrientation=_activeInterfaceOrientation - In the implementation block
@property (readonly) BOOL completionResultIsPotentiallyPunchout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)removeDictationCharacterInString:(id)arg1 ;
+(void)updateBlueButton;
+(Class)_backgroundViewClass;
-(NSRange)insertFilteredText:(id)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(UIScribbleInteraction *)scribbleInteraction;
-(SPUICompletionStringModel *)searchFieldModel;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(BOOL)resignFirstResponder;
-(void)setScribbleInteraction:(UIScribbleInteraction *)arg1 ;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(double)widthOfPlaceholderLabel;
-(BOOL)becomeFirstResponder;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(NSArray *)suggestions;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(void)setSuggestions:(NSArray *)arg1 ;
-(double)textFieldHeight;
-(UIView *)tintView;
-(void)updateRightView;
-(void)insertText:(id)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)updateTextRange:(id)arg1 ;
-(void)setBlurView:(SPUIHeaderBlurView *)arg1 ;
-(BOOL)useChunkyMetrics;
-(SPUIHeaderBlurView *)blurView;
-(void)rightArrowPressed;
-(void)setActiveInterfaceOrientation:(long long)arg1 ;
-(void)tintColorDidChange;
-(BOOL)ignoreTokensUpdate;
-(CGSize)intrinsicContentSize;
-(id)nextResponder;
-(BOOL)hasContent;
-(void)updateFocusResult:(id)arg1 cardSection:(id)arg2 focusIsOnFirstResult:(BOOL)arg3 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)leftArrowPressed;
-(void)_promoteCompletionAndMoveForward:(BOOL)arg1 ;
-(void)setUseChunkyMetrics:(BOOL)arg1 ;
-(id)keyCommands;
-(BOOL)optOutOfGoButton;
-(long long)activeInterfaceOrientation;
-(id)init;
-(SPSearchEntity *)searchEntity;
-(BOOL)completionResultIsPotentiallyPunchout;
-(void)updateWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 isOnDarkBackground:(BOOL)arg3 ;
-(UIResponder *)responderForKeyboardInput;
-(void)setFont:(id)arg1 ;
-(void)setRestorationStringOnKBMovement:(NSString *)arg1 ;
-(void)resetClearButtonWithScale:(long long)arg1 ;
-(void)commandBPressed;
-(UIImage *)microphoneImage;
-(void)commandCPressed;
-(void)setSearchFieldModel:(SPUICompletionStringModel *)arg1 ;
-(void)resetDeletion;
-(void)setMicrophoneImage:(UIImage *)arg1 ;
-(SPUICompletionStringView *)hintingView;
-(void)updateToken:(id)arg1 ;
-(void)toggleBackToCommittedSearch;
-(void)resetMicrophoneButtonWithScale:(long long)arg1 ;
-(void)setLastUpdateWasDeletion:(BOOL)arg1 ;
-(void)commitToCommitedSearch;
-(BOOL)needsLandscapeHeight;
-(void)promoteCompletionIfPossibleAndMoveForward:(BOOL)arg1 ;
-(BOOL)lastUpdateWasDeletion;
-(BOOL)shouldPromoteCompletion;
-(void)setTextColor:(id)arg1 ;
-(void)setTintView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(MTMaterialView *)materialView;
-(void)clearAllTokens;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(void)toggleCommitedSearch;
-(void)setCompletionTapGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)setHintingView:(SPUICompletionStringView *)arg1 ;
-(NSString *)textIncludingTokens;
-(void)escapeKeyCommand;
-(void)updateCaretVisibility:(BOOL)arg1 ;
-(void)scribbleInteractionWillBeginWriting:(id)arg1 ;
-(void)removeCaretAssertion;
-(void)removeCompletionAndHighlight;
-(CGRect)rectForMagnifierForOriginalRect:(CGRect)arg1 bounds:(CGRect)arg2 isLeftSide:(BOOL)arg3 ;
-(void)setSwitchBackToSuggestionsTimer:(NSTimer *)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(NSString *)restorationStringOnKBMovement;
-(void)setMaterialView:(MTMaterialView *)arg1 ;
-(void)enterKeyPressed;
-(UIGestureRecognizer *)completionTapGestureRecognizer;
-(void)setResponderForKeyboardInput:(UIResponder *)arg1 ;
-(id)currentQueryContext;
-(void)updateCaretVisibility;
-(CGRect)_shiftedBoundsForText:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setCaretAssertion:(id<UITextCursorAssertion>)arg1 ;
-(void)applyMetrics;
-(id<UITextCursorAssertion>)caretAssertion;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setIgnoreTokensUpdate:(BOOL)arg1 ;
-(void)resetPhoneClearButton;
-(NSTimer *)switchBackToSuggestionsTimer;
@end

