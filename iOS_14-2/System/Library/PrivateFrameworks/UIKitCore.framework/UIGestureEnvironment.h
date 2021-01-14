/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableSet, NSMutableArray, UIGestureGraph, NSMapTable;

@interface UIGestureEnvironment : NSObject {

	CFRunLoopObserverRef _gestureEnvironmentUpdateObserver;
	NSMutableSet* _gestureRecognizersNeedingUpdate;
	NSMutableSet* _gestureRecognizersNeedingReset;
	NSMutableSet* _gestureRecognizersNeedingRemoval;
	NSMutableArray* _dirtyGestureRecognizers;
	NSMutableArray* _delayedTouches;
	NSMutableArray* _delayedTouchesToSend;
	NSMutableArray* _delayedPresses;
	NSMutableArray* _delayedPressesToSend;
	NSMutableArray* _preUpdateActions;
	BOOL _dirtyGestureRecognizersUnsorted;
	BOOL _updateExclusivity;
	BOOL _isUpdatingGestureEnvironment;
	UIGestureGraph* _dependencyGraph;
	NSMapTable* _nodesByGestureRecognizer;

}
-(id)init;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg1 ;
@end

