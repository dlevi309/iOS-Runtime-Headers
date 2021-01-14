/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <libobjc.A.dylib/_CDContextPersisting.h>

@protocol OS_dispatch_queue;
@class NSObject, _DKCoreDataStorage, NSCountedSet;

@interface _CDCoreDataContextPersisting : NSObject <_CDContextPersisting> {

	NSObject*<OS_dispatch_queue> _queue;
	_DKCoreDataStorage* _storage;
	NSCountedSet* _keyPathRegistrationCount;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) _DKCoreDataStorage * storage;                         //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSCountedSet * keyPathRegistrationCount;              //@synthesize keyPathRegistrationCount=_keyPathRegistrationCount - In the implementation block
+(id)persistenceWithStorage:(id)arg1 ;
+(id)persistenceWithDirectory:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(id)getMOC;
-(_DKCoreDataStorage *)storage;
-(void)saveRegistration:(id)arg1 ;
-(id)loadRegistrations;
-(void)deleteDataCreatedBefore:(id)arg1 ;
-(void)deleteAllData;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)loadValues;
-(BOOL)_withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 insert:(BOOL)arg3 update:(/*^block*/id)arg4 ;
-(id)uniquenessPredicateForKeyPath:(id)arg1 ;
-(void)_deleteKeyPaths:(id)arg1 ;
-(BOOL)withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 insertOrUpdate:(/*^block*/id)arg3 ;
-(BOOL)fromEntityWithName:(id)arg1 deleteObjectsMatching:(id)arg2 ;
-(id)uniqunessPredicateForRegistration:(id)arg1 ;
-(BOOL)withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 update:(/*^block*/id)arg3 ;
-(BOOL)fromEntityWithName:(id)arg1 fetchAllObjectsMatchingPredicate:(id)arg2 handlingMOs:(/*^block*/id)arg3 ;
-(NSCountedSet *)keyPathRegistrationCount;
-(void)deleteRegistration:(id)arg1 ;
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2 ;
@end

