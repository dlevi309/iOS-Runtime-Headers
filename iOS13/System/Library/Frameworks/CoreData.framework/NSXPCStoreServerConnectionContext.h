/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)userInfo;
-(SCD_Struct_NS5)auditToken;
-(void)setUserInfo:(id)arg1 ;
-(id)entitlements;
-(id)cache;
-(id)persistentStoreCoordinator;
-(id)managedObjectContext;
-(BOOL)_allowCoreDataFutures;
-(id)initWithConnectionInfo:(id)arg1 ;
-(void)setManagedObjectContext:(id)arg1 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)notificationManager;
-(void)setNotificationManager:(id)arg1 ;
@end

