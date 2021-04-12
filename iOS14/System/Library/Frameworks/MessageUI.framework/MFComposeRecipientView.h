/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>
#import <libobjc.A.dylib/MFCorecipientsIndicatorAtomDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MFComposeRecipientAtomDelegate.h>

@class _MFMailRecipientTextField, NSArray, NSMutableArray, NSCountedSet, MFModernComposeRecipientAtom, MFComposeRecipient, UIButton, NSTimer, UITapGestureRecognizer, UIFont, MFCorecipientsIndicatorAtom, NSMutableDictionary, NSString, UITextField, UIView;

@interface MFComposeRecipientView : MFComposeHeaderView <MFCorecipientsIndicatorAtomDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, MFComposeRecipientAtomDelegate> {

	_MFMailRecipientTextField* _textField;
	NSArray* _textFieldConstraints;
	NSMutableArray* _recipients;
	NSCountedSet* _uncommentedAddresses;
	CFDictionaryRef _atomPresentationOptionsByRecipient;
	unsigned long long _defaultAtomPresentationOptions;
	MFModernComposeRecipientAtom* _selectedAtom;
	MFComposeRecipient* _placeholderRecipient;
	long long _dragSourceOriginalIndex;
	UIButton* _addButton;
	BOOL _editable;
	BOOL _picking;
	BOOL _expanded;
	NSArray* _properties;
	long long _maxRecipients;
	BOOL _parentIsClosing;
	BOOL _deselectOnNextKeyboardInput;
	BOOL _clearSelectionUIAfterFirstResponder;
	NSTimer* _delayTimer;
	double _inputDelay;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _needsReflow;
	BOOL _needsLayoutConstraintUpdate;
	UIFont* _baseFont;
	BOOL _didIgnoreFirstResponderResign;
	BOOL _allowsDragAndDrop;
	BOOL _separatorHidden;
	int _hideLastAtomComma;
	MFCorecipientsIndicatorAtom* _corecipientsIndicatorAtom;
	NSMutableDictionary* _atoms;

}

