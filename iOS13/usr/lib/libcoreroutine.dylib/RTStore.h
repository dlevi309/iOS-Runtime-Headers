/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@class NSMutableDictionary, RTInvocationDispatcher, RTPersistenceManager;

@interface RTStore : RTService {

	NSMutableDictionary* _contexts;
	RTInvocationDispatcher* _dispatcher;
	unsigned long long _availability;
	RTPersistenceManager* _persistenceManager;

}

@property (nonatomic,retain) NSMutableDictionary * contexts;                         //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                    //@synthesize dispatcher=_dispatcher - In the implementation block
@property (assign,nonatomic) unsigned long long availability;                        //@synthesize availability=_availability - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;              //@synthesize persistenceManager=_persistenceManager - In the implementation block
+(id)availabilityToString:(unsigned long long)arg1 ;
+(id)contextTypeToString:(unsigned long long)arg1 ;
-(id)init;
-(NSMutableDictionary *)contexts;
-(void)setContexts:(NSMutableDictionary *)arg1 ;
-(unsigned long long)availability;
-(void)setAvailability:(unsigned long long)arg1 ;
-(void)_shutdown;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)storeWritableObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeAll:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)purgePredating:(id)arg1 predicateMappings:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_performBlock:(/*^block*/id)arg1 contextType:(unsigned long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)initWithPersistenceManager:(id)arg1 ;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(void)fetchAvailabilityWithHandler:(/*^block*/id)arg1 ;
-(void)updateWritableObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)enumerateType:(Class)arg1 fetchRequest:(id)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(void)onPersistenceManagerNotification:(id)arg1 ;
-(void)_setupContextsHandler:(/*^block*/id)arg1 ;
-(void)_onPersistenceManagerNotification:(id)arg1 ;
-(void)_storeWritableObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_updateWritableObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeAll:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)executeDeleteRequests:(id)arg1 context:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_purgePredating:(id)arg1 predicateMappings:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchReadableObjectsOfType:(Class)arg1 fetchRequest:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchReadableObjectsOfType:(Class)arg1 fetchRequest:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

