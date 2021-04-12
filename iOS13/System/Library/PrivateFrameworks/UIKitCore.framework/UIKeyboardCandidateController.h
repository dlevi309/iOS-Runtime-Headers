/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/TUICandidateViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIKeyboardCandidateList.h>

@protocol UIKeyboardCandidateControllerDelegate, UIKeyboardCandidateListDelegate;
@class TIKeyboardCandidateResultSet, NSString, UIKBScreenTraits, TUICandidateView, UIKeyboardCandidateInlineFloatingView, NSMutableArray, UIKeyboardCandidateViewConfiguration, UIKeyboardCandidateViewState, TIKeyboardCandidate, NSDictionary, UIPanGestureRecognizer, UIViewPropertyAnimator, UIView, NSArray;

@interface UIKeyboardCandidateController : NSObject <TUICandidateViewDelegate, UIGestureRecognizerDelegate, UIKeyboardCandidateList> {

	BOOL _inlineRectIsVertical;
	BOOL _adjustForLeftHandBias;
	BOOL _reuseArrowButtonToExpandAssistantBarItems;
	BOOL _darkKeyboard;
	BOOL _darkKeyboardChanged;
	id<UIKeyboardCandidateControllerDelegate> _delegate;
	TIKeyboardCandidateResultSet* _candidateResultSet;
	NSString* _inlineText;
	double _splitGap;
	long long _activeCandidateViewType;
	UIKBScreenTraits* _screenTraits;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	TUICandidateView* _bar;
	TUICandidateView* _key;
	TUICandidateView* _inlineView;
	UIKeyboardCandidateInlineFloatingView* _inlineViewContainer;
	NSMutableArray* _activeViews;
	UIKeyboardCandidateViewConfiguration* _barConfiguration;
	UIKeyboardCandidateViewConfiguration* _inlineConfiguration;
	UIKeyboardCandidateViewConfiguration* _keyConfiguration;
	UIKeyboardCandidateViewState* _barState;
	UIKeyboardCandidateViewState* _extendedBarState;
	UIKeyboardCandidateViewState* _extendedScrolledBarState;
	UIKeyboardCandidateViewState* _inlineViewState;
	UIKeyboardCandidateViewState* _extendedInlineViewState;
	double _additionalExtendedBarBackdropOffset;
	TIKeyboardCandidate* _currentCandidate;
	NSDictionary* _opacities;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIViewPropertyAnimator* _animator;
	CGRect _inlineRect;

}

