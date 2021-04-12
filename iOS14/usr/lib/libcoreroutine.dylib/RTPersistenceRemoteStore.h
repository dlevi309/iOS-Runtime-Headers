/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSPersistentStoreCoordinator, NSManagedObjectID, RTDarwinNotificationHelper;

@interface RTPersistenceRemoteStore : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSManagedObjectID* _currentDeviceManagedObjectId;
	RTDarwinNotificationHelper* _notificationHelper;

}
-(id)init;
-(id)createManagedObjectContext;
-(id)initWithReadOnly:(BOOL)arg1 ;
-(id)_createManagedObjectContext;
-(void)updateCurrentDeviceMOIDWithContext:(id)arg1 ;
@end

