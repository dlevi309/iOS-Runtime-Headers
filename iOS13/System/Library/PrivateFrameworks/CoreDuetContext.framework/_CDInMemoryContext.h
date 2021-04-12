/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <libobjc.A.dylib/_CDLocalContext.h>
#import <libobjc.A.dylib/_CDContextInternal.h>

@protocol OS_dispatch_queue, OS_dispatch_workloop;
@class NSString, NSObject, NSMutableDictionary, _CDContextualLocationRegistrationMonitor, _CDSystemTimeCallbackScheduler, _CDDevice;

@interface _CDInMemoryContext : NSObject <_CDLocalContext, _CDContextInternal> {

	NSString* _deviceID;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_workloop> _callbackWorkloop;
	NSMutableDictionary* _context;
	_CDContextualLocationRegistrationMonitor* _locationRegistrationMonitor;
	NSMutableDictionary* _registrations;
	_CDSystemTimeCallbackScheduler* _systemTimeCallbackScheduler;
	_CDDevice* _device;

}

@property (nonatomic,retain) NSString * deviceID;                                                                 //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                                              //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_workloop> callbackWorkloop;                                    //@synthesize callbackWorkloop=_callbackWorkloop - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * context;                                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) _CDContextualLocationRegistrationMonitor * locationRegistrationMonitor;              //@synthesize locationRegistrationMonitor=_locationRegistrationMonitor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registrations;                                                 //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,retain) _CDSystemTimeCallbackScheduler * systemTimeCallbackScheduler;                        //@synthesize systemTimeCallbackScheduler=_systemTimeCallbackScheduler - In the implementation block
@property (nonatomic,retain) _CDDevice * device;                                                                  //@synthesize device=_device - In the implementation block
+(id)context;
+(id)contextWithDeviceID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSMutableDictionary *)context;
-(void)setContext:(NSMutableDictionary *)arg1 ;
-(_CDDevice *)device;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setDevice:(_CDDevice *)arg1 ;
-(NSMutableDictionary *)registrations;
-(void)receiveSystemTimeCallback:(id)arg1 ;
-(void)locationCoordinatorCircularRegionsDidChange:(id)arg1 ;
-(void)unsafe_evalutateRegistrationPredicate:(id)arg1 previousContextValue:(id)arg2 date:(id)arg3 keyPath:(id)arg4 ;
-(void)unsafe_registerFutureSystemTimeBasedCallbacksForRegistrations:(id)arg1 date:(id)arg2 ;
-(void)evalutateRegistrationPredicatesWithPreviousContextValue:(id)arg1 date:(id)arg2 keyPath:(id)arg3 ;
-(id)unsafe_evaluatedContextWithRegistration:(id)arg1 date:(id)arg2 ;
-(void)unsafe_evalutateRegistrationPredicatesWithPreviousContextValue:(id)arg1 date:(id)arg2 keyPath:(id)arg3 ;
-(id)unsafe_setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2 ;
-(id)objectForContextualKeyPath:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(id)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 valueDidChange:(BOOL*)arg4 ;
-(void)unsafe_deregisterCallback:(id)arg1 ;
-(void)unsafe_registerFutureSystemTimeBasedCallbacksForRegistration:(id)arg1 date:(id)arg2 ;
-(_CDContextualLocationRegistrationMonitor *)locationRegistrationMonitor;
-(void)addCallback:(id)arg1 forKeyPath:(id)arg2 ;
-(void)unsafe_deregisterForSystemTimeBasedCallbacksForRegistration:(id)arg1 ;
-(_CDSystemTimeCallbackScheduler *)systemTimeCallbackScheduler;
-(BOOL)hasKnowledgeOfContextualKeyPath:(id)arg1 ;
-(id)lastModifiedDateForContextualKeyPath:(id)arg1 ;
-(void)registerCallback:(id)arg1 ;
-(void)deregisterCallback:(id)arg1 ;
-(BOOL)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 ;
-(BOOL)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 ;
-(BOOL)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 ;
-(id)propertiesForContextualKeyPath:(id)arg1 ;
-(id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2 ;
-(void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(BOOL)evaluatePredicate:(id)arg1 date:(id)arg2 ;
-(id)allRegistrations;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_workloop>)callbackWorkloop;
-(void)setCallbackWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(void)setLocationRegistrationMonitor:(_CDContextualLocationRegistrationMonitor *)arg1 ;
-(void)setRegistrations:(NSMutableDictionary *)arg1 ;
-(void)setSystemTimeCallbackScheduler:(_CDSystemTimeCallbackScheduler *)arg1 ;
@end

