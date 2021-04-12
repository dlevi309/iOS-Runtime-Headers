/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextField.h>
#import <UIKitCore/_UISearchBarTextFieldOrMailReplacement.h>

@class NSMutableDictionary, NSValue, _UISearchBarSearchFieldBackgroundView, UIImageView, NSHashTable, _UISearchBarTextFieldTokenCounter, UITapGestureRecognizer, UIHoverGestureRecognizer, UISearchBar, UIColor, NSArray, UITextRange, NSString;

@interface UISearchTextField : UITextField <_UISearchBarTextFieldOrMailReplacement> {

	NSMutableDictionary* _customClearButtons;
	NSMutableDictionary* _iconOffsets;
	NSValue* _searchTextOffsetValue;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundTop;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundBottom;
	UIImageView* _defaultLeftView;
	BOOL _deferringFirstResponder;
	BOOL _animatePlaceholderOnResignFirstResponder;
	struct {
		unsigned searchBarWantsShouldSendContentChangedNotificationsIfOnlyMarkedTextChanged : 1;
		unsigned delegateImplementsItemProviderForCopyingTokens;
		unsigned delegateImplementsUnderscoredItemProviderForCopyingTokens;
		unsigned allowsCopyingTokens : 1;
		unsigned allowsDeletingTokens : 1;
	}  _searchBarTextFieldFlags;
	NSHashTable* _knownTokenLayoutViews;
	_UISearchBarTextFieldTokenCounter* _tokenCounter;
	UITapGestureRecognizer* _tokenTapGestureRecognizer;
	UIHoverGestureRecognizer* _hoverGestureRecognizer;
	BOOL __preventSelectionViewActivation;
	UISearchBar* _searchBar;
	UIColor* _tokenBackgroundColor;
	long long __textInputSource;

}

