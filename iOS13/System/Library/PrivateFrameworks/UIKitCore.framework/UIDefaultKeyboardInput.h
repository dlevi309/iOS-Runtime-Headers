/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyboardInput.h>
#import <UIKit/UITextInputPrivate.h>

@class UITextInteractionAssistant, RTIInputSystemSourceSession, UITextInputTraits, NSString, UITextInputPasswordRules, UITextRange, NSDictionary, UITextPosition, UIView, NSIndexSet, UIColor, UIImage, UIInputContextHistory;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput, UITextInputPrivate> {

	UITextInputTraits* m_traits;

}

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
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (nonatomic,retain) UIColor * underlineColorForTextAlternatives; 
@property (nonatomic,retain) UIColor * underlineColorForSpelling; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL hasDefaultContents; 
@property (assign,nonatomic) BOOL acceptsPayloads; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) BOOL acceptsDictationSearchResults; 
@property (assign,nonatomic) BOOL useAutomaticEndpointing; 
@property (assign,nonatomic) BOOL showDictationButton; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL forceDisableDictation; 
@property (assign,nonatomic) BOOL forceDefaultDictationInfo; 
@property (assign,nonatomic) long long forceDictationKeyboardType; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL forceFloatingKeyboard; 
@property (assign,nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory; 
@property (assign,nonatomic) BOOL disableInputBars; 
@property (assign,nonatomic) BOOL isCarPlayIdiom; 
@property (assign,nonatomic) long long textScriptType; 
@property (assign,nonatomic) BOOL loadKeyboardsForSiriLanguage; 
@property (assign,nonatomic) BOOL disablePrediction; 
@property (assign,nonatomic) BOOL hidePrediction; 
@property (assign,getter=isDevicePasscodeEntry,nonatomic) BOOL devicePasscodeEntry; 
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) long long selectionGranularity; 
@property (nonatomic,readonly) long long cursorBehavior; 
@property (nonatomic,readonly) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate; 
@property (assign,nonatomic) long long _textInputSource; 
@property (nonatomic,readonly) RTIInputSystemSourceSession * _rtiSourceSession; 
@property (nonatomic,readonly) BOOL supportsImagePaste; 
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)delegate;
-(id)text;
-(void)setText:(id)arg1 ;
-(BOOL)isSecure;
-(NSDictionary *)markedTextStyle;
-(CGRect)visibleBounds;
-(id)textInputTraits;
-(void)takeTraitsFrom:(id)arg1 ;
-(BOOL)acceptsEmoji;
-(void)setAcceptsEmoji:(BOOL)arg1 ;
-(BOOL)forceEnableDictation;
-(void)setForceEnableDictation:(BOOL)arg1 ;
-(BOOL)forceDisableDictation;
-(void)setForceDisableDictation:(BOOL)arg1 ;
-(void)deleteBackward;
-(BOOL)isEditing;
-(UITextRange *)selectedTextRange;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(UITextPosition *)beginningOfDocument;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(UITextRange *)markedTextRange;
-(void)unmarkText;
-(id)selectionView;
-(id)textInRange:(id)arg1 ;
-(UITextPosition *)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)insertText:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(id<UITextInputDelegate>)inputDelegate;
-(id)selectionRectsForRange:(id)arg1 ;
-(BOOL)isEditable;
-(BOOL)hasText;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(CGRect)caretRect;
-(int)selectionState;
-(id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(UITextInteractionAssistant *)interactionAssistant;
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3 ;
-(NSRange)selectionRange;
-(BOOL)hasContent;
-(void)selectAll;
-(BOOL)hasSelection;
-(id)textColorForCaretSelection;
-(id)fontForCaretSelection;
-(void)replaceCurrentWordWithText:(id)arg1 ;
-(void)confirmMarkedText:(id)arg1 ;
-(unsigned short)characterInRelationToCaretSelection:(int)arg1 ;
-(unsigned short)characterBeforeCaretSelection;
-(unsigned short)characterAfterCaretSelection;
-(id)rectsForNSRange:(NSRange)arg1 ;
-(id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1 ;
-(int)wordOffsetInRange:(id)arg1 ;
-(BOOL)selectionAtDocumentStart;
-(BOOL)selectionAtWordStart;
-(id)rangeByMovingCurrentSelection:(int)arg1 ;
-(id)rangeByExtendingCurrentSelection:(int)arg1 ;
-(void)extendCurrentSelection:(int)arg1 ;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(CGRect)convertCaretRect:(CGRect)arg1 ;
-(BOOL)isShowingPlaceholder;
-(void)setupPlaceholderTextIfNeeded;
-(void)setSecure:(BOOL)arg1 ;
-(void)updateSelection;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)arg1 ;
@end

