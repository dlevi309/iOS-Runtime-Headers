/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSDisplayIdentity, NSMutableDictionary, NSMutableSet, NSSet, UIGestureRecognizer, NSString;

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

}

@property (getter=isAnyTouchGestureRunning,nonatomic,readonly) BOOL anyTouchGestureRunning; 
@property (assign,getter=areSystemGesturesDisabledForAccessibility,nonatomic) BOOL systemGesturesDisabledForAccessibility;              //@synthesize systemGesturesDisabledForAccessibility=_systemGesturesDisabledForAccessibility - In the implementation block
@property (nonatomic,retain) NSSet * gesturesPreventedByStylus;                                                                         //@synthesize gesturesPreventedByStylus=_gesturesPreventedByStylus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainDisplayManager;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)windowForSystemGestures;
-(BOOL)isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)areSystemGesturesDisabledForAccessibility;
-(void)setSystemGesturesDisabledForAccessibility:(BOOL)arg1 ;
-(BOOL)isAnyTouchGestureRunning;
-(void)ignoreScreenEdgeTouchWithIdentifier:(unsigned)arg1 ;
-(void)_evaluateEnablement;
-(id)_initWithDisplayIdentity:(id)arg1 ;
-(BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(void)gestureRecognizerOfType:(unsigned long long)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)_isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(BOOL)_isTouchGestureWithType:(unsigned long long)arg1 ;
-(void)_disableSystemGesture:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(void)_enableSystemGesture:(id)arg1 withType:(unsigned long long)arg2 ;
-(void)_systemGestureChanged:(id)arg1 ;
-(long long)_recognitionEventForTouchGestureType:(unsigned long long)arg1 ;
-(void)setGesturesPreventedByStylus:(NSSet *)arg1 ;
-(void)gestureRecognizerOfType:(unsigned long long)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id)acquireSystemGestureDisableAssertionForReason:(id)arg1 exceptSystemGestureTypes:(id)arg2 ;
-(NSSet *)gesturesPreventedByStylus;
@end

