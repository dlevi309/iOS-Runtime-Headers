/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <ContactsAutocompleteUI/CNComposeHeaderView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <libobjc.A.dylib/CNComposeRecipientAtomDelegate.h>
#import <libobjc.A.dylib/CNRecipientDraggingDelegate.h>

@class _CNAtomTextView, UITextView, UIColor, NSMutableArray, NSMutableDictionary, CNComposeDragSource, CNComposeDropTarget, NSTimer, NSArray, NSUndoManager, UIFont, UIButton, _CNAtomTextAttachment, UIView, NSString;

@interface CNComposeRecipientTextView : CNComposeHeaderView <UITextViewDelegate, NSLayoutManagerDelegate, CNComposeRecipientAtomDelegate, CNRecipientDraggingDelegate> {

	_CNAtomTextView* _textView;
	UITextView* _inactiveTextView;
	UIColor* _inactiveTextColor;
	NSMutableArray* _atomViews;
	NSMutableDictionary* _atomPresentationOptionsByRecipient;
	NSMutableDictionary* _atomLayoutOptionsByRecipient;
	CNComposeDragSource* _dragSource;
	CNComposeDropTarget* _dropTarget;
	CGRect _currentTextRect;
	long long _atomViewAnimationDepth;
	BOOL _parentIsClosing;
	BOOL _textViewExclusionPathsAreValid;
	BOOL _isTextFieldCollapsed;
	BOOL _collapsedStateInitialized;
	BOOL _indicatesUnsafeRecipientsWhenCollapsed;
	BOOL _notifyDelegateOfSizeChange;
	NSTimer* _collapsableUpdateTimer;
	NSArray* _properties;
	NSMutableArray* _recipientsBeingRemoved;
	NSUndoManager* _undoManager;
	CGRect _addButtonFrame;
	BOOL _usingActiveAppearance;
	BOOL _separatorHidden;
	BOOL _expanded;
	BOOL _didIgnoreFirstResponderResign;
	BOOL _showsAddButtonWhenExpanded;
	BOOL _expandRecipientsInNamedGroups;
	BOOL _editable;
	BOOL _enabled;
	int _hideLastAtomComma;
	UIFont* _baseFont;
	long long _maxRecipients;
	UIButton* _addButton;
	UIColor* _typingTextColor;
	double _trailingButtonMidlineInsetFromLayoutMargin;
	_CNAtomTextAttachment* _placeholderAttachment;
	UIView* _atomContainerView;

}

