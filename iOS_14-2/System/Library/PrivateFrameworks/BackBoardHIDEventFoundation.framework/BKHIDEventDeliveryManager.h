/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKHIDEventClientDelegate.h>

@protocol BKHIDEventDeliveryResolutionObserver;
@class BKSHIDEventDisplay, BKSHIDEventAuthenticationKeyRing, NSMutableArray, BSMutableIntegerMap, NSSet, NSMutableDictionary, NSString;

@interface BKHIDEventDeliveryManager : NSObject <BKHIDEventClientDelegate> {

	os_unfair_lock_s _lock;
	BOOL _observeClientDeath;
	BKSHIDEventDisplay* _mainDisplay;
	BKSHIDEventAuthenticationKeyRing* _authenticationKeyRing;
	NSMutableArray* _deliveryRoots;
	NSMutableArray* _keyCommandDeliveryRoots;
	BSMutableIntegerMap* _deferringRulesByPID;
	BSMutableIntegerMap* _clientsByPID;
	NSSet* _deferringResolutions;
	NSMutableDictionary* _destinationCacheBySender;
	id<BKHIDEventDeliveryResolutionObserver> _resolutionObserver;

}

@property (nonatomic,retain) NSMutableArray * deliveryRoots;                                           //@synthesize deliveryRoots=_deliveryRoots - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyCommandDeliveryRoots;                                 //@synthesize keyCommandDeliveryRoots=_keyCommandDeliveryRoots - In the implementation block
@property (nonatomic,retain) BSMutableIntegerMap * deferringRulesByPID;                                //@synthesize deferringRulesByPID=_deferringRulesByPID - In the implementation block
@property (nonatomic,retain) BSMutableIntegerMap * clientsByPID;                                       //@synthesize clientsByPID=_clientsByPID - In the implementation block
@property (nonatomic,retain) NSSet * deferringResolutions;                                             //@synthesize deferringResolutions=_deferringResolutions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * destinationCacheBySender;                           //@synthesize destinationCacheBySender=_destinationCacheBySender - In the implementation block
@property (nonatomic,retain) id<BKHIDEventDeliveryResolutionObserver> resolutionObserver;              //@synthesize resolutionObserver=_resolutionObserver - In the implementation block
@property (assign,nonatomic) BOOL observeClientDeath;                                                  //@synthesize observeClientDeath=_observeClientDeath - In the implementation block
@property (nonatomic,retain) BKSHIDEventDisplay * mainDisplay;                                         //@synthesize mainDisplay=_mainDisplay - In the implementation block
@property (nonatomic,readonly) BKSHIDEventAuthenticationKeyRing * authenticationKeyRing;               //@synthesize authenticationKeyRing=_authenticationKeyRing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_lock_bundleIdentifierForPID:(int)arg1 ;
-(id)destinationsForEvent:(IOHIDEventRef)arg1 sender:(id)arg2 ;
-(id)_destinationFromTarget:(id)arg1 display:(id)arg2 environment:(id)arg3 ;
-(id)init;
-(id)_lock_clientWithPID:(int)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_lock_setDispatchingRuleSets:(id)arg1 forClientWithPID:(int)arg2 ;
-(id)_lock_allRootResolutions;
-(void)setDeferringRules:(id)arg1 forClientWithPID:(int)arg2 ;
-(void)setKeyCommandDispatchingRules:(id)arg1 forClientWithPID:(int)arg2 ;
-(void)_lock_notifyObserversOfResolutionUpdates:(/*^block*/id)arg1 ;
-(BKSHIDEventDisplay *)mainDisplay;
-(id)destinationsStartingFromPID:(int)arg1 deferringPredicate:(id)arg2 ;
-(NSMutableDictionary *)destinationCacheBySender;
-(void)_lock_setKeyCommandsRegistrations:(id)arg1 forClientWithPID:(int)arg2 ;
-(id)_lock_dispatchingRuleInDeliveryRoot:(id)arg1 matchingDescriptor:(id)arg2 sender:(id)arg3 ;
-(void)setClientsByPID:(BSMutableIntegerMap *)arg1 ;
-(BKSHIDEventAuthenticationKeyRing *)authenticationKeyRing;
-(NSMutableArray *)keyCommandDeliveryRoots;
-(void)setObserveClientDeath:(BOOL)arg1 ;
-(BSMutableIntegerMap *)clientsByPID;
-(id)initWithObserverService:(id)arg1 ;
-(void)_lock_setKeyCommandDispatchingRules:(id)arg1 forClientWithPID:(int)arg2 ;
-(void)setDestinationCacheBySender:(NSMutableDictionary *)arg1 ;
-(void)setKeyCommandDeliveryRoots:(NSMutableArray *)arg1 ;
-(id)_lock_canonicalDisplayForEventSender:(id)arg1 ;
-(void)setDispatchingRuleSets:(id)arg1 forClientWithPID:(int)arg2 ;
-(id<BKHIDEventDeliveryResolutionObserver>)resolutionObserver;
-(void)setDeferringResolutions:(NSSet *)arg1 ;
-(void)setResolutionObserver:(id<BKHIDEventDeliveryResolutionObserver>)arg1 ;
-(void)clientDied:(id)arg1 ;
-(id)_lock_resolveDeferringChainForPID:(int)arg1 display:(id)arg2 environment:(id)arg3 targetOrder:(out id*)arg4 ;
-(void)_lock_setDeferringRules:(id)arg1 forClientWithPID:(int)arg2 ;
-(void)setKeyCommandsRegistrations:(id)arg1 forClientWithPID:(int)arg2 ;
-(void)setMainDisplay:(BKSHIDEventDisplay *)arg1 ;
-(id)_lock_selectNextDeferringRuleForPID:(int)arg1 display:(id)arg2 environment:(id)arg3 token:(id)arg4 incomplete:(BOOL*)arg5 ignoreRulesWithTargets:(id)arg6 ;
-(BOOL)observeClientDeath;
-(void)setDeferringRulesByPID:(BSMutableIntegerMap *)arg1 ;
-(id)destinationsForKeyCommand:(id)arg1 sender:(id)arg2 ;
-(void)setDeliveryRoots:(NSMutableArray *)arg1 ;
-(NSSet *)deferringResolutions;
-(id)_lock_destinationsForKeyCommand:(id)arg1 sender:(id)arg2 ;
-(long long)_registration:(id)arg1 containsMatchForKeyCommand:(id)arg2 ;
-(BSMutableIntegerMap *)deferringRulesByPID;
-(NSMutableArray *)deliveryRoots;
-(void)dealloc;
@end

