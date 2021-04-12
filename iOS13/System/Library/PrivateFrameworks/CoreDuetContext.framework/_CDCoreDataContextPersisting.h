/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)persistenceWithDirectory:(id)arg1 ;
+(id)persistenceWithStorage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(_DKCoreDataStorage *)storage;
-(id)initWithStorage:(id)arg1 ;
-(void)deleteKeyPaths:(id)arg1 ;
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)saveRegistration:(id)arg1 ;
-(void)deleteRegistration:(id)arg1 ;
-(id)loadValues;
-(id)loadRegistrations;
-(void)deleteAllData;
-(void)deleteDataCreatedBefore:(id)arg1 ;
-(NSCountedSet *)keyPathRegistrationCount;
-(id)getMOC;
-(id)uniquenessPredicateForKeyPath:(id)arg1 ;
-(BOOL)withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 insertOrUpdate:(/*^block*/id)arg3 ;
-(BOOL)fromEntityWithName:(id)arg1 deleteObjectsMatching:(id)arg2 ;
-(id)uniqunessPredicateForRegistration:(id)arg1 ;
-(BOOL)fromEntityWithName:(id)arg1 fetchAllObjectsMatchingPredicate:(id)arg2 handlingMOs:(/*^block*/id)arg3 ;
@end

