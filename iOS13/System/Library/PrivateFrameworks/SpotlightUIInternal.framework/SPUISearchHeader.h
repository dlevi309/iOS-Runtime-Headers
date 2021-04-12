/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SearchUITextFieldDelegate.h>
#import <UIKit/UITextPasteDelegate.h>

@protocol SPUIHeaderInteractionDelegate, SPUISearchHeaderDelegate;
@class _UILegibilitySettings, UIButton, NSLayoutConstraint, SPSearchEntity, SPUITextField, NSString;

@interface SPUISearchHeader : UIView <SearchUITextFieldDelegate, UITextPasteDelegate> {

	BOOL _willClear;
	BOOL _searchTextScheduledForProcessing;
	BOOL _offersCompletions;
	id<SPUIHeaderInteractionDelegate> _interactionDelegate;
	_UILegibilitySettings* _legibilitySettings;
	long long _activeInterfaceOrientation;
	UIButton* _cancelButton;
	NSLayoutConstraint* _searchFieldTrailingConstraint;
	NSLayoutConstraint* _cancelButtonTrailingConstraint;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	id<SPUISearchHeaderDelegate> _delegate;
	unsigned long long _suggestionID;
	SPSearchEntity* _searchEntity;
	SPUITextField* _searchField;
	double _blurProgress;

}

@property (retain) UIButton * cancelButton;                                                             //@synthesize cancelButton=_cancelButton - In the implementation block
@property (retain) NSLayoutConstraint * searchFieldTrailingConstraint;                                  //@synthesize searchFieldTrailingConstraint=_searchFieldTrailingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * cancelButtonTrailingConstraint;                                 //@synthesize cancelButtonTrailingConstraint=_cancelButtonTrailingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * widthConstraint;                                                //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * topConstraint;                                                  //@synthesize topConstraint=_topConstraint - In the implementation block
@property (retain) NSLayoutConstraint * bottomConstraint;                                               //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (assign) BOOL willClear;                                                                      //@synthesize willClear=_willClear - In the implementation block
@property (assign) BOOL searchTextScheduledForProcessing;                                               //@synthesize searchTextScheduledForProcessing=_searchTextScheduledForProcessing - In the implementation block
@property (__weak) id<SPUISearchHeaderDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * currentQuery; 
@property (assign) unsigned long long suggestionID;                                                     //@synthesize suggestionID=_suggestionID - In the implementation block
@property (nonatomic,retain) SPSearchEntity * searchEntity;                                             //@synthesize searchEntity=_searchEntity - In the implementation block
@property (retain) SPUITextField * searchField;                                                         //@synthesize searchField=_searchField - In the implementation block
@property (assign) BOOL offersCompletions;                                                              //@synthesize offersCompletions=_offersCompletions - In the implementation block
@property (assign,nonatomic) double blurProgress;                                                       //@synthesize blurProgress=_blurProgress - In the implementation block
@property (assign,nonatomic) BOOL useInPlaceFilteredBlur; 
@property (assign,nonatomic,__weak) id<SPUIHeaderInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) long long activeInterfaceOrientation;                                      //@synthesize activeInterfaceOrientation=_activeInterfaceOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenFromSearchEntity:(id)arg1 ;
-(id)init;
-(id<SPUISearchHeaderDelegate>)delegate;
-(void)setDelegate:(id<SPUISearchHeaderDelegate>)arg1 ;
-(void)setInteractionDelegate:(id<SPUIHeaderInteractionDelegate>)arg1 ;
-(BOOL)isFirstResponder;
-(NSLayoutConstraint *)topConstraint;
-(NSLayoutConstraint *)bottomConstraint;
-(NSLayoutConstraint *)widthConstraint;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(SPUITextField *)searchField;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)_searchTextField:(id)arg1 itemProviderForCopyingToken:(id)arg2 ;
-(void)textDidChange:(id)arg1 ;
-(void)setSearchField:(SPUITextField *)arg1 ;
-(id)backdropVisualEffectView;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(long long)activeInterfaceOrientation;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)textPasteConfigurationSupporting:(id)arg1 transformPasteItem:(id)arg2 ;
-(id<SPUIHeaderInteractionDelegate>)interactionDelegate;
-(double)bottomPadding;
-(double)topPadding;
-(NSString *)currentQuery;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)returnKeyPressed;
-(unsigned long long)suggestionID;
-(void)setSuggestionID:(unsigned long long)arg1 ;
-(void)setActiveInterfaceOrientation:(long long)arg1 ;
-(void)focusSearchField;
-(void)setSearchEntity:(id)arg1 fromSuggestion:(BOOL)arg2 ;
-(void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 sourcePreference:(unsigned long long)arg3 ;
-(void)searchForSuggestion:(id)arg1 ;
-(void)showCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUseInPlaceFilteredBlur:(BOOL)arg1 ;
-(void)unfocusSearchField;
-(void)clearSearchFieldWhyQuery:(unsigned long long)arg1 allowZKW:(BOOL)arg2 ;
-(void)setupKeyboardSupportForResultViewController:(id)arg1 ;
-(SPSearchEntity *)searchEntity;
-(void)enableDictationIfRequired;
-(void)beginDictation;
-(void)dictationButtonPressed;
-(void)triggerSearchForUnlock;
-(BOOL)useInPlaceFilteredBlur;
-(void)escapeKeyPressed;
-(void)setCancelButtonTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSearchFieldTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)searchFieldTrailingConstraint;
-(void)setOffersCompletions:(BOOL)arg1 ;
-(BOOL)textFieldShouldReturn;
-(void)textFieldDidBeginEditing;
-(void)updateBlurProgress;
-(double)blurProgress;
-(BOOL)isOnDarkBackground;
-(void)setWillClear:(BOOL)arg1 ;
-(BOOL)searchTextScheduledForProcessing;
-(void)setSearchTextScheduledForProcessing:(BOOL)arg1 ;
-(BOOL)offersCompletions;
-(void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(BOOL)arg3 ;
-(void)setSearchEntity:(SPSearchEntity *)arg1 ;
-(BOOL)willClear;
-(id)currentQueryContextWithString:(id)arg1 ;
-(void)_updateClearButtonVisibility;
-(void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(BOOL)arg3 sourcePreference:(unsigned long long)arg4 engagedSuggestion:(id)arg5 ;
-(void)addInputMethodInformationToQueryContext:(id)arg1 ;
-(void)_searchWithSearchEntity:(id)arg1 fromSuggestion:(BOOL)arg2 ;
-(void)focusSearchFieldAndBeginDictation:(BOOL)arg1 ;
-(void)performActionAfterCommit:(/*^block*/id)arg1 ;
-(NSLayoutConstraint *)cancelButtonTrailingConstraint;
-(void)setBlurProgress:(double)arg1 ;
-(BOOL)cancelButtonIsVisible;
@end

