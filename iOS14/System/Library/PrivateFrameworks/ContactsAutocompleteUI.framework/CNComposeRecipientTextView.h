/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <ContactsAutocompleteUI/CNComposeHeaderView.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <libobjc.A.dylib/CNComposeRecipientAtomDelegate.h>
#import <libobjc.A.dylib/CNRecipientDraggingDelegate.h>

@class _CNAtomTextView, UITextView, UIColor, NSMutableArray, NSMutableDictionary, CNComposeDragSource, CNComposeDropTarget, NSTimer, NSArray, NSUndoManager, UIFont, UIButton, _CNAtomTextAttachment, UIView, NSString;

@interface CNComposeRecipientTextView : CNComposeHeaderView <UIContextMenuInteractionDelegate, UITextViewDelegate, NSLayoutManagerDelegate, CNComposeRecipientAtomDelegate, CNRecipientDraggingDelegate> {

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
	BOOL _addButtonWasTapped;
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
-(NSArray *)recipients;
-(UITextView *)textView;
-(BOOL)enabled;
-(void)setExpanded:(BOOL)arg1 ;
-(NSArray *)addresses;
-(void)selectAll:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)addRecipient:(id)arg1 ;
-(void)parentWillClose;
-(BOOL)hasContent;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)isFirstResponder;
-(void)reflow;
-(void)removeRecipient:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_baseAttributes;
-(void)setRecipients:(NSArray *)arg1 ;
-(UIFont *)baseFont;
-(id)undoManager;
-(double)trailingButtonMidlineInsetFromLayoutMargin;
-(void)setTrailingButtonMidlineInsetFromLayoutMargin:(double)arg1 ;
-(BOOL)expanded;
-(void)atomTextViewDidBecomeFirstResponder:(id)arg1 ;
-(void)_longPressGestureRecognized:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_setAddButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_useRightToLeftLayout;
-(void)_recomputeTextContainerExclusionPaths;
-(void)_invalidateTextContainerExclusionPaths;
-(BOOL)usingActiveAppearance;
-(void)_updateInactiveTextView;
-(void)_removeAllRecipients;
-(void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(BOOL)arg3 ;
-(void)_beginAtomViewAnimations;
-(BOOL)expandRecipientsInNamedGroups;
-(id)selectedAtoms;
-(id)_atomAttachmentForRecipient:(id)arg1 ;
-(void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2 ;
-(void)_didRemoveRecipient:(id)arg1 ;
-(id)_userEnteredTextWithRange:(NSRange*)arg1 ;
-(void)setUsingActiveAppearance:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setTextViewIsCollapsed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateAddButtonVisibility;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_canAddAdditionalAtoms;
-(BOOL)_hasRecipientsWithPresentationOptions:(unsigned long long)arg1 ;
-(UIColor *)typingTextColor;
-(BOOL)_isTextViewCollapsed;
-(void)_ensureAddButton;
-(id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1 ;
-(void)_ensureInactiveTextView;
-(id)_attributedStringWithAtomizedRecipients;
-(BOOL)_textViewContainsAtomizedRecipients;
-(BOOL)_hasDowntimeBlockedRecipients;
-(BOOL)_hasUnsafeRecipients;
-(UIColor *)inactiveTextColor;
-(BOOL)_delegateRespondsToSizeChange;
-(void)_notifyDelegateOfNewSize:(CGSize)arg1 ;
-(void)_addButtonTapped:(id)arg1 ;
-(BOOL)_isAddButtonVisible;
-(BOOL)_recipientAtomHitInView:(id)arg1 atLocation:(CGPoint)arg2 ;
-(void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(NSRange)arg2 ;
-(void)selectAtom:(id)arg1 ;
-(id)_atomViewAtCharacterIndex:(unsigned long long)arg1 ;
-(void)selectComposeRecipientAtom:(id)arg1 ;
-(void)_resetSelectionState;
-(id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2 ;
-(void)_addAddressAtomSubview:(id)arg1 ;
-(BOOL)_shouldAnimateAtomViewChanges;
-(void)_removeAddressAtomSubview:(id)arg1 ;
-(void)_notifyDelegateOfSizeChange;
-(NSRange)_rangeForComposeRecipientAtom:(id)arg1 ;
-(void)selectAllAtoms;
-(_CNAtomTextAttachment *)placeholderAttachment;
-(id)_placeholderAttachmentWithStaticWidth;
-(void)setPlaceholderAttachment:(_CNAtomTextAttachment *)arg1 ;
-(NSRange)_placeholderAttachmentRange;
-(void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3 ;
-(void)shiftSelectAtom:(id)arg1 ;
-(void)deselectAllAtoms;
-(void)shiftSelectComposeRecipientAtom:(id)arg1 ;
-(void)deselectComposeRecipientAtom:(id)arg1 ;
-(void)dragExited;
-(BOOL)editable;
-(void)composeRecipientAtomDisambiguate:(id)arg1 ;
-(void)composeRecipientAtomShowPersonCard:(id)arg1 ;
-(void)composeRecipientAtomSelectPrevious:(id)arg1 ;
-(void)composeRecipientAtomSelectNext:(id)arg1 ;
-(id)menuConfigurationForAtomView:(id)arg1 ;
-(void)dragEnteredAtPoint:(CGPoint)arg1 ;
-(void)dragMovedToPoint:(CGPoint)arg1 ;
-(void)dropItems:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 dragDropDelegate:(id)arg2 ;
-(BOOL)containsAddress:(id)arg1 ;
-(NSArray *)uncommentedAddresses;
-(void)setEditable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(void)setBaseFont:(UIFont *)arg1 ;
-(double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2 ;
-(void)_invalidateAtomPresentationOptionsCache;
-(unsigned long long)indexOfRecipientForInsertionAtPoint:(CGPoint)arg1 ;
-(void)atomTextViewDidResignFirstResponder:(id)arg1 ;
-(void)atomTextView:(id)arg1 didChangeWritingDirection:(long long)arg2 ;
-(void)selectAtomForRecipient:(id)arg1 ;
-(id)dragPreviewForDraggedItem:(id)arg1 withContainer:(id)arg2 ;
-(int)hideLastAtomComma;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(UIButton *)addButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)indicatesUnsafeRecipientsWhenCollapsed;
-(void)setIndicatesUnsafeRecipientsWhenCollapsed:(BOOL)arg1 ;
-(BOOL)didIgnoreFirstResponderResign;
-(BOOL)showsAddButtonWhenExpanded;
-(void)setTypingTextColor:(UIColor *)arg1 ;
-(void)setHideLastAtomComma:(int)arg1 ;
-(UIView *)atomContainerView;
-(NSString *)text;
-(void)setEditable:(BOOL)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(unsigned long long)numberOfRowsOfTextInField;
-(id)atomViewForRecipient:(id)arg1 ;
-(unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1 ;
-(void)invalidateAtomPresentationOptionsForRecipient:(id)arg1 ;
-(void)setInactiveTextColor:(UIColor *)arg1 ;
-(void)invalidateAtomPresentationOptions;
-(id)atomViewsInRange:(NSRange)arg1 ;
-(double)offsetForRowWithTextField;
-(void)setLabel:(id)arg1 ;
-(void)setMaxRecipients:(long long)arg1 ;
-(long long)maxRecipients;
-(void)addAddress:(id)arg1 ;
-(BOOL)_shouldEmbedLabelInTextView;
-(void)clearText;
-(void)refreshPreferredContentSize;
-(void)setAddresses:(NSArray *)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(void)setExpandRecipientsInNamedGroups:(BOOL)arg1 ;
-(void)setShowsAddButtonWhenExpanded:(BOOL)arg1 ;
-(void)setUsingActiveAppearance:(BOOL)arg1 ;
-(BOOL)finishEnteringRecipient;
-(void)_tapGestureRecognized:(id)arg1 ;
-(id)_toString;
-(void)dealloc;
-(void)parentDidClose;
-(BOOL)isSeparatorHidden;
@end
