/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
*/

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <AccessibilityPlatformTranslation/AXPTranslator.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, AXUIElement;

@interface AXPTranslator_iOS : AXPTranslator {

	NSMutableDictionary* _translationCache;
	NSMutableDictionary* _backTranslationCache;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	IOHIDEventSystemClientRef _ioSystemPostBackClient;
	BOOL _axAppReadyFlag;
	BOOL _accessibilityEnabled;
	AXObserverRef _axEventObserver;
	AXUIElement* _systemAppElement;
	AXUIElement* _systemWideElement;

}

@property (nonatomic,retain) AXUIElement * systemWideElement;              //@synthesize systemWideElement=_systemWideElement - In the implementation block
@property (nonatomic,retain) AXObserverRef axEventObserver;                //@synthesize axEventObserver=_axEventObserver - In the implementation block
@property (nonatomic,retain) AXUIElement * systemAppElement;               //@synthesize systemAppElement=_systemAppElement - In the implementation block
+(id)sharedInstance;
+(id)_iosParameterFromPlatformParameter:(id)arg1 ;
+(id)translationObjectFromUIKitObject:(id)arg1 ;
-(id)init;
-(BOOL)accessibilityEnabled;
-(AXUIElement *)systemWideElement;
-(void)setAccessibilityEnabled:(BOOL)arg1 ;
-(void)setSystemWideElement:(AXUIElement *)arg1 ;
-(AXObserverRef)axEventObserver;
-(void)setAxEventObserver:(AXObserverRef)arg1 ;
-(void)_sendPressFingerEvent:(BOOL)arg1 location:(CGPoint)arg2 force:(double)arg3 contextId:(unsigned)arg4 ;
-(void)_postEvent:(id)arg1 ;
-(id)_processAccessibilityAttributeValue:(long long)arg1 ;
-(id)_processAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2 ;
-(BOOL)_processPerformAction:(int)arg1 value:(id)arg2 ;
-(void)enableAccessibility;
-(void)_initializeAccessibility;
-(const AXUIElementRef)createPlatformElementFromTranslationObject:(id)arg1 ;
-(long long)attributeFromRequest:(unsigned long long)arg1 ;
-(id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_postProcessAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 result:(id)arg4 ;
-(id)axElementFromTranslatorRequest:(id)arg1 ;
-(id)_processCustomRotorData:(id)arg1 ;
-(id)_processOutgoingCustomRotorSearchResult:(id)arg1 ;
-(id)_processParameterizedAttributeRequest:(id)arg1 attribute:(long long)arg2 parameter:(id)arg3 error:(unsigned long long*)arg4 ;
-(id)_processDirectAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 parameter:(id)arg4 error:(unsigned long long*)arg5 ;
-(id)_processChildrenAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 parameter:(id)arg3 error:(unsigned long long*)arg4 ;
-(id)_axArrayWithPossiblyNilArrays:(unsigned long long)arg1 ;
-(id)_processAttributedLabelAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processAttributedStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processClassNameAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processCustomActionsAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processBoundsForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processIsEnabledAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processIsSelectedAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processMoveFocusToOpaqueElementAttributeRequest:(id)arg1 parameter:(id)arg2 direction:(long long)arg3 error:(unsigned long long*)arg4 ;
-(id)_processNumberOfCharactersAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processRoleAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processStartsMediaSessionAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processSubroleAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processingSmuggledMarzipanRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processRawElementDataRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_preprocessRequest:(long long)arg1 parameter:(id)arg2 ;
-(id)translationObjectFromPlatformElement:(AXUIElementRef)arg1 ;
-(AXUIElement *)systemAppElement;
-(id)backTranslationCache;
-(id)translationCache;
-(/*^block*/id)attributedStringConversionBlock;
-(void)simulatePressAtPoint:(CGPoint)arg1 withContextId:(unsigned)arg2 withDelay:(float)arg3 withForce:(double)arg4 ;
-(void)initializeAXRuntimeForSystemAppServer;
-(void)_signalAppAXReady;
-(id)processMultipleAttributeRequest:(id)arg1 ;
-(id)processActionRequest:(id)arg1 ;
-(id)processCanSetAttribute:(id)arg1 ;
-(id)processSetAttribute:(id)arg1 ;
-(id)processSupportedActions:(id)arg1 ;
-(id)processAttributeRequest:(id)arg1 ;
-(id)processApplicationObject:(id)arg1 ;
-(id)processFrontMostApp:(id)arg1 ;
-(id)processHitTest:(id)arg1 ;
-(void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3 ;
-(id)platformElementFromTranslation:(id)arg1 ;
-(id)translationObjectFromData:(id)arg1 ;
-(id)remoteTranslationDataWithTranslation:(id)arg1 pid:(int)arg2 ;
-(void)setSystemAppElement:(AXUIElement *)arg1 ;
@end

