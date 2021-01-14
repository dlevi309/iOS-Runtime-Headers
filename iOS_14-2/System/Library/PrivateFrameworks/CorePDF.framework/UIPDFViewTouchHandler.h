/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <UIKitCore/UIResponder.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPDFPageView, UITapGestureRecognizer, UILongPressGestureRecognizer, UIMenuController, UIPDFSelectionController, UIPDFMagnifierController, NSString;

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate> {

	UIPDFPageView* _pdfPageView;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;
	UILongPressGestureRecognizer* _briefPressRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UITapGestureRecognizer* _twoFingerTapRecognizer;
	UIMenuController* _menuController;
	UIPDFSelectionController* _selectionController;
	UIPDFMagnifierController* _magnifyController;
	BOOL _trackingSelection;
	BOOL _showMagnifier;
	BOOL _showLoupe;
	BOOL _firstTouch;
	BOOL _useDelegateForLinks;
	BOOL _allowMenu;

}

@property (assign) BOOL allowMenu;                                  //@synthesize allowMenu=_allowMenu - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)releaseViewManager;
-(void)copy:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(id)nextResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)hideMenu;
-(BOOL)canBecomeFirstResponder;
-(void)showMenu;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithView:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)enableRecognizers;
-(void)setAllowMenu:(BOOL)arg1 ;
-(void)disableRecognizers;
-(void)setFirstTouch;
-(BOOL)allowMenu;
-(void)doubleTapRecognized:(id)arg1 ;
-(void)singleTapRecognized:(id)arg1 ;
-(void)twoFingerTapRecognized:(id)arg1 ;
-(void)briefPressRecognized:(id)arg1 ;
-(void)longPressRecognized:(id)arg1 ;
-(BOOL)delegateGesture:(id)arg1 kind:(int)arg2 ;
@end

