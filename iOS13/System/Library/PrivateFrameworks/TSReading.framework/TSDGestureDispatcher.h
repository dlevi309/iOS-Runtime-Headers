/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDGestureDelegate.h>

@class TSDInteractiveCanvasController, NSMutableArray, TSUNoCopyDictionary, NSString;

@interface TSDGestureDispatcher : NSObject <TSDGestureDelegate> {

	TSDInteractiveCanvasController* _interactiveCanvasController;
	NSMutableArray* _simultaneitySets;
	TSUNoCopyDictionary* _priorityMap;
	BOOL _runningTargetHandleGesture;
	NSMutableArray* _gesturesInFlight;
	NSMutableArray* _targetsInFlight;
	BOOL _gestureDidFire;

}

@property (assign,nonatomic) TSDInteractiveCanvasController * interactiveCanvasController;              //@synthesize interactiveCanvasController=_interactiveCanvasController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)teardown;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)handleGesture:(id)arg1 ;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(void)setInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1 ;
-(void)didReset:(id)arg1 ;
-(void)gestureRemovedFromView:(id)arg1 ;
-(BOOL)gestureActionShouldBegin:(id)arg1 ;
-(id)p_getGestureTarget:(id)arg1 ;
-(void)p_gestureNoLongerInFlight:(id)arg1 ;
-(BOOL)handleGesture:(id)arg1 withTarget:(id)arg2 ;
-(void)allowSimultaneousRecognitionByRecognizers:(id)arg1 ;
-(void)prioritizeRecognizer:(id)arg1 overRecognizer:(id)arg2 ;
@end

