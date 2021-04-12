/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextField.h>
#import <UIKitCore/_UISearchBarTextFieldOrMailReplacement.h>

@class NSMutableDictionary, NSValue, _UISearchBarSearchFieldBackgroundView, UIImageView, NSHashTable, _UISearchBarTextFieldTokenCounter, UITapGestureRecognizer, UIHoverGestureRecognizer, UIImage, UISearchBar, UIColor, NSArray, UITextRange, NSString;

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
		unsigned alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory : 1;
	}  _searchBarTextFieldFlags;
	NSHashTable* _knownTokenLayoutViews;
	_UISearchBarTextFieldTokenCounter* _tokenCounter;
	UITapGestureRecognizer* _tokenTapGestureRecognizer;
	UIHoverGestureRecognizer* _hoverGestureRecognizer;
	UIImage* _magnifyingGlassImage;
	BOOL __preventSelectionViewActivation;
	BOOL __alwaysShowsClearButtonWhenEmpty;
	UISearchBar* _searchBar;
	UIColor* _tokenBackgroundColor;

}

@property (setter=_setSearchTextOffetValue:,nonatomic,retain) NSValue * _searchTextOffsetValue; 
@property (assign,setter=_setPreventSelectionViewActivation:,nonatomic) BOOL _preventSelectionViewActivation;                                                                            //@synthesize _preventSelectionViewActivation=__preventSelectionViewActivation - In the implementation block
@property (assign,setter=_setIgnoresDynamicType:,nonatomic) BOOL _ignoresDynamicType; 
@property (assign,setter=_setSearchBar:,nonatomic,__weak) UISearchBar * _searchBar;                                                                                                      //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,setter=_setAlwaysShowsClearButtonWhenEmpty:,nonatomic) BOOL _alwaysShowsClearButtonWhenEmpty;                                                                          //@synthesize _alwaysShowsClearButtonWhenEmpty=__alwaysShowsClearButtonWhenEmpty - In the implementation block
@property (assign,setter=_setAlwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:,nonatomic) BOOL _alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory; 
@property (nonatomic,copy) NSArray * tokens; 
@property (nonatomic,readonly) UITextRange * textualRange; 
@property (nonatomic,retain) UIColor * tokenBackgroundColor;                                                                                                                             //@synthesize tokenBackgroundColor=_tokenBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL allowsDeletingTokens; 
@property (assign,nonatomic) BOOL allowsCopyingTokens; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_canvasViewClass;
+(BOOL)_wantsFadedEdges;
+(Class)_fieldEditorClass;
+(Class)_textPasteItemClass;
-(void)_setBottomEffectBackgroundVisible:(BOOL)arg1 ;
-(void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3 ;
-(NSRange)insertFilteredText:(id)arg1 ;
-(CGRect)_suffixFrame;
-(void)setTokenBackgroundColor:(UIColor *)arg1 ;
-(void)_updateDefaultLeftViewForFont:(id)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(BOOL)_shouldResignOnEditingDidEndOnExit;
-(void)setTokens:(NSArray *)arg1 ;
-(void)_updateBackgroundViewsAnimated:(BOOL)arg1 ;
-(BOOL)_shouldCenterPlaceholder;
-(NSRange)_textRangeForTextStorageRange:(NSRange)arg1 ;
-(UITextRange *)textualRange;
-(void)copy:(id)arg1 ;
-(BOOL)_ignoresDynamicType;
-(CGRect)_adjustmentsForSearchIconViewRectForBounds:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(void)_removeEffectsBackgroundViews;
-(double)_maximumAlphaForLeadingView;
-(void)insertTextSuggestion:(id)arg1 ;
-(id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2 ;
-(BOOL)_delegateShouldBeginEditing;
-(BOOL)_shouldDetermineInterfaceStyleTextColor;
-(void)_updateAlphaForMagnifyingGlass;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(void)replaceRange:(id)arg1 withAttributedText:(id)arg2 ;
-(void)_defaultInsertTextSuggestion:(id)arg1 ;
-(void)insertToken:(id)arg1 atIndex:(long long)arg2 ;
-(void)_willAddTokenLayoutView:(id)arg1 ;
-(Class)_placeholderLabelClass;
-(void)_didSetFont:(id)arg1 ;
-(void)_setSearchBar:(id)arg1 ;
-(void)_tokenTapGestureRecognized;
-(void)_animateForFirstResponderChangeWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(Class)_systemBackgroundViewClass;
-(id)textInputTraits;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)_adjustedTextOrEditingRect:(CGRect)arg1 forBounds:(CGRect)arg2 ;
-(BOOL)_scalesMagnifyingGlassForDynamicTypeWithFont:(id)arg1 ;
-(BOOL)_alwaysShowsClearButtonWhenEmpty;
-(void)_updateAtomViewSelection:(BOOL)arg1 ;
-(void)fieldEditorDidChangeSelection:(id)arg1 ;
-(void)_setAnimatesBackgroundCornerRadius:(BOOL)arg1 ;
-(void)insertAttributedText:(id)arg1 ;
-(id)_placeholderColor;
-(void)_activateSelectionView;
-(BOOL)_isEditingOrHasContent;
-(BOOL)resignFirstResponder;
-(BOOL)_shouldHideMagnifyingGlassWhenEditingOrHasContent;
-(void)replaceTextualPortionOfRange:(id)arg1 withToken:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(BOOL)allowsDraggingAttachments;
-(void)_copySelectionPopulatingActuallyCopiedTokenCharacterIndexes:(id)arg1 ;
-(BOOL)allowsCopyingTokens;
-(BOOL)allowsDeletingTokens;
-(BOOL)_displaysHelpMessageLabel;
-(BOOL)_delegateShouldEndEditing;
-(unsigned long long)_characterIndexForTokenTapGestureRecognizer;
-(BOOL)_textShouldFillFieldEditorHeight;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(void)cut:(id)arg1 ;
-(id)_clearButtonImageForState:(unsigned long long)arg1 ;
-(void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)_rangeOfCustomDraggableObjectsInRange:(id)arg1 ;
-(long long)_suffixLabelTextAlignment;
-(BOOL)_delegateShouldClear;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(BOOL)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;
-(void)_setMagnifyingGlassImage:(id)arg1 ;
-(UISearchBar *)_searchBar;
-(void)_setAlwaysShowsClearButtonWhenEmpty:(BOOL)arg1 ;
-(void)_setIgnoresDynamicType:(BOOL)arg1 ;
-(id)_customDraggableObjectsForRange:(id)arg1 ;
-(NSRange)_rangeForClearButton;
-(void)_animateForFirstResponderChangeWithAnimations:(/*^block*/id)arg1 ;
-(void)updateForBackdropStyle:(unsigned long long)arg1 ;
-(NSRange)_rangeForSetText;
-(id)textInRange:(id)arg1 ;
-(BOOL)_preventSelectionViewActivation;
-(void)_updateHelpMessageOverrideWithMessage:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(BOOL)_hasCustomClearButtonImage;
-(void)_didRemoveTokenLayoutView:(id)arg1 ;
-(void)_updateLeftViewForMagnifyingGlassImage;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(UIColor *)tokenBackgroundColor;
-(NSValue *)_searchTextOffsetValue;
-(BOOL)_supportsDynamicType;
-(void)_setSearchTextOffetValue:(id)arg1 ;
-(id)_newAttributedStringWithToken:(id)arg1 ;
-(BOOL)_shouldSuppressSelectionHandles;
-(void)_clearBackgroundViews;
-(void)setAllowsCopyingTokens:(BOOL)arg1 ;
-(void)setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(double)_clearButtonMarginX;
-(id)positionOfTokenAtIndex:(long long)arg1 ;
-(BOOL)_shouldOverrideEditingFont;
-(void)setAllowsDeletingTokens:(BOOL)arg1 ;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)_searchIconViewRectForBounds:(CGRect)arg1 ;
-(void)_setBackgroundViewsAlpha:(double)arg1 ;
-(void)removeTokenAtIndex:(long long)arg1 ;
-(BOOL)_becomeFirstResponderWhenPossible;
-(CGRect)_availableTextRectForBounds:(CGRect)arg1 forEditing:(BOOL)arg2 ;
-(id)_offsetValueForIcon:(long long)arg1 ;
-(long long)_blurEffectStyle;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_hoverGestureChanged:(id)arg1 ;
-(id)tokensInRange:(id)arg1 ;
-(void)_highlightedDidChangeAnimated:(BOOL)arg1 ;
-(BOOL)_hasContent;
-(id)selectedTokens;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(BOOL)_delegateShouldChangeCharactersInTextStorageRange:(NSRange)arg1 replacementString:(id)arg2 delegateCares:(BOOL*)arg3 ;
-(void)__highlightedDidChangeAnimated:(BOOL)arg1 ;
-(CGSize)_clearButtonSize;
-(void)_applyHighlightedAnimated:(BOOL)arg1 ;
-(void)_redirectSelectionToAvoidClobberingTokens;
-(void)_becomeFirstResponder;
-(void)_pasteSessionDidFinish:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_setPreventSelectionViewActivation:(BOOL)arg1 ;
-(id)attributedTextInRange:(id)arg1 ;
-(void)_setAlwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:(BOOL)arg1 ;
-(NSArray *)tokens;
-(id)attributedText;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(id)text;
-(BOOL)_alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory;
-(CGRect)_bookmarkViewRectForBounds:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
@end

