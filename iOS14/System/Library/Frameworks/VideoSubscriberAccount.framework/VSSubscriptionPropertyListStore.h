/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <CoreData/NSAtomicStore.h>

@interface VSSubscriptionPropertyListStore : NSAtomicStore
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(BOOL)load:(id*)arg1 ;
-(BOOL)save:(id*)arg1 ;
-(void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2 ;
-(id)type;
-(id)newReferenceObjectForManagedObject:(id)arg1 ;
-(id)newCacheNodeForManagedObject:(id)arg1 ;
@end

