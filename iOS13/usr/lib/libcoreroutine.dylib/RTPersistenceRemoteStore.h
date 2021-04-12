/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

