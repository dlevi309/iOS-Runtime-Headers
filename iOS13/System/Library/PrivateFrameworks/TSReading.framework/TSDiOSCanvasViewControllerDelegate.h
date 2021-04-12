/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDiOSCanvasViewControllerDelegate <NSObject>
@optional
-(id)viewForGestureRecognizer:(id)arg1;
-(BOOL)allowTouchOutsideCanvasView:(id)arg1 forGesture:(id)arg2;
-(BOOL)shouldIgnoreTextGestures;
-(Class)canvasViewClassOverride;
-(BOOL)isPopoverGestureInFlight;
-(BOOL)allowEditMenuToAppear;
-(BOOL)inFindReplaceMode;
-(void)handleFindTapAtPoint:(CGPoint)arg1;
-(BOOL)canvasViewController:(id)arg1 shouldBeginTapHoldDragAtPoint:(CGPoint)arg2;
-(BOOL)canvasViewControllerShouldShowScaleFeedback:(id)arg1;
-(id)backgroundColorForDragUIPlatter;
-(BOOL)canvasViewController:(id)arg1 enableSwipeGestureWithNumberOfTouches:(unsigned long long)arg2;
-(id)viewControllerForPresentingAnnotationAuthorUI;

@end

