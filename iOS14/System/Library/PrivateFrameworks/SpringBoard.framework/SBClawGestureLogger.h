/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSDate, NSSet, NSMutableSet;

@interface SBClawGestureLogger : NSObject {

	BOOL _didTriggerSOS;
	NSDate* _clawEventTimestamp;
	NSSet* _activePressTypes;
	NSMutableSet* _participatingPressTypes;

}
-(id)init;
-(void)noteActiveGesturePressTypes:(id)arg1 wasClawGestureActive:(BOOL)arg2 isClawGestureActive:(BOOL)arg3 ;
-(void)noteSOSTriggered;
-(void)_publishLoggedData;
-(void)_resetLoggedData;
@end