@property (assign,nonatomic,__weak) id<UIKeyboardCandidateListDelegate> candidateListDelegate;              //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,retain) TUICandidateView * bar;                                                        //@synthesize bar=_bar - In the implementation block
@property (nonatomic,retain) TUICandidateView * key;                                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) TUICandidateView * inlineView;                                                 //@synthesize inlineView=_inlineView - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateInlineFloatingView * inlineViewContainer;                   //@synthesize inlineViewContainer=_inlineViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeViews;                                                  //@synthesize activeViews=_activeViews - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateViewConfiguration * barConfiguration;                       //@synthesize barConfiguration=_barConfiguration - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateViewConfiguration * inlineConfiguration;                    //@synthesize inlineConfiguration=_inlineConfiguration - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateViewConfiguration * keyConfiguration;                       //@synthesize keyConfiguration=_keyConfiguration - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateViewState * barState;                                       //@synthesize barState=_barState - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateViewState * extendedBarState;                               //@synthesize extendedBarState=_extendedBarState - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateViewState * extendedScrolledBarState;                       //@synthesize extendedScrolledBarState=_extendedScrolledBarState - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateViewState * inlineViewState;                                //@synthesize inlineViewState=_inlineViewState - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateViewState * extendedInlineViewState;                        //@synthesize extendedInlineViewState=_extendedInlineViewState - In the implementation block
@property (assign,nonatomic) double additionalExtendedBarBackdropOffset;                                    //@synthesize additionalExtendedBarBackdropOffset=_additionalExtendedBarBackdropOffset - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * currentCandidate;                                        //@synthesize currentCandidate=_currentCandidate - In the implementation block
@property (assign,nonatomic) BOOL darkKeyboard;                                                             //@synthesize darkKeyboard=_darkKeyboard - In the implementation block
@property (assign,nonatomic) BOOL darkKeyboardChanged;                                                      //@synthesize darkKeyboardChanged=_darkKeyboardChanged - In the implementation block
@property (nonatomic,retain) NSDictionary * opacities;                                                      //@synthesize opacities=_opacities - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                 //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * animator;                                             //@synthesize animator=_animator - In the implementation block
@property (assign,nonatomic,__weak) id<UIKeyboardCandidateControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;                             //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (nonatomic,copy) NSString * inlineText;                                                           //@synthesize inlineText=_inlineText - In the implementation block
@property (assign,nonatomic) CGRect inlineRect;                                                             //@synthesize inlineRect=_inlineRect - In the implementation block
@property (assign,nonatomic) BOOL inlineRectIsVertical;                                                     //@synthesize inlineRectIsVertical=_inlineRectIsVertical - In the implementation block
@property (assign,nonatomic) BOOL adjustForLeftHandBias;                                                    //@synthesize adjustForLeftHandBias=_adjustForLeftHandBias - In the implementation block
@property (assign,nonatomic) BOOL reuseArrowButtonToExpandAssistantBarItems;                                //@synthesize reuseArrowButtonToExpandAssistantBarItems=_reuseArrowButtonToExpandAssistantBarItems - In the implementation block
@property (assign,nonatomic) double splitGap;                                                               //@synthesize splitGap=_splitGap - In the implementation block
@property (nonatomic,readonly) UIView * candidateBar; 
@property (nonatomic,readonly) UIView * inlineCandidateView; 
@property (nonatomic,readonly) UIView * candidateKey; 
@property (nonatomic,readonly) BOOL barIsExtended; 
@property (nonatomic,readonly) BOOL inlineViewIsExtended; 
@property (nonatomic,readonly) BOOL isExtended; 
@property (assign,nonatomic) long long activeCandidateViewType;                                             //@synthesize activeCandidateViewType=_activeCandidateViewType - In the implementation block
@property (nonatomic,readonly) NSArray * activeCandidateViews; 
@property (nonatomic,retain) UIKBScreenTraits * screenTraits;                                               //@synthesize screenTraits=_screenTraits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(double)candidateViewAnimationDuration;
-(id)init;
-(void)dealloc;
-(TUICandidateView *)key;
-(id<UIKeyboardCandidateControllerDelegate>)delegate;
-(void)setDelegate:(id<UIKeyboardCandidateControllerDelegate>)arg1 ;
-(void)setKey:(TUICandidateView *)arg1 ;
-(id)snapshot;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_setRenderConfig:(id)arg1 ;
-(UIView *)candidateBar;
-(double)candidateBarHeight;
-(void)setSplitGap:(double)arg1 ;
-(void)updateStates;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIViewPropertyAnimator *)animator;
-(UIKBScreenTraits *)screenTraits;
-(UIEdgeInsets)candidateBarEdgeInsetsForOrientation:(long long)arg1 ;
-(BOOL)hasCandidates;
-(void)setReuseArrowButtonToExpandAssistantBarItems:(BOOL)arg1 ;
-(id)candidates;
-(void)loadDefaultStates;
-(void)setKeyConfiguration:(UIKeyboardCandidateViewConfiguration *)arg1 ;
-(id)loadCandidateBar;
-(TUICandidateView *)bar;
-(id)loadInlineCandidateView;
-(TUICandidateView *)inlineView;
-(NSMutableArray *)activeViews;
-(TIKeyboardCandidateResultSet *)candidateResultSet;
-(void)setBarConfiguration:(UIKeyboardCandidateViewConfiguration *)arg1 ;
-(BOOL)inlineRectIsVertical;
-(void)setInlineConfiguration:(UIKeyboardCandidateViewConfiguration *)arg1 ;
-(void)updateStyles;
-(void)updateConfigurations;
-(UIKeyboardCandidateViewConfiguration *)barConfiguration;
-(BOOL)darkKeyboard;
-(void)setDarkKeyboard:(BOOL)arg1 ;
-(UIKeyboardCandidateViewConfiguration *)inlineConfiguration;
-(UIKeyboardCandidateViewConfiguration *)keyConfiguration;
-(void)updateStatesForBar;
-(void)updateStatesForInlineView;
-(void)updateStatesForKey;
-(BOOL)shouldShowDisambiguationCandidates;
-(long long)activeCandidateViewType;
-(double)rowHeightForBarForOrientation:(long long)arg1 ;
-(void)setAdditionalExtendedBarBackdropOffset:(double)arg1 ;
-(BOOL)barIsExtended;
-(UIKeyboardCandidateViewState *)extendedBarState;
-(UIKeyboardCandidateViewState *)extendedScrolledBarState;
-(double)candidateBarHeightForOrientation:(long long)arg1 ;
-(BOOL)shouldShowSortControlForConfiguration:(id)arg1 ;
-(BOOL)reuseArrowButtonToExpandAssistantBarItems;
-(double)splitGap;
-(BOOL)shouldShowDisambiguationCandidatesInExtendedView;
-(BOOL)adjustForLeftHandBias;
-(void)updateOpacitiesToState:(id)arg1 ;
-(UIKeyboardCandidateViewState *)barState;
-(void)setBarState:(UIKeyboardCandidateViewState *)arg1 ;
-(void)setExtendedBarState:(UIKeyboardCandidateViewState *)arg1 ;
-(void)setExtendedScrolledBarState:(UIKeyboardCandidateViewState *)arg1 ;
-(void)setupPanGestureRecognizerIfNeeded;
-(CGRect)inlineRect;
-(UIKeyboardCandidateInlineFloatingView *)inlineViewContainer;
-(UIKeyboardCandidateViewState *)inlineViewState;
-(void)setInlineViewState:(UIKeyboardCandidateViewState *)arg1 ;
-(UIKeyboardCandidateViewState *)extendedInlineViewState;
-(void)setExtendedInlineViewState:(UIKeyboardCandidateViewState *)arg1 ;
-(NSDictionary *)opacities;
-(BOOL)inlineViewIsExtended;
-(double)additionalExtendedBarBackdropOffset;
-(void)setupAnimatorWithCurve:(long long)arg1 ;
-(void)toggleBarExtendedWithAnimator:(id)arg1 ;
-(void)extendKeyboardBackdropHeight:(double)arg1 ;
-(void)toggleBarExtended;
-(void)toggleInlineViewExtendedAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)panGestureRecognizerAction:(id)arg1 ;
-(void)resetSortControlIndexAfterCandidatesChanged;
-(long long)candidateViewTypeForView:(id)arg1 ;
-(void)setCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)setCurrentCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)setInlineText:(NSString *)arg1 ;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6 ;
-(void)setInlineRect:(CGRect)arg1 ;
-(void)removeInlineView;
-(void)setInlineRectIsVertical:(BOOL)arg1 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(void)collapse;
-(void)showCandidateAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(id)firstNonEmptyActiveCandidateView;
-(BOOL)showCandidate:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(BOOL)handleNumberKey:(unsigned long long)arg1 ;
-(BOOL)showCandidate:(id)arg1 ;
-(void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4 generateFeedback:(BOOL)arg5 ;
-(id)candidateAtIndex:(unsigned long long)arg1 ;
-(void)setOpacities:(NSDictionary *)arg1 ;
-(void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4 ;
-(void)candidateViewSelectionDidChange:(id)arg1 inGridType:(long long)arg2 ;
-(void)candidateViewDidTapArrowButton:(id)arg1 ;
-(void)candidateViewDidTapInlineText:(id)arg1 ;
-(void)candidateViewWillBeginDragging:(id)arg1 ;
-(void)candidateViewNeedsToExpand:(id)arg1 ;
-(BOOL)isExtendedList;
-(BOOL)isFloatingList;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(TIKeyboardCandidate *)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(id)keyboardBehaviors;
-(id)statisticsIdentifier;
-(unsigned long long)selectedSortIndex;
-(BOOL)handleTabKeyWithShift:(BOOL)arg1 ;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(NSString *)inlineText;
-(long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1 ;
-(long long)rowForCandidateAtIndex:(unsigned long long)arg1 ;
-(id)secureCandidateRenderTraits;
-(UIView *)candidateKey;
-(UIView *)inlineCandidateView;
-(id)newCandidateKeyWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(void)setActiveCandidateViewType:(long long)arg1 ;
-(NSArray *)activeCandidateViews;
-(double)candidateBarWidth;
-(CGSize)maximumSizeForInlineView;
-(BOOL)isExtended;
-(void)clearCurrentCandidate;
-(void)setScreenTraits:(UIKBScreenTraits *)arg1 ;
-(void)acceptSelectedCandidate;
-(void)dimKeys:(id)arg1 ;
-(void)setAdjustForLeftHandBias:(BOOL)arg1 ;
-(void)setBar:(TUICandidateView *)arg1 ;
-(void)setInlineView:(TUICandidateView *)arg1 ;
-(void)setInlineViewContainer:(UIKeyboardCandidateInlineFloatingView *)arg1 ;
-(void)setActiveViews:(NSMutableArray *)arg1 ;
-(BOOL)darkKeyboardChanged;
-(void)setDarkKeyboardChanged:(BOOL)arg1 ;
@end