@property (nonatomic,retain) _CNAtomTextAttachment * placeholderAttachment;                       //@synthesize placeholderAttachment=_placeholderAttachment - In the implementation block
@property (nonatomic,readonly) UIView * atomContainerView;                                        //@synthesize atomContainerView=_atomContainerView - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<CNComposeRecipientTextViewDelegate> delegate; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * addresses; 
@property (nonatomic,copy,readonly) NSArray * uncommentedAddresses; 
@property (assign,nonatomic) BOOL usingActiveAppearance;                                          //@synthesize usingActiveAppearance=_usingActiveAppearance - In the implementation block
@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden;                       //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                       //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL indicatesUnsafeRecipientsWhenCollapsed;                         //@synthesize indicatesUnsafeRecipientsWhenCollapsed=_indicatesUnsafeRecipientsWhenCollapsed - In the implementation block
@property (nonatomic,readonly) BOOL didIgnoreFirstResponderResign;                                //@synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign - In the implementation block
@property (assign,nonatomic) long long maxRecipients;                                             //@synthesize maxRecipients=_maxRecipients - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) UIButton * addButton;                                              //@synthesize addButton=_addButton - In the implementation block
@property (assign,nonatomic) BOOL showsAddButtonWhenExpanded;                                     //@synthesize showsAddButtonWhenExpanded=_showsAddButtonWhenExpanded - In the implementation block
@property (assign,nonatomic) BOOL expandRecipientsInNamedGroups;                                  //@synthesize expandRecipientsInNamedGroups=_expandRecipientsInNamedGroups - In the implementation block
@property (nonatomic,readonly) double offsetForRowWithTextField; 
@property (nonatomic,readonly) unsigned long long numberOfRowsOfTextInField; 
@property (nonatomic,retain) UIFont * baseFont;                                                   //@synthesize baseFont=_baseFont - In the implementation block
@property (nonatomic,retain) UIColor * inactiveTextColor; 
@property (nonatomic,retain) UIColor * typingTextColor;                                           //@synthesize typingTextColor=_typingTextColor - In the implementation block
@property (assign,nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;                   //@synthesize trailingButtonMidlineInsetFromLayoutMargin=_trailingButtonMidlineInsetFromLayoutMargin - In the implementation block
@property (assign,nonatomic) int hideLastAtomComma;                                               //@synthesize hideLastAtomComma=_hideLastAtomComma - In the implementation block
@property (assign,nonatomic) BOOL editable;                                                       //@synthesize editable=_editable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFont;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setLabel:(id)arg1 ;
-(NSString *)text;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)addresses;
-(UITextView *)textView;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(BOOL)isFirstResponder;
-(id)_baseAttributes;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(void)setEditable:(BOOL)arg1 ;
-(id)undoManager;
-(BOOL)hasContent;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)_longPressGestureRecognized:(id)arg1 ;
-(void)clearText;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)editable;
-(void)_tapGestureRecognized:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(void)addAddress:(id)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(BOOL)isSeparatorHidden;
-(BOOL)finishEnteringRecipient;
-(NSArray *)uncommentedAddresses;
-(void)invalidateAtomPresentationOptionsForRecipient:(id)arg1 ;
-(UIButton *)addButton;
-(void)parentWillClose;
-(void)parentDidClose;
-(id)atomViewForRecipient:(id)arg1 ;
-(unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1 ;
-(void)setInactiveTextColor:(UIColor *)arg1 ;
-(void)invalidateAtomPresentationOptions;
-(id)atomViewsInRange:(NSRange)arg1 ;
-(unsigned long long)numberOfRowsOfTextInField;
-(double)offsetForRowWithTextField;
-(void)setExpandRecipientsInNamedGroups:(BOOL)arg1 ;
-(void)atomTextViewDidBecomeFirstResponder:(id)arg1 ;
-(void)selectComposeRecipientAtom:(id)arg1 ;
-(void)setBaseFont:(UIFont *)arg1 ;
-(void)reflow;
-(void)refreshPreferredContentSize;
-(BOOL)_shouldEmbedLabelInTextView;
-(void)_setAddButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_useRightToLeftLayout;
-(void)_invalidateTextContainerExclusionPaths;
-(void)_updateInactiveTextView;
-(void)_removeAllRecipients;
-(void)_beginAtomViewAnimations;
-(void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(BOOL)arg3 ;
-(id)_atomAttachmentForRecipient:(id)arg1 ;
-(void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2 ;
-(void)_didRemoveRecipient:(id)arg1 ;
-(id)_userEnteredTextWithRange:(NSRange*)arg1 ;
-(void)_setTextViewIsCollapsed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateAddButtonVisibility;
-(void)_recomputeTextContainerExclusionPaths;
-(BOOL)_canAddAdditionalAtoms;
-(UIColor *)typingTextColor;
-(BOOL)_isTextViewCollapsed;
-(void)_ensureAddButton;
-(id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1 ;
-(void)_ensureInactiveTextView;
-(id)_attributedStringWithAtomizedRecipients;
-(BOOL)_textViewContainsAtomizedRecipients;
-(BOOL)_hasUnsafeRecipients;
-(UIColor *)inactiveTextColor;
-(id)_toString;
-(BOOL)_delegateRespondsToSizeChange;
-(void)_notifyDelegateOfNewSize:(CGSize)arg1 ;
-(BOOL)_isAddButtonVisible;
-(void)_addButtonTapped:(id)arg1 ;
-(void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(NSRange)arg2 ;
-(id)_atomViewAtCharacterIndex:(unsigned long long)arg1 ;
-(void)_resetSelectionState;
-(id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2 ;
-(void)_addAddressAtomSubview:(id)arg1 ;
-(BOOL)_shouldAnimateAtomViewChanges;
-(void)_removeAddressAtomSubview:(id)arg1 ;
-(void)_notifyDelegateOfSizeChange;
-(_CNAtomTextAttachment *)placeholderAttachment;
-(id)_placeholderAttachmentWithStaticWidth;
-(void)setPlaceholderAttachment:(_CNAtomTextAttachment *)arg1 ;
-(NSRange)_placeholderAttachmentRange;
-(void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3 ;
-(NSRange)_rangeForComposeRecipientAtom:(id)arg1 ;
-(void)deselectComposeRecipientAtom:(id)arg1 ;
-(void)composeRecipientAtomShowPersonCard:(id)arg1 ;
-(void)composeRecipientAtomSelectPrevious:(id)arg1 ;
-(void)composeRecipientAtomSelectNext:(id)arg1 ;
-(void)dragEnteredAtPoint:(CGPoint)arg1 ;
-(void)dragMovedToPoint:(CGPoint)arg1 ;
-(void)dragExited;
-(void)dropItems:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 dragDropDelegate:(id)arg2 ;
-(BOOL)containsAddress:(id)arg1 ;
-(void)setShowsAddButtonWhenExpanded:(BOOL)arg1 ;
-(UIFont *)baseFont;
-(double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2 ;
-(void)_invalidateAtomPresentationOptionsCache;
-(id)selectedAtoms;
-(unsigned long long)indexOfRecipientForInsertionAtPoint:(CGPoint)arg1 ;
-(void)atomTextViewDidResignFirstResponder:(id)arg1 ;
-(void)atomTextView:(id)arg1 didChangeWritingDirection:(long long)arg2 ;
-(id)dragPreviewForDraggedItem:(id)arg1 withContainer:(id)arg2 ;
-(BOOL)indicatesUnsafeRecipientsWhenCollapsed;
-(void)setIndicatesUnsafeRecipientsWhenCollapsed:(BOOL)arg1 ;
-(BOOL)didIgnoreFirstResponderResign;
-(long long)maxRecipients;
-(void)setMaxRecipients:(long long)arg1 ;
-(BOOL)showsAddButtonWhenExpanded;
-(void)setTypingTextColor:(UIColor *)arg1 ;
-(int)hideLastAtomComma;
-(void)setHideLastAtomComma:(int)arg1 ;
-(UIView *)atomContainerView;
-(double)trailingButtonMidlineInsetFromLayoutMargin;
-(void)setTrailingButtonMidlineInsetFromLayoutMargin:(double)arg1 ;
-(BOOL)usingActiveAppearance;
-(void)settrailingButtonMidlineInsetFromLayoutMargin:(double)arg1 ;
-(BOOL)expandRecipientsInNamedGroups;
-(void)setUsingActiveAppearance:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_hasRecipientsWithPresentationOptions:(unsigned long long)arg1 ;
-(BOOL)_hasDowntimeBlockedRecipients;
-(void)composeRecipientAtomDisambiguate:(id)arg1 ;
-(void)setUsingActiveAppearance:(BOOL)arg1 ;
@end

