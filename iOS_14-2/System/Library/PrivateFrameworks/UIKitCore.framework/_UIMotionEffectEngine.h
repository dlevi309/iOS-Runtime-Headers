/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMotionEffectEventConsumer.h>

@class _UIAssociationTable, _UILazyMapTable, NSMapTable, _UIMotionEffectEventProvider, _UIMotionEffectEvent, CADisplayLink, NSMutableSet, NSArray, NSString;

@interface _UIMotionEffectEngine : NSObject <_UIMotionEffectEventConsumer> {

	_UIAssociationTable* _effectViewAssociationTable;
	_UILazyMapTable* _analyzerSettingsToAnalyzers;
	NSMapTable* _analyzersToEffects;
	NSMapTable* _suspendedViewsToEffectSets;
	_UIMotionEffectEventProvider* _eventProvider;
	BOOL _hasReceivedAtLeastOneEventSinceStarting;
	_UIMotionEffectEvent* _pendingEvent;
	os_unfair_lock_s _pendingEventLock;
	CADisplayLink* _displayLink;
	BOOL _generatingUpdates;
	NSMutableSet* _suspendReasons;
	_UIMotionEffectEvent* _lastEvent;
	BOOL _slowUpdatesEnabled;
	BOOL _pendingSlowDown;
	long long _eventProviderStatus;
	BOOL _allAnalyzersAreCentered;
	BOOL _hasAppliedAtLeastOneUpdateSinceStarting;
	BOOL _isPendingReset;
	int _thermalNotificationToken;
	int _screenDimmingNotificationToken;
	long long _targetInterfaceOrientation;

}

@property (assign,setter=_setTargetInterfaceOrientation:,nonatomic) long long _targetInterfaceOrientation;              //@synthesize targetInterfaceOrientation=_targetInterfaceOrientation - In the implementation block
@property (nonatomic,readonly) NSArray * suspensionReasons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_analyzerClass;
+(BOOL)_motionEffectsSupported;
+(Class)_eventProviderClass;
+(BOOL)_motionEffectsEnabled;
-(void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2 ;
-(id)init;
-(void)_handleLatestDeviceMotion;
-(BOOL)_shouldGenerateUpdates;
-(void)_startGeneratingUpdates;
-(void)_setTargetInterfaceOrientation:(long long)arg1 ;
-(void)_startOrStopGeneratingUpdates;
-(void)_unregisterAllMotionEffectsForView:(id)arg1 ;
-(NSString *)debugDescription;
-(void)_updateDisplayLinkInterval;
-(void)endSuspendingMotionEffectsForView:(id)arg1 ;
-(void)resetMotionAnalysis;
-(id)_motionEffectsForView:(id)arg1 ;
-(BOOL)_motionEffectsAreSuspendedForView:(id)arg1 ;
-(BOOL)_motionEffect:(id)arg1 belongsToView:(id)arg2 ;
-(void)updateWithEvent:(id)arg1 ;
-(void)_applyEffectsFromAnalyzer:(id)arg1 ;
-(void)beginSuspendingForReason:(id)arg1 ;
-(long long)_targetInterfaceOrientation;
-(void)endSuspendingForReason:(id)arg1 ;
-(void)_toggleSlowUpdates;
-(void)_stopGeneratingUpdates;
-(NSArray *)suspensionReasons;
-(void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2 ;
-(void)_unapplyAllEffects;
-(void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2 ;
-(BOOL)_isSuspended;
-(void)beginSuspendingMotionEffectsForView:(id)arg1 ;
-(void)updateEventProviderStatus:(long long)arg1 ;
-(void)dealloc;
-(BOOL)_hasMotionEffectsForView:(id)arg1 ;
@end

