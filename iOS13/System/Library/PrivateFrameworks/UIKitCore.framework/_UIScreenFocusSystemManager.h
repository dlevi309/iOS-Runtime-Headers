/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/BKSHIDEventDeliveryPolicyObserving.h>
#import <UIKitCore/_UIFocusSystemDelegate.h>
#import <UIKitCore/_UIFocusMovementPerformerDelegate.h>

@class BKSHIDEventDeliveryPolicyObserver, UIScreen, UIFocusSystem, _UIFocusScrollManager, NSString;

@interface _UIScreenFocusSystemManager : NSObject <BKSHIDEventDeliveryPolicyObserving, _UIFocusSystemDelegate, _UIFocusMovementPerformerDelegate> {

	BOOL _disableFocusDeferral;
	BKSHIDEventDeliveryPolicyObserver* _observer;
	BOOL _allowsForwardingFocusMovementActions;
	UIScreen* _screen;
	UIFocusSystem* _focusSystem;
	_UIFocusScrollManager* _scrollManager;

}

@property (assign,setter=_uiktest_setAllowsForwardingFocusMovementActions:,getter=_uiktest_allowsForwardingFocusMovementActions,nonatomic) BOOL allowsForwardingFocusMovementActions;              //@synthesize allowsForwardingFocusMovementActions=_allowsForwardingFocusMovementActions - In the implementation block
@property (nonatomic,__weak,readonly) UIScreen * screen;                                                                                                                                           //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) UIFocusSystem * focusSystem;                                                                                                                                        //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,readonly) _UIFocusScrollManager * scrollManager;                                                                                                                              //@synthesize scrollManager=_scrollManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIScreen *)screen;
-(UIFocusSystem *)focusSystem;
-(id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1 ;
-(BOOL)_focusSystem:(id)arg1 prefersDeferralForFocusUpdateInContext:(id)arg2 ;
-(BOOL)_focusSystem:(id)arg1 shouldRestoreFocusInContext:(id)arg2 ;
-(void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2 ;
-(id)_focusMapContainerForFocusSystem:(id)arg1 ;
-(id)_focusItemContainerForFocusSystem:(id)arg1 ;
-(BOOL)_handleFailedFocusMovementRequest:(id)arg1 withPerformer:(id)arg2 ;
-(void)observerDeliveryPolicyDidChange:(id)arg1 ;
-(_UIFocusScrollManager *)scrollManager;
-(BOOL)_shouldForwardFocusMovementRequest:(id)arg1 ;
-(BOOL)_uiktest_allowsForwardingFocusMovementActions;
-(id)initWithScreen:(id)arg1 scrollManager:(id)arg2 ;
-(void)_uiktest_setAllowsForwardingFocusMovementActions:(BOOL)arg1 ;
@end