@property (setter=_setSearchTextOffetValue:,nonatomic,retain) NSValue * _searchTextOffsetValue; 
@property (assign,setter=_setPreventSelectionViewActivation:,nonatomic) BOOL _preventSelectionViewActivation;              //@synthesize _preventSelectionViewActivation=__preventSelectionViewActivation - In the implementation block
@property (assign,nonatomic) long long _textInputSource;                                                                   //@synthesize _textInputSource=__textInputSource - In the implementation block
@property (assign,setter=_setIgnoresDynamicType:,nonatomic) BOOL _ignoresDynamicType; 
@property (assign,setter=_setSearchBar:,nonatomic,__weak) UISearchBar * _searchBar;                                        //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,copy) NSArray * tokens; 
@property (nonatomic,readonly) UITextRange * textualRange; 
@property (nonatomic,retain) UIColor * tokenBackgroundColor;                                                               //@synthesize tokenBackgroundColor=_tokenBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL allowsDeletingTokens; 
@property (assign,nonatomic) BOOL allowsCopyingTokens; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_fieldEditorClass;
+(BOOL)_wantsFadedEdges;
+(Class)_textPasteItemClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)text;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)tintColorDidChange;
-(BOOL)resignFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(id)attributedText;
-(UISearchBar *)_searchBar;
-(id)textInputTraits;
-(void)_setAnimatesBackgroundCornerRadius:(BOOL)arg1 ;
-(void)_setSearchTextOffetValue:(id)arg1 ;
-(NSValue *)_searchTextOffsetValue;
-(void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2 ;
-(id)_offsetValueForIcon:(long long)arg1 ;
-(void)deleteBackward;
-(void)_defaultInsertTextSuggestion:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(long long)_textInputSource;
-(void)insertTextSuggestion:(id)arg1 ;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)tokens;
-(void)insertToken:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeTokenAtIndex:(long long)arg1 ;
-(UITextRange *)textualRange;
-(void)replaceTextualPortionOfRange:(id)arg1 withToken:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setTokenBackgroundColor:(UIColor *)arg1 ;
-(id)tokensInRange:(id)arg1 ;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(void)_setMagnifyingGlassImage:(id)arg1 ;
-(id)_clearButtonImageForState:(unsigned long long)arg1 ;
-(BOOL)_hasContent;
-(CGRect)_searchIconViewRectForBounds:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)_adjustedTextOrEditingRect:(CGRect)arg1 forBounds:(CGRect)arg2 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(CGRect)_bookmarkViewRectForBounds:(CGRect)arg1 ;
-(CGRect)_adjustmentsForSearchIconViewRectForBounds:(CGRect)arg1 ;
-(BOOL)_shouldCenterPlaceholder;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(CGSize)_clearButtonSize;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(BOOL)_becomeFirstResponderWhenPossible;
-(CGRect)_availableTextRectForBounds:(CGRect)arg1 forEditing:(BOOL)arg2 ;
-(CGRect)_suffixFrame;
-(id)_placeholderColor;
-(void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3 ;
-(void)_applyHighlightedAnimated:(BOOL)arg1 ;
-(id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2 ;
-(void)_updateBackgroundViewsAnimated:(BOOL)arg1 ;
-(void)_clearBackgroundViews;
-(void)_removeEffectsBackgroundViews;
-(BOOL)_preventSelectionViewActivation;
-(void)_activateSelectionView;
-(void)_becomeFirstResponder;
-(void)_setPreventSelectionViewActivation:(BOOL)arg1 ;
-(BOOL)_delegateShouldBeginEditing;
-(BOOL)_delegateShouldEndEditing;
-(BOOL)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;
-(BOOL)_delegateShouldClear;
-(BOOL)_delegateShouldChangeCharactersInTextStorageRange:(NSRange)arg1 replacementString:(id)arg2 delegateCares:(BOOL*)arg3 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(id)_newAttributedStringWithToken:(id)arg1 ;
-(unsigned long long)_characterIndexForTokenTapGestureRecognizer;
-(void)_didSetFont:(id)arg1 ;
-(BOOL)_ignoresDynamicType;
-(id)textInRange:(id)arg1 ;
-(id)attributedTextInRange:(id)arg1 ;
-(void)replaceRange:(id)arg1 withAttributedText:(id)arg2 ;
-(void)_redirectSelectionToAvoidClobberingTokens;
-(void)insertText:(id)arg1 ;
-(NSRange)insertFilteredText:(id)arg1 ;
-(void)insertAttributedText:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)_copySelectionPopulatingActuallyCopiedTokenCharacterIndexes:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_pasteSessionDidFinish:(id)arg1 ;
-(void)_updateAtomViewSelection:(BOOL)arg1 ;
-(void)fieldEditorDidChangeSelection:(id)arg1 ;
-(void)_setBackgroundViewsAlpha:(double)arg1 ;
-(void)_setSearchBar:(id)arg1 ;
-(void)_setIgnoresDynamicType:(BOOL)arg1 ;
-(void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)_hasCustomClearButtonImage;
-(BOOL)_shouldResignOnEditingDidEndOnExit;
-(long long)_suffixLabelTextAlignment;
-(Class)_placeholderLabelClass;
-(Class)_systemBackgroundViewClass;
-(void)_hoverGestureChanged:(id)arg1 ;
-(void)updateForBackdropStyle:(unsigned long long)arg1 ;
-(void)_setBottomEffectBackgroundVisible:(BOOL)arg1 ;
-(BOOL)_shouldDetermineInterfaceStyleTextColor;
-(long long)_blurEffectStyle;
-(BOOL)_textShouldFillFieldEditorHeight;
-(void)setTokens:(NSArray *)arg1 ;
-(id)positionOfTokenAtIndex:(long long)arg1 ;
-(UIColor *)tokenBackgroundColor;
-(id)selectedTokens;
-(BOOL)allowsCopyingTokens;
-(void)setAllowsCopyingTokens:(BOOL)arg1 ;
-(BOOL)allowsDeletingTokens;
-(void)setAllowsDeletingTokens:(BOOL)arg1 ;
-(void)_willAddTokenLayoutView:(id)arg1 ;
-(void)_didRemoveTokenLayoutView:(id)arg1 ;
-(void)_tokenTapGestureRecognized;
-(NSRange)_rangeForSetText;
-(NSRange)_textRangeForTextStorageRange:(NSRange)arg1 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(BOOL)_shouldSuppressSelectionHandles;
-(BOOL)allowsDraggingAttachments;
-(id)_rangeOfCustomDraggableObjectsInRange:(id)arg1 ;
-(id)_customDraggableObjectsForRange:(id)arg1 ;
-(void)set_textInputSource:(long long)arg1 ;
@end

