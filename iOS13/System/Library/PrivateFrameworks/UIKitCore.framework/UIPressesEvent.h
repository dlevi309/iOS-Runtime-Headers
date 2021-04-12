/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIEvent.h>

@class NSMutableSet, NSHashTable, UIPress, NSSet;

@interface UIPressesEvent : UIEvent {

	NSMutableSet* _allPresses;
	NSHashTable* _terminalEventRegistrants;
	UIPress* _triggeringPhysicalButton;

}

@property (nonatomic,retain) UIPress * _triggeringPhysicalButton;              //@synthesize triggeringPhysicalButton=_triggeringPhysicalButton - In the implementation block
@property (nonatomic,readonly) NSSet * allPresses; 
-(id)description;
-(long long)type;
-(id)_init;
-(long long)subtype;
-(id)_windows;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(NSSet *)allPresses;
-(void)_unregisterForTerminalEvent:(id)arg1 ;
-(void)_registerForTerminalEvent:(id)arg1 ;
-(id)_cloneEvent;
-(id)pressesForGestureRecognizer:(id)arg1 ;
-(void)_addPress:(id)arg1 forDelayedDelivery:(BOOL)arg2 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2 ;
-(UIPress *)_triggeringPhysicalButton;
-(id)_directionalPressWithStrongestForce;
-(void)set_triggeringPhysicalButton:(UIPress *)arg1 ;
-(void)_removePhysicalButton:(id)arg1 ;
-(id)_respondersForWindow:(id)arg1 ;
-(id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2 ;
-(id)_allPresses;
-(id)physicalButtonsForWindow:(id)arg1 ;
-(id)_physicalButtonsForResponder:(id)arg1 ;
-(void)_addGesturesForPress:(id)arg1 ;
-(void)_cleanupAfterDispatch;
-(id)_terminalRegistrantsForPressType:(long long)arg1 ;
@end

