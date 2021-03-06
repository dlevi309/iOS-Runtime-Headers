/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/TUICandidateViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIKeyboardCandidateList.h>

@protocol UIKeyboardCandidateControllerDelegate, UIKeyboardCandidateListDelegate;
@class TIKeyboardCandidateResultSet, NSString, UIKBScreenTraits, TUICandidateView, UIKeyboardCandidateInlineFloatingView, NSMutableArray, UIKeyboardCandidateViewConfiguration, UIKeyboardCandidateViewState, TIKeyboardCandidate, NSDictionary, UIPanGestureRecognizer, UIViewPropertyAnimator, UIKBRenderConfig, UIView, NSArray;

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
	double _singleSlottedCellMargin;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIViewPropertyAnimator* _animator;
	UIKBRenderConfig* _renderConfig;
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
@property (assign,nonatomic) double singleSlottedCellMargin;                                                //@synthesize singleSlottedCellMargin=_singleSlottedCellMargin - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                 //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * animator;                                             //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                                               //@synthesize renderConfig=_renderConfig - In the implementation block
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
-(id)snapshot;
-(void)revealHiddenCandidates;
-(unsigned long long)currentIndex;
-(UIViewPropertyAnimator *)animator;
-(void)dimKeys:(id)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(TUICandidateView *)bar;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(void)panGestureRecognizerAction:(id)arg1 ;
-(double)splitGap;
-(void)setupPanGestureRecognizerIfNeeded;
-(void)extendKeyboardBackdropHeight:(double)arg1 ;
-(UIView *)inlineCandidateView;
-(void)candidateViewDidTapArrowButton:(id)arg1 ;
-(BOOL)isExtendedList;
-(void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(void)setExtendedBarState:(UIKeyboardCandidateViewState *)arg1 ;
-(void)setReuseArrowButtonToExpandAssistantBarItems:(BOOL)arg1 ;
-(long long)rowForCandidateAtIndex:(unsigned long long)arg1 ;
-(UIView *)candidateKey;
-(double)candidateBarWidth;
-(id)init;
-(UIEdgeInsets)candidateBarEdgeInsetsForOrientation:(long long)arg1 ;
-(CGSize)maximumSizeForInlineView;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(UIView *)candidateBar;
-(TUICandidateView *)inlineView;
-(id<UIKeyboardCandidateControllerDelegate>)delegate;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6 ;
-(UIKeyboardCandidateViewState *)extendedBarState;
-(void)setBarState:(UIKeyboardCandidateViewState *)arg1 ;
-(void)updateOpacitiesToState:(id)arg1 ;
-(void)setInlineViewContainer:(UIKeyboardCandidateInlineFloatingView *)arg1 ;
-(BOOL)shouldShowDisambiguationCandidates;
-(void)candidateViewWillBeginDragging:(id)arg1 ;
-(void)setAdditionalExtendedBarBackdropOffset:(double)arg1 ;
-(BOOL)hasCandidates;
-(void)loadDefaultStates;
-(void)setActiveViews:(NSMutableArray *)arg1 ;
-(void)setInlineConfiguration:(UIKeyboardCandidateViewConfiguration *)arg1 ;
-(BOOL)barIsExtended;
-(void)collapse;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(double)candidateBarHeight;
-(void)toggleInlineViewExtendedAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInlineRect:(CGRect)arg1 ;
-(BOOL)shouldShowDisambiguationCandidatesInExtendedView;
-(void)candidateViewDidTapInlineText:(id)arg1 ;
-(void)setInlineViewState:(UIKeyboardCandidateViewState *)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(void)setDarkKeyboardChanged:(BOOL)arg1 ;
-(void)setScreenTraits:(UIKBScreenTraits *)arg1 ;
-(BOOL)inlineViewIsExtended;
-(void)updateStatesForBar;
-(BOOL)handleTabKeyWithShift:(BOOL)arg1 ;
-(UIKeyboardCandidateViewConfiguration *)inlineConfiguration;
-(UIKeyboardCandidateViewConfiguration *)keyConfiguration;
-(void)setInlineText:(NSString *)arg1 ;
-(void)setDelegate:(id<UIKeyboardCandidateControllerDelegate>)arg1 ;
-(id)loadCandidateBar;
-(void)setBarConfiguration:(UIKeyboardCandidateViewConfiguration *)arg1 ;
-(NSArray *)activeCandidateViews;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(void)clearCurrentCandidate;
-(void)setOpacities:(NSDictionary *)arg1 ;
-(id)statisticsIdentifier;
-(void)candidatesDidChange;
-(double)additionalExtendedBarBackdropOffset;
-(void)setActiveCandidateViewType:(long long)arg1 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(id)keyboardBehaviors;
-(BOOL)isExtended;
-(BOOL)darkKeyboard;
-(long long)candidateViewTypeForView:(id)arg1 ;
-(void)setCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(id)newCandidateKeyWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(id)loadInlineCandidateView;
-(BOOL)inlineRectIsVertical;
-(UIKeyboardCandidateViewConfiguration *)barConfiguration;
-(NSString *)inlineText;
-(unsigned long long)selectedSortIndex;
-(void)setupAnimatorWithCurve:(long long)arg1 ;
-(double)rowHeightForBarForOrientation:(long long)arg1 ;
-(BOOL)handleNumberKey:(unsigned long long)arg1 ;
-(NSMutableArray *)activeViews;
-(TIKeyboardCandidate *)currentCandidate;
-(TUICandidateView *)key;
-(void)setInlineRectIsVertical:(BOOL)arg1 ;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(void)updateStates;
-(void)updateStatesForInlineView;
-(long long)activeCandidateViewType;
-(void)setInlineView:(TUICandidateView *)arg1 ;
-(void)toggleBarExtendedWithAnimator:(id)arg1 ;
-(id)secureCandidateRenderTraits;
-(BOOL)showCandidate:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(void)showCandidateAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(id)firstNonEmptyActiveCandidateView;
-(UIKBScreenTraits *)screenTraits;
-(void)setSplitGap:(double)arg1 ;
-(void)setExtendedScrolledBarState:(UIKeyboardCandidateViewState *)arg1 ;
-(void)resetSortControlIndexAfterCandidatesChanged;
-(void)toggleBarExtended;
-(void)removeInlineView;
-(void)setSingleSlottedCellMargin:(double)arg1 ;
-(void)updateStatesForKey;
-(double)singleSlottedCellMargin;
-(void)acceptSelectedCandidate;
-(void)setBar:(TUICandidateView *)arg1 ;
-(void)setExtendedInlineViewState:(UIKeyboardCandidateViewState *)arg1 ;
-(long long)layoutDirectionForCurrentInputMode;
-(BOOL)reuseArrowButtonToExpandAssistantBarItems;
-(id)candidateAtIndex:(unsigned long long)arg1 ;
-(BOOL)darkKeyboardChanged;
-(UIKeyboardCandidateViewState *)extendedInlineViewState;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(id)candidates;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(TIKeyboardCandidateResultSet *)candidateResultSet;
-(void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4 generateFeedback:(BOOL)arg5 ;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(BOOL)adjustForLeftHandBias;
-(void)updateConfigurations;
-(BOOL)showCandidate:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(double)candidateBarHeightForOrientation:(long long)arg1 ;
-(void)updateStyles;
-(UIKeyboardCandidateViewState *)barState;
-(BOOL)shouldShowSortControlForConfiguration:(id)arg1 ;
-(void)setKeyConfiguration:(UIKeyboardCandidateViewConfiguration *)arg1 ;
-(UIKeyboardCandidateInlineFloatingView *)inlineViewContainer;
-(void)setCurrentCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)candidateViewNeedsToExpand:(id)arg1 ;
-(void)setKey:(TUICandidateView *)arg1 ;
-(BOOL)isFloatingList;
-(long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1 ;
-(void)setAdjustForLeftHandBias:(BOOL)arg1 ;
-(UIKeyboardCandidateViewState *)inlineViewState;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(CGRect)inlineRect;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(void)setDarkKeyboard:(BOOL)arg1 ;
-(UIKeyboardCandidateViewState *)extendedScrolledBarState;
-(NSDictionary *)opacities;
-(void)candidateViewSelectionDidChange:(id)arg1 inGridType:(long long)arg2 ;
@end

