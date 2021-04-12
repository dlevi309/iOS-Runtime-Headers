/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UITextInteractionAssistant, RTIInputSystemSourceSession;


@protocol UITextInputPrivate <UITextInput,UITextInputTokenizer,UITextInputTraits_Private>
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) long long selectionGranularity; 
@property (nonatomic,readonly) long long cursorBehavior; 
@property (nonatomic,readonly) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate; 
@property (assign,nonatomic) long long _textInputSource; 
@property (nonatomic,readonly) RTIInputSystemSourceSession * _rtiSourceSession; 
@property (nonatomic,readonly) BOOL supportsImagePaste; 
@optional
-(CGRect*)visibleRect;
-(long long)_textInputSource;
-(void)insertTextSuggestion:(id)arg1;
-(id)attributedTextInRange:(id)arg1;
-(void)replaceRange:(id)arg1 withAttributedText:(id)arg2;
-(void)insertAttributedText:(id)arg1;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
-(void)set_textInputSource:(long long)arg1;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2;
-(void)acceptedAutoFillWord:(id)arg1;
-(BOOL)isAutoFillMode;
-(id)_autofillContext;
-(id)metadataDictionariesForDictationResults;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
-(void)insertText:(id)arg1 style:(long long)arg2 alternatives:(id)arg3;
-(BOOL)requiresKeyEvents;
-(void)handleKeyWebEvent:(id)arg1;
-(void)handleKeyWebEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(id)selectionInteractionAssistant;
-(void)modifierFlagsDidChangeFrom:(long long)arg1 to:(long long)arg2;
-(void)setBottomBufferHeight:(double)arg1;
-(id)automaticallySelectedOverlay;
-(id)selectionContainerView;
-(void)streamingDictationDidBegin;
-(void)streamingDictationDidEnd;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
-(double)_delayUntilRepeatInsertText:(id)arg1;
-(BOOL)_shouldRepeatInsertText:(id)arg1;
-(id)textColorForCaretSelection;
-(id)fontForCaretSelection;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
-(void)_willShowCorrections;
-(void)_didHideCorrections;
-(BOOL)_shouldSuppressSelectionCommands;
-(SEL)_sendCurrentLocationAction;
-(id)annotatedSubstringForRange:(id)arg1;
-(void)replaceRange:(id)arg1 withAnnotatedString:(id)arg2 relativeReplacementRange:(NSRange)arg3;
-(void)removeAnnotation:(id)arg1 forRange:(id)arg2;
-(long long)selectionGranularity;
-(void)setSelectionGranularity:(long long)arg1;
-(long long)cursorBehavior;
-(id<UITextInputSuggestionDelegate>)textInputSuggestionDelegate;
-(RTIInputSystemSourceSession *)_rtiSourceSession;
-(BOOL)supportsImagePaste;

@required
-(id)textInputTraits;
-(UITextInteractionAssistant *)interactionAssistant;
-(NSRange*)selectionRange;
-(BOOL)hasContent;
-(void)selectAll;
-(BOOL)hasSelection;

@end

