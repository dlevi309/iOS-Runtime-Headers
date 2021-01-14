/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoreDataKeyedArchivingDelegate.h>

@class NSManagedObjectContext, NSXPCStoreConnectionInfo;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {

	NSManagedObjectContext* _context;
	NSXPCStoreConnectionInfo* _info;
	id _manager;

}
-(id)entitlements;
-(BOOL)_allowCoreDataFutures;
-(void)setUserInfo:(id)arg1 ;
-(id)managedObjectContext;
-(id)persistentStoreCoordinator;
-(id)userInfo;
-(id)cache;
-(SCD_Struct_NS6)auditToken;
-(id)notificationManager;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(void)setManagedObjectContext:(id)arg1 ;
-(id)description;
-(void)setNotificationManager:(id)arg1 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)initWithConnectionInfo:(id)arg1 ;
-(void)dealloc;
@end

