/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate.h>
#import <UIKit/UISelectionInteractionAssistant.h>

@class UIView, UILongPressGestureRecognizer, UITapAndAHalfRecognizer, UITextInteraction, _UIKeyboardTextSelectionController, _UIKeyboardBasedNonEditableTextSelectionGestureController, UIWebSelectionView, UIWebSelection, NSString, UIKeyboardTaskQueue;

@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate, _UIKeyboardTextSelectionGestureControllerDelegate, UISelectionInteractionAssistant> {

	UIView* _view;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapAndAHalfRecognizer* _tapAndAHalfGestureRecognizer;
	UILongPressGestureRecognizer* _forcePressGestureRecognizer;
	UITextInteraction* _textInteractions;
	_UIKeyboardTextSelectionController* _textSelectionController;
	_UIKeyboardBasedNonEditableTextSelectionGestureController* _textSelectionGestureController;
	BOOL _enabled;
	UIWebSelectionView* _selectionView;

}

@property (nonatomic,readonly) UIWebSelection * selection; 
@property (nonatomic,readonly) UIView * view;                                                             //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIWebSelectionView * selectionView;                                          //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,readonly) CGRect selectionFrame; 
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                   //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * forcePressGestureRecognizer;                  //@synthesize forcePressGestureRecognizer=_forcePressGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController;              //@synthesize textSelectionController=_textSelectionController - In the implementation block
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
-(void)tap:(id)arg1 ;
-(BOOL)enabled;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(UIKeyboardTaskQueue *)taskQueue;
-(void)didRotate:(id)arg1 ;
-(void)setSelectionView:(UIWebSelectionView *)arg1 ;
-(void)showSelectionCommands;
-(void)setGestureRecognizers;
-(void)initializeSelectionView;
-(void)hideCallout;
-(void)makeWebSelection:(id)arg1 ;
-(void)addSelectionViewIfNeeded;
-(void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)arg1 ;
-(CGRect)selectionFrame;
-(void)willStartScrollingOrZoomingPage;
-(void)didEndScrollingOrZoomingPage;
-(void)_addOneFingerForceGestures:(id)arg1 toView:(id)arg2 ;
-(BOOL)isSelectionGestureRecognizer:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 fromView:(id)arg3 ;
-(UILongPressGestureRecognizer *)forcePressGestureRecognizer;
-(void)setForcePressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)configureForSelectionMode;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(void)willStartScrollingOverflow;
-(void)willBeginGesture;
-(void)updateSelectionRects:(BOOL)arg1 ;
-(void)rangedMagnifierWithState:(long long)arg1 atPoint:(CGPoint)arg2 ;
-(UIView *)view;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UIWebSelection *)selection;
-(UIWebSelectionView *)selectionView;
-(void)resignedFirstResponder;
-(void)willRotate:(id)arg1 ;
-(void)clearSelection;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)addGestureRecognizersToView:(id)arg1 ;
-(BOOL)hasSelectablePositionAtPoint:(CGPoint)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)configureForHighlightMode;
-(id)scrollView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)layoutChangedByScrolling:(BOOL)arg1 ;
-(void)selectionChanged;
-(void)dealloc;
-(void)scaleChanged;
-(void)didEndScrollingOverflow;
@end