@property (nonatomic,retain) MFComposeRecipient * placeholderRecipient; 
@property (assign,nonatomic) BOOL didIgnoreFirstResponderResign;                               //@synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * atoms;                                      //@synthesize atoms=_atoms - In the implementation block
@property (nonatomic,retain) MFCorecipientsIndicatorAtom * corecipientsIndicator;              //@synthesize corecipientsIndicatorAtom=_corecipientsIndicatorAtom - In the implementation block
@property (nonatomic,copy) NSArray * addresses; 
@property (assign,nonatomic) BOOL editable;                                                    //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) long long maxRecipients;                                          //@synthesize maxRecipients=_maxRecipients - In the implementation block
@property (assign,nonatomic) double inputDelay;                                                //@synthesize inputDelay=_inputDelay - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) UITextField * textField;                                        //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) NSArray * recipients;                                           //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) UIView * addButton;                                             //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,readonly) double offsetForRowWithTextField; 
@property (nonatomic,readonly) long long numberOfRowsOfTextInField; 
@property (assign,nonatomic) BOOL allowsDragAndDrop;                                           //@synthesize allowsDragAndDrop=_allowsDragAndDrop - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                    //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) unsigned long long defaultAtomPresentationOptions;                //@synthesize defaultAtomPresentationOptions=_defaultAtomPresentationOptions - In the implementation block
@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden;                    //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (nonatomic,retain) UIFont * baseFont; 
@property (assign,nonatomic) int hideLastAtomComma;                                            //@synthesize hideLastAtomComma=_hideLastAtomComma - In the implementation block
@property (assign,nonatomic,__weak) id<MFComposeRecipientViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)recipients;
-(void)textChanged:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(NSArray *)addresses;
-(BOOL)becomeFirstResponder;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)parentWillClose;
-(BOOL)hasContent;
-(void)reflow;
-(void)removeRecipient:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIFont *)baseFont;
-(id<MFComposeRecipientViewDelegate>)delegate;
-(NSMutableDictionary *)atoms;
-(BOOL)expanded;
-(void)setProperty:(int)arg1 ;
-(void)didMoveToSuperview;
-(void)_removeAllRecipients;
-(void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(BOOL)arg3 ;
-(void)setAtoms:(NSMutableDictionary *)arg1 ;
-(BOOL)allowsDragAndDrop;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)selectComposeRecipientAtom:(id)arg1 ;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
-(void)deselectComposeRecipientAtom:(id)arg1 ;
-(BOOL)editable;
-(void)composeRecipientAtomShowPersonCard:(id)arg1 ;
-(void)composeRecipientAtomSelectPrevious:(id)arg1 ;
-(void)composeRecipientAtomSelectNext:(id)arg1 ;
-(BOOL)containsAddress:(id)arg1 ;
-(id)uncommentedAddresses;
-(void)setBaseFont:(UIFont *)arg1 ;
-(double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2 ;
-(int)hideLastAtomComma;
-(UIView *)addButton;
-(BOOL)didIgnoreFirstResponderResign;
-(void)setHideLastAtomComma:(int)arg1 ;
-(double)inputDelay;
-(NSString *)text;
-(void)setEditable:(BOOL)arg1 ;
-(void)_addRecord:(void*)arg1 identifier:(int)arg2 ;
-(void)addButtonClicked:(id)arg1 ;
-(UITextField *)textField;
-(long long)numberOfRowsOfTextInField;
-(void)addRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(void)_cancelDelayTimer;
-(void)_setNeedsReflow;
-(void)_reflowAnimated:(BOOL)arg1 ;
-(void)_addUncommentedAddress:(id)arg1 ;
-(void)_removeAddressAtomPresentationOptionsForRecipient:(id)arg1 ;
-(void)_removeUncommentedAddress:(id)arg1 ;
-(MFComposeRecipient *)placeholderRecipient;
-(void)clearAllAddressAtomPresentationOptions;
-(void)_deselectAtom;
-(unsigned long long)_addressAtomPresentationOptionsForRecipient:(id)arg1 ;
-(void)_updateLayoutConstraintsAndGetNumberOfRows:(out unsigned long long*)arg1 textFieldWillBeLastRow:(out BOOL*)arg2 ;
-(double)_topRowTextWidth;
-(void)_delayTimerFired:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(double)offsetForRowWithTextField;
-(void)setAllowsDragAndDrop:(BOOL)arg1 ;
-(BOOL)_addable;
-(void)setLabel:(id)arg1 ;
-(BOOL)_shouldShowCorecipientsIndicatorAtom;
-(void)setDidIgnoreFirstResponderResign:(BOOL)arg1 ;
-(void)_deleteSelectedAtom;
-(void)didTapShowCorecipientsForIndicatorAtom:(id)arg1 recipients:(id)arg2 ;
-(void)setPlaceholderRecipient:(MFComposeRecipient *)arg1 ;
-(void)setAddressAtomPresentationOptions:(unsigned long long)arg1 forRecipient:(id)arg2 ;
-(void)showCorecipientIndicator:(BOOL)arg1 withCorecipients:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)mf_textFieldShowingSearchResults:(id)arg1 ;
-(void)setMaxRecipients:(long long)arg1 ;
-(long long)maxRecipients;
-(void)addAddress:(id)arg1 ;
-(void)mf_selectNextSearchResultForTextField:(id)arg1 ;
-(void)mf_selectPreviousSearchResultForTextField:(id)arg1 ;
-(BOOL)mf_presentSearchResultsForTextField:(id)arg1 ;
-(BOOL)mf_chooseSelectedSearchResultForTextField:(id)arg1 ;
-(void)mf_dismissSearchResults:(id)arg1 ;
-(void)mf_recipientTextField:(id)arg1 didAddRecipientAddress:(id)arg2 ;
-(void)_setNeedsLayoutConstraintUpdate;
-(void)setInputDelay:(double)arg1 ;
-(unsigned long long)defaultAtomPresentationOptions;
-(void)setDefaultAtomPresentationOptions:(unsigned long long)arg1 ;
-(MFCorecipientsIndicatorAtom *)corecipientsIndicator;
-(void)setCorecipientsIndicator:(MFCorecipientsIndicatorAtom *)arg1 ;
-(void)clearText;
-(void)refreshPreferredContentSize;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(BOOL)finishEnteringRecipient;
-(void)_tapGestureRecognized:(id)arg1 ;
-(void)dealloc;
-(void)parentDidClose;
-(BOOL)isSeparatorHidden;
@end

