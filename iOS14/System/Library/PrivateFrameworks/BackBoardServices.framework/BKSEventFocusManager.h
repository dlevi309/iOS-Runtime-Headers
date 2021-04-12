/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BKSHIDEventDeferringObserving.h>

@protocol BSInvalidatable, OS_dispatch_queue;
@class BKSHIDEventObserver, BKSHIDEventDeliveryManager, NSMutableSet, NSMutableDictionary, NSMutableArray, NSString, NSObject, NSXPCConnection, NSMapTable, NSSet;

@interface BKSEventFocusManager : NSObject <BKSHIDEventDeferringObserving> {

	BKSHIDEventObserver* _observer;
	os_unfair_lock_s _focusDataLock;
	BKSHIDEventDeliveryManager* _focusDataLock_manager;
	BOOL _focusDataLock_adjustsFocusTargetPID;
	int _focusDataLock_adjustedFocusTargetPID;
	id<BSInvalidatable> _queue_keyCommandRulesAssertion;
	NSMutableSet* _focusDataLock_currentState;
	NSMutableDictionary* _focusDataLock_pendingStatesByPriority;
	NSMutableArray* _focusDataLock_assertions;
	int _pid;
	NSString* _clientIdentifier;
	id<BSInvalidatable> _observingAssertion;
	NSObject*<OS_dispatch_queue> _focusClientQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	unsigned long long _propertyUpdateGeneration;
	BOOL _needsFlush;
	NSXPCConnection* _connection;
	NSMapTable* _infoPerFocusChangeObserver;
	NSSet* _cachedFocusedDeferralProperties;

}

@property (assign,nonatomic) BOOL needsFlush;                                      //@synthesize needsFlush=_needsFlush - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMapTable * infoPerFocusChangeObserver;              //@synthesize infoPerFocusChangeObserver=_infoPerFocusChangeObserver - In the implementation block
@property (nonatomic,retain) NSSet * cachedFocusedDeferralProperties;              //@synthesize cachedFocusedDeferralProperties=_cachedFocusedDeferralProperties - In the implementation block
@property (nonatomic,readonly) int pid;                                            //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientIdentifier;                   //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)flush;
-(void)addObserver:(id)arg1 ;
-(void)_focusClientQueue_deferringResolutionsChanged;
-(NSMapTable *)infoPerFocusChangeObserver;
-(void)_focusDataLock_updateKeyCommandDispatching;
-(void)_focusDataLock_reallyFlushWithSet:(id)arg1 ;
-(void)_focusDataLock_updateFocusTargetOverride;
-(NSSet *)cachedFocusedDeferralProperties;
-(void)_focusDataLock_rebuildPendingStatesByPriority;
-(void)setInfoPerFocusChangeObserver:(NSMapTable *)arg1 ;
-(void)setCachedFocusedDeferralProperties:(NSSet *)arg1 ;
-(int)pid;
-(id)init;
-(NSString *)description;
-(NSXPCConnection *)connection;
-(void)removeObserver:(id)arg1 ;
-(void)deferringResolutionsChanged;
-(BOOL)needsFlush;
-(NSString *)clientIdentifier;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
-(void)setNeedsFlush:(BOOL)arg1 ;
-(void)setSystemAppControlsFocusOnMainDisplay:(BOOL)arg1 ;
-(id)_initWithManager:(id)arg1 observer:(id)arg2 pid:(int)arg3 clientIdentifier:(id)arg4 ;
-(id)_queryDeferralResolutions;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 ;
-(void)_syncObserverState;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3 ;
-(void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2 ;
-(void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(/*^block*/id)arg2 ;
@end

