/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)subtype;
-(void)_registerForTerminalEvent:(id)arg1 ;
-(id)pressesForGestureRecognizer:(id)arg1 ;
-(void)set_triggeringPhysicalButton:(UIPress *)arg1 ;
-(id)_windows;
-(void)_addGesturesForPress:(id)arg1 ;
-(id)description;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2 ;
-(id)_directionalPressWithStrongestForce;
-(void)_unregisterForTerminalEvent:(id)arg1 ;
-(id)_terminalRegistrantsForPressType:(long long)arg1 ;
-(id)physicalButtonsForWindow:(id)arg1 ;
-(NSSet *)allPresses;
-(id)_physicalButtonsForResponder:(id)arg1 ;
-(long long)type;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 ;
-(id)_cloneEvent;
-(id)_init;
-(void)_cleanupAfterDispatch;
-(void)_removePhysicalButton:(id)arg1 ;
-(UIPress *)_triggeringPhysicalButton;
-(void)_addPress:(id)arg1 forDelayedDelivery:(BOOL)arg2 ;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(id)_allPresses;
-(id)_respondersForWindow:(id)arg1 ;
-(id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
@end

