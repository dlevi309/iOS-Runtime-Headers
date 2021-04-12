/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSDisplayIdentity, NSMutableDictionary, NSMutableSet, NSSet, UIGestureRecognizer, SBIndirectTouchLifecycleMonitor, NSString;

@interface SBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding> {

	FBSDisplayIdentity* _displayIdentity;
	NSMutableDictionary* _typeToGesture;
	NSMutableDictionary* _gestureToType;
	NSMutableDictionary* _typeToState;
	NSMutableSet* _recognizingTouchGestures;
	NSMutableSet* _touchGestures;
	NSMutableSet* _gesturesDisabledAssertions;
	NSSet* _gestureTypesAllowedWhileDisableAssertionsExist;
	NSSet* _gesturesPreventedByStylus;
	UIGestureRecognizer* _stylusPriorityRecognizer;
	BOOL _systemGesturesDisabledForAccessibility;
	SBIndirectTouchLifecycleMonitor* _indirectTouchLifecycleMonitor;

}

@property (getter=isAnyTouchGestureRunning,nonatomic,readonly) BOOL anyTouchGestureRunning; 
@property (assign,getter=areSystemGesturesDisabledForAccessibility,nonatomic) BOOL systemGesturesDisabledForAccessibility;              //@synthesize systemGesturesDisabledForAccessibility=_systemGesturesDisabledForAccessibility - In the implementation block
@property (nonatomic,retain) NSSet * gesturesPreventedByStylus;                                                                         //@synthesize gesturesPreventedByStylus=_gesturesPreventedByStylus - In the implementation block
@property (nonatomic,retain) SBIndirectTouchLifecycleMonitor * indirectTouchLifecycleMonitor;                                           //@synthesize indirectTouchLifecycleMonitor=_indirectTouchLifecycleMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainDisplayManager;
-(BOOL)_isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)succinctDescription;
-(void)gestureRecognizerOfType:(unsigned long long)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setGesturesPreventedByStylus:(NSSet *)arg1 ;
-(id)init;
-(long long)_recognitionEventForTouchGestureType:(unsigned long long)arg1 ;
-(void)_disableSystemGesture:(id)arg1 withType:(unsigned long long)arg2 ;
-(SBIndirectTouchLifecycleMonitor *)indirectTouchLifecycleMonitor;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_systemGestureChanged:(id)arg1 ;
-(BOOL)areSystemGesturesDisabledForAccessibility;
-(BOOL)isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(NSString *)debugDescription;
-(void)_evaluateEnablement;
-(void)gestureRecognizerOfType:(unsigned long long)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(id)windowForSystemGestures;
-(NSString *)description;
-(void)setIndirectTouchLifecycleMonitor:(SBIndirectTouchLifecycleMonitor *)arg1 ;
-(void)setSystemGesturesDisabledForAccessibility:(BOOL)arg1 ;
-(BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(BOOL)isAnyTouchGestureRunning;
-(void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_initWithDisplayIdentity:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)removeGestureRecognizer:(id)arg1 ;
-(void)ignoreScreenEdgeTouchWithIdentifier:(unsigned)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_enableSystemGesture:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)_isTouchGestureWithType:(unsigned long long)arg1 ;
-(id)acquireSystemGestureDisableAssertionForReason:(id)arg1 exceptSystemGestureTypes:(id)arg2 ;
-(void)dealloc;
-(NSSet *)gesturesPreventedByStylus;
@end

