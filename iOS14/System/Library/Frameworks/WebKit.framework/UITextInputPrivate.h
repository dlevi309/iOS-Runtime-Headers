/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
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
-(BOOL)requiresKeyEvents;
-(BOOL)supportsImagePaste;
-(void)handleKeyWebEvent:(id)arg1;
-(void)insertTextSuggestion:(id)arg1;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
-(void)replaceRange:(id)arg1 withAttributedText:(id)arg2;
-(long long)selectionGranularity;
-(void)insertAttributedText:(id)arg1;
-(void)setSelectionGranularity:(long long)arg1;
-(id)attributedTextInRange:(id)arg1;
-(id)annotatedSubstringForRange:(id)arg1;
-(CGRect*)visibleRect;
-(void)modifierFlagsDidChangeFrom:(long long)arg1 to:(long long)arg2;
-(void)set_textInputSource:(long long)arg1;
-(long long)_textInputSource;
-(id)_autofillContext;
-(id)fontForCaretSelection;
-(void)setBottomBufferHeight:(double)arg1;
-(id)metadataDictionariesForDictationResults;
-(id)automaticallySelectedOverlay;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
-(void)acceptedAutoFillWord:(id)arg1;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
-(BOOL)isAutoFillMode;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2;
-(void)insertText:(id)arg1 style:(long long)arg2 alternatives:(id)arg3;
-(id)selectionContainerView;
-(void)streamingDictationDidBegin;
-(void)streamingDictationDidEnd;
-(double)_delayUntilRepeatInsertText:(id)arg1;
-(BOOL)_shouldRepeatInsertText:(id)arg1;
-(void)_willShowCorrections;
-(void)_didHideCorrections;
-(long long)cursorBehavior;
-(SEL)_sendCurrentLocationAction;
-(BOOL)_isInteractiveDespiteResponderStatus;
-(RTIInputSystemSourceSession *)_rtiSourceSession;
-(id)selectionInteractionAssistant;
-(void)handleKeyWebEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
-(void)removeAnnotation:(id)arg1 forRange:(id)arg2;
-(id)textColorForCaretSelection;
-(CGRect*)_selectionClipRect;
-(void)replaceRange:(id)arg1 withAnnotatedString:(id)arg2 relativeReplacementRange:(NSRange)arg3;
-(id<UITextInputSuggestionDelegate>)textInputSuggestionDelegate;
-(BOOL)_shouldSuppressSelectionCommands;

@required
-(NSRange*)selectionRange;
-(UITextInteractionAssistant *)interactionAssistant;
-(void)selectAll;
-(id)textInputTraits;
-(BOOL)hasContent;
-(BOOL)hasSelection;

@end

