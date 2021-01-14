/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TUICandidateGridDelegate.h>

@protocol TUICandidateViewState, TUICandidateViewDelegate;
@class TIKeyboardCandidateResultSet, NSString, UIView, TUICandidateGrid, TUICandidateSortControl, TUICandidateInlineTextView, TUICandidateArrowButton, TUICandidateBackdropView, NSIndexPath, TIKeyboardCandidate;

@interface TUICandidateView : UIView <TUICandidateGridDelegate> {

	BOOL _showingSortControl;
	BOOL _shouldShowArrowButton;
	BOOL _changingLayout;
	id<TUICandidateViewState> _state;
	TIKeyboardCandidateResultSet* _candidateResultSet;
	NSString* _inlineText;
	id<TUICandidateViewDelegate> _delegate;
	UIView* _clipsToBoundsView;
	TUICandidateGrid* _primaryGrid;
	TUICandidateGrid* _disambiguationGrid;
	TUICandidateSortControl* _sortControl;
	TUICandidateInlineTextView* _inlineTextView;
	TUICandidateArrowButton* _arrowButton;
	TUICandidateBackdropView* _backdropView;

}

@property (nonatomic,retain) UIView * clipsToBoundsView;                                           //@synthesize clipsToBoundsView=_clipsToBoundsView - In the implementation block
@property (nonatomic,retain) TUICandidateGrid * primaryGrid;                                       //@synthesize primaryGrid=_primaryGrid - In the implementation block
@property (nonatomic,retain) TUICandidateGrid * disambiguationGrid;                                //@synthesize disambiguationGrid=_disambiguationGrid - In the implementation block
@property (nonatomic,retain) TUICandidateSortControl * sortControl;                                //@synthesize sortControl=_sortControl - In the implementation block
@property (nonatomic,retain) TUICandidateInlineTextView * inlineTextView;                          //@synthesize inlineTextView=_inlineTextView - In the implementation block
@property (nonatomic,retain) TUICandidateArrowButton * arrowButton;                                //@synthesize arrowButton=_arrowButton - In the implementation block
@property (nonatomic,retain) TUICandidateBackdropView * backdropView;                              //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) BOOL showingSortControl;                                              //@synthesize showingSortControl=_showingSortControl - In the implementation block
@property (assign,nonatomic) BOOL shouldShowArrowButton;                                           //@synthesize shouldShowArrowButton=_shouldShowArrowButton - In the implementation block
@property (assign,nonatomic) BOOL changingLayout;                                                  //@synthesize changingLayout=_changingLayout - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewState> state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;                    //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (nonatomic,copy) NSString * inlineText;                                                  //@synthesize inlineText=_inlineText - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath; 
@property (nonatomic,retain) NSIndexPath * disambiguationSelectedIndexPath; 
@property (nonatomic,readonly) TIKeyboardCandidate * selectedCandidate; 
@property (nonatomic,readonly) TIKeyboardCandidate * selectedDisambiguationCandidate; 
@property (assign,nonatomic,__weak) id<TUICandidateViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(TUICandidateBackdropView *)backdropView;
-(void)setBackdropView:(TUICandidateBackdropView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<TUICandidateViewDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)arrowButtonHeight;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)commonInit;
-(void)setInlineText:(NSString *)arg1 ;
-(void)candidateGridSelectionDidChange:(id)arg1 ;
-(void)candidateGrid:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 ;
-(void)candidateGrid:(id)arg1 didChangeContentSize:(CGSize)arg2 ;
-(double)sortControlHeight;
-(void)candidateGrid:(id)arg1 didMoveHighlightFrame:(CGRect)arg2 ;
-(void)candidateGridNeedsToExpand:(id)arg1 ;
-(CGRect)boundsForClipsToBoundsViewWithState:(id)arg1 ;
-(double)inlineTextHeight;
-(double)disambiguationHeight;
-(double)arrowButtonWidth;
-(void)prepareForLayoutChange:(BOOL)arg1 ;
-(void)finalizeLayoutChange;
-(void)changeLayoutInsideAnimationBlock;
-(void)updatePrimaryGridRowTypeWithOptions:(unsigned long long)arg1 animated:(BOOL)arg2 animator:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)reloadGridsIfNeeded;
-(void)updateSortControlTitlesIfNeeded;
-(void)updateCornerRadius;
-(BOOL)reloadPrimaryGridDataIfNeeded;
-(void)reloadDisambiguationGridDataIfNeeded;
-(void)updateDisambiguationSelectionIndex;
-(id)candidateGroupsForCurrentState;
-(id)gridOfType:(long long)arg1 ;
-(void)didTapArrowButton:(id)arg1 ;
-(void)didTapInlineText:(id)arg1 ;
-(id)sortControlTitles;
-(BOOL)toggleSortControl:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<TUICandidateViewDelegate>)arg1 ;
-(BOOL)shouldAutomaticallyHideAndShowSortControl;
-(void)handleSortControlValueChanged;
-(void)updateArrowButtonVisibility;
-(id)visibleCandidates;
-(id)filteredCandidates;
-(UIView *)clipsToBoundsView;
-(void)setClipsToBoundsView:(UIView *)arg1 ;
-(TUICandidateGrid *)primaryGrid;
-(TUICandidateSortControl *)sortControl;
-(void)setPrimaryGrid:(TUICandidateGrid *)arg1 ;
-(TUICandidateGrid *)disambiguationGrid;
-(void)setDisambiguationGrid:(TUICandidateGrid *)arg1 ;
-(void)setSortControl:(TUICandidateSortControl *)arg1 ;
-(TUICandidateInlineTextView *)inlineTextView;
-(TUICandidateArrowButton *)arrowButton;
-(void)setInlineTextView:(TUICandidateInlineTextView *)arg1 ;
-(void)setArrowButton:(TUICandidateArrowButton *)arg1 ;
-(BOOL)showingSortControl;
-(void)setShowingSortControl:(BOOL)arg1 ;
-(BOOL)shouldShowArrowButton;
-(void)setShouldShowArrowButton:(BOOL)arg1 ;
-(BOOL)changingLayout;
-(void)setChangingLayout:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(NSString *)inlineText;
-(BOOL)handleNumberKey:(unsigned long long)arg1 ;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(void)setState:(id<TUICandidateViewState>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<TUICandidateViewState>)state;
-(void)scrollViewDidScroll:(id)arg1 ;
-(TIKeyboardCandidateResultSet *)candidateResultSet;
-(void)setState:(id)arg1 animated:(BOOL)arg2 force:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(long long)rowForCandidate:(id)arg1 ;
-(void)resetSortControlIndex;
-(void)setState:(id)arg1 animated:(BOOL)arg2 animator:(id)arg3 options:(unsigned long long)arg4 force:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(id)indexPathForCandidate:(id)arg1 ;
-(void)setState:(id)arg1 animated:(BOOL)arg2 options:(unsigned long long)arg3 force:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)showingArrowButton;
-(void)setSelectedIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(TIKeyboardCandidate *)selectedCandidate;
-(NSIndexPath *)selectedIndexPath;
-(long long)selectedSortControlIndex;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 inGridType:(long long)arg3 ;
-(void)setDisambiguationSelectedIndexPath:(NSIndexPath *)arg1 ;
-(long long)viewOffsetForCandidate:(id)arg1 ;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 inGridType:(long long)arg3 ;
-(TIKeyboardCandidate *)selectedDisambiguationCandidate;
-(NSIndexPath *)disambiguationSelectedIndexPath;
@end

