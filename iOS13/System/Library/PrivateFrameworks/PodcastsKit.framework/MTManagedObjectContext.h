/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <CoreData/NSManagedObjectContext.h>

@interface MTManagedObjectContext : NSManagedObjectContext {

	long long _type;

}

@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)reset;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)objectWithID:(id)arg1 ;
-(void)insertObject:(id)arg1 ;
-(id)objectRegisteredForID:(id)arg1 ;
-(void)deleteObject:(id)arg1 ;
-(void)validateConcurencyType;
-(BOOL)handleError:(id*)arg1 withCallback:(/*^block*/id)arg2 ;
-(BOOL)_isInternalCoreDataQueue;
-(void)seedCacheWithObjectsInEntity:(id)arg1 predicate:(id)arg2 ;
-(void)seedCacheWithObjectsInEntity:(id)arg1 predicateFormat:(id)arg2 ;
-(void)seedCacheWithObjectsInArray:(id)arg1 forUUIDKey:(id)arg2 entityName:(id)arg3 ;
@end

