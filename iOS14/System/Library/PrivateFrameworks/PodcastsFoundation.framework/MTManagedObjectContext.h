/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <CoreData/NSManagedObjectContext.h>

@interface MTManagedObjectContext : NSManagedObjectContext {

	BOOL _isResetable;
	long long _type;

}

@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL isResetable;              //@synthesize isResetable=_isResetable - In the implementation block
-(void)deleteObject:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)objectWithID:(id)arg1 ;
-(void)insertObject:(id)arg1 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(id)objectRegisteredForID:(id)arg1 ;
-(long long)type;
-(void)reset;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)validateConcurencyType;
-(BOOL)handleError:(id*)arg1 withCallback:(/*^block*/id)arg2 ;
-(BOOL)_isInternalCoreDataQueue;
-(void)seedCacheWithObjectsInEntity:(id)arg1 predicate:(id)arg2 ;
-(void)seedCacheWithObjectsInEntity:(id)arg1 predicateFormat:(id)arg2 ;
-(void)seedCacheWithObjectsInArray:(id)arg1 forUUIDKey:(id)arg2 entityName:(id)arg3 ;
-(BOOL)isResetable;
-(void)setIsResetable:(BOOL)arg1 ;
@end

