/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/CKBrowserDragViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKBrowserDragControllerDelegate, CKBrowserDragControllerTranscriptDelegate;
@class UILongPressGestureRecognizer, UIView, CKBrowserDragViewController, UIWindow, UIViewController, NSString;

@interface CKBrowserDragManager : NSObject <CKBrowserDragViewControllerDelegate, UIGestureRecognizerDelegate> {

	id<CKBrowserDragControllerDelegate> _delegate;
	id<CKBrowserDragControllerTranscriptDelegate> _transcriptDelegate;
	id _currentItem;
	UILongPressGestureRecognizer* _gestureRecognizer;
	UIView* _targetView;
	CKBrowserDragViewController* _dragViewController;
	UIWindow* _dragWindow;
	UIViewController* _presentingViewController;
	CGPoint _locationInView;

}

@property (nonatomic,retain) id currentItem;                                                                       //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * gestureRecognizer;                                     //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint locationInView;                                                               //@synthesize locationInView=_locationInView - In the implementation block
@property (nonatomic,retain) UIView * targetView;                                                                  //@synthesize targetView=_targetView - In the implementation block
@property (nonatomic,retain) CKBrowserDragViewController * dragViewController;                                     //@synthesize dragViewController=_dragViewController - In the implementation block
@property (nonatomic,retain) UIWindow * dragWindow;                                                                //@synthesize dragWindow=_dragWindow - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;                                          //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserDragControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserDragControllerTranscriptDelegate> transcriptDelegate;              //@synthesize transcriptDelegate=_transcriptDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CKBrowserDragControllerDelegate>)delegate;
-(void)setDelegate:(id<CKBrowserDragControllerDelegate>)arg1 ;
-(void)setCurrentItem:(id)arg1 ;
-(id)currentItem;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
-(void)setGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)tapRecognized:(id)arg1 ;
-(void)beginDraggingItem:(id)arg1 withAnimatedDragImage:(id)arg2 fromRect:(CGRect)arg3 ;
-(BOOL)usesSeparateDragWindow;
-(void)setDragWindow:(UIWindow *)arg1 ;
-(void)setDragViewController:(CKBrowserDragViewController *)arg1 ;
-(id<CKBrowserDragControllerTranscriptDelegate>)transcriptDelegate;
-(CKBrowserDragViewController *)dragViewController;
-(void)setLocationInView:(CGPoint)arg1 ;
-(UIWindow *)dragWindow;
-(void)browserDragViewController:(id)arg1 draggedWithTarget:(id)arg2 ;
-(void)browserDragViewController:(id)arg1 dragEndedWithTarget:(id)arg2 ;
-(id)initWithTargetView:(id)arg1 ;
-(void)beginDraggingItem:(id)arg1 withDragImage:(id)arg2 fromRect:(CGRect)arg3 ;
-(void)setPlusButtonHidden:(BOOL)arg1 ;
-(void)setTranscriptDelegate:(id<CKBrowserDragControllerTranscriptDelegate>)arg1 ;
-(CGPoint)locationInView;
@end

