/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDiOSCanvasViewController.h>
#import <UIKit/UITextInteractionDelegate.h>
#import <UIKit/UITextLinkInteraction.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <libobjc.A.dylib/_UINonEditableTextSelectionForceGestureDelegate.h>

@class UIGestureRecognizer, TSWPSwipeGestureRecognizer, TSWPLongPressGestureRecognizer, TSWPTwoPartAction, NSMutableArray, TSWPHyperlinkField, TSWPRep, UITapGestureRecognizer, TSWPHardPressGestureRecognizer, UITextInteraction, TSWPInteractiveCanvasController, TSUColor, NSString;

@interface TSWPiOSCanvasViewController : TSDiOSCanvasViewController <UITextInteractionDelegate, UITextLinkInteraction, UIDragInteractionDelegate, _UINonEditableTextSelectionForceGestureDelegate> {

	UIGestureRecognizer* _hyperlinkGestureRecognizer;
	TSWPSwipeGestureRecognizer* _rightSwipeGestureRecognizer;
	TSWPSwipeGestureRecognizer* _leftSwipeGestureRecognizer;
	TSWPLongPressGestureRecognizer* _longPressGestureRecognizer;
	TSWPTwoPartAction* _delayedTapAction;
	NSMutableArray* _gestureRecognizers;
	BOOL _isInteractingWithHyperLink;
	BOOL _linkInteractionIsLongPress;
	TSWPHyperlinkField* _interactionHyperlinkField;
	TSWPRep* _interactionHyperLinkRep;
	UITapGestureRecognizer* _secondarySingleTapGestureRecognizer;
	TSWPHardPressGestureRecognizer* _hardPressGesture;
	UITextInteraction* _textInteraction;

}

@property (nonatomic,retain) TSWPHardPressGestureRecognizer * hardPressGesture;                           //@synthesize hardPressGesture=_hardPressGesture - In the implementation block
@property (readonly) TSWPInteractiveCanvasController * interactiveCanvasController; 
@property (nonatomic,retain) UITextInteraction * textInteraction;                                         //@synthesize textInteraction=_textInteraction - In the implementation block
@property (nonatomic,readonly) TSWPSwipeGestureRecognizer * textLeftSwipeGestureRecognizer;               //@synthesize leftSwipeGestureRecognizer=_leftSwipeGestureRecognizer - In the implementation block
@property (nonatomic,readonly) TSWPSwipeGestureRecognizer * textRightSwipeGestureRecognizer;              //@synthesize rightSwipeGestureRecognizer=_rightSwipeGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * secondarySingleTapGestureRecognizer;              //@synthesize secondarySingleTapGestureRecognizer=_secondarySingleTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * hyperlinkGestureRecognizer;                          //@synthesize hyperlinkGestureRecognizer=_hyperlinkGestureRecognizer - In the implementation block
@property (nonatomic,readonly) TSWPLongPressGestureRecognizer * longPressGestureRecognizer;               //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,readonly) TSUColor * backgroundColorForMagnifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)teardown;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(TSWPLongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)willBeginGesture;
-(void)cancelInteractionWithLink;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(void)_requestTextItemConstrainedToLineAtPoint:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)interactionWillBegin:(id)arg1 ;
-(void)interactionDidEnd:(id)arg1 ;
-(BOOL)interactionShouldSuppressSystemUI:(id)arg1 ;
-(BOOL)interactionShouldBegin:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)interactionShouldBegin:(id)arg1 ;
-(TSWPInteractiveCanvasController *)interactiveCanvasController;
-(id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3 ;
-(void)cancelDelayedTapAction;
-(void)gestureSequenceWillBegin;
-(void)gestureSequenceDidEnd;
-(void)setUpGestureRecognizers;
-(id)hyperlinkUICustomStringForURLString:(id)arg1 ;
-(BOOL)shouldHideCanvasLayerInMagnifier;
-(TSUColor *)backgroundColorForMagnifier;
-(UIGestureRecognizer *)hyperlinkGestureRecognizer;
-(void)startDelayedTapAction:(id)arg1 ;
-(BOOL)onlyAllowTextSwipesWhenEditing;
-(void)addSwipeGestureRecognizers;
-(void)removeSwipeGestureRecognizers;
-(BOOL)hasDelayedTapAction;
-(void)finishDelayedTapAction;
-(TSWPHardPressGestureRecognizer *)hardPressGesture;
-(void)p_handleHardPressGestureRecognizer:(id)arg1 ;
-(void)p_endHardPressGestureRecognizer;
-(void)_resetAndClearInteractions;
-(void)_clearSelectedRange;
-(void)_resetLinkInteraction;
-(id)p_newSwipeGestureRecognizerWithDirection:(int)arg1 numberOfTouchesRequired:(unsigned)arg2 ;
-(void)setUpGestureDependenciesForNewCopyOfTextGesture:(id)arg1 ;
-(void)p_addSwipeGestureRecognizer:(id)arg1 failRequiredFor:(id)arg2 ;
-(id)_dragItemsForInteraction:(id)arg1 session:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(id)_hitRepAtPoint:(CGPoint)arg1 ;
-(BOOL)_shouldAllowInteractionAtPoint:(CGPoint)arg1 ;
-(id)_hyperLinkFieldAtPoint:(CGPoint)arg1 ;
-(BOOL)canDisplayHyperlinkUI;
-(void)hyperlinkUIWillShow;
-(void)hyperlinkUIDidHide;
-(BOOL)hyperlinkUIShouldShowCustomUI;
-(BOOL)hyperlinkUIShouldShow;
-(void)hyperlinkUIShowCustomUIforRep:(id)arg1 field:(id)arg2 ;
-(TSWPSwipeGestureRecognizer *)textLeftSwipeGestureRecognizer;
-(TSWPSwipeGestureRecognizer *)textRightSwipeGestureRecognizer;
-(UITapGestureRecognizer *)secondarySingleTapGestureRecognizer;
-(void)setHardPressGesture:(TSWPHardPressGestureRecognizer *)arg1 ;
-(UITextInteraction *)textInteraction;
-(void)setTextInteraction:(UITextInteraction *)arg1 ;
@end

