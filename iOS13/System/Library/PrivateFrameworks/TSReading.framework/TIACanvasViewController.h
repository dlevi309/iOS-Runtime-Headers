/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSWPiOSCanvasViewController.h>

@class UIGestureRecognizer, TSAInteractiveCanvasController;

@interface TIACanvasViewController : TSWPiOSCanvasViewController

@property (assign) UIGestureRecognizer * hyperlinkGestureRecognizer; 
@property (nonatomic,readonly) TSAInteractiveCanvasController * interactiveCanvasController; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(TSAInteractiveCanvasController *)interactiveCanvasController;
-(void)setUpGestureRecognizers;
-(id)commonGestureRecognizers;
-(UIGestureRecognizer *)hyperlinkGestureRecognizer;
-(BOOL)wantsHyperlinkGestureRecognizer;
-(id)p_LocalGestureRecognizers;
-(void)setHyperlinkGestureRecognizer:(UIGestureRecognizer *)arg1 ;
@end

