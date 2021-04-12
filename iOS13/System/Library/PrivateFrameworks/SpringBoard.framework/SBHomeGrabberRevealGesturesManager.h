/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol OS_dispatch_queue;
@class UITapGestureRecognizer, UIScreenEdgePanGestureRecognizer, NSObject, NSHashTable, NSString;

@interface SBHomeGrabberRevealGesturesManager : NSObject <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _bounceTapRecognizer;
	UITapGestureRecognizer* _revealTapRecognizer;
	UITapGestureRecognizer* _revealDoubleTapRecognizer;
	UIScreenEdgePanGestureRecognizer* _revealEdgePanRecognizer;
	NSObject*<OS_dispatch_queue> _registrationQueue;
	NSHashTable* _registeredGrabbers;
	BOOL _gestureEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_tapRecognized:(id)arg1 ;
-(void)registerGrabber:(id)arg1 ;
-(void)unregisterGrabber:(id)arg1 ;
-(void)_edgePanChanged:(id)arg1 ;
-(BOOL)gestureRecognizerContainsPointerEvent:(id)arg1 ;
@end

