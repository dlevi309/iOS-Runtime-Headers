/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSManagedObjectID, NSUUID, NSManagedObjectContext, NSPersistentHistoryToken;

@interface RTPersistenceResetSyncContext : NSObject {

	NSManagedObjectID* _currentDeviceObjectID;
	NSUUID* _currentDeviceIdentifier;
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentHistoryToken* _historyToken;

}

@property (retain) NSManagedObjectID * currentDeviceObjectID;                  //@synthesize currentDeviceObjectID=_currentDeviceObjectID - In the implementation block
@property (retain) NSUUID * currentDeviceIdentifier;                           //@synthesize currentDeviceIdentifier=_currentDeviceIdentifier - In the implementation block
@property (retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (retain) NSPersistentHistoryToken * historyToken;                    //@synthesize historyToken=_historyToken - In the implementation block
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSPersistentHistoryToken *)historyToken;
-(void)setHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(NSManagedObjectID *)currentDeviceObjectID;
-(void)setCurrentDeviceObjectID:(NSManagedObjectID *)arg1 ;
-(NSUUID *)currentDeviceIdentifier;
-(void)setCurrentDeviceIdentifier:(NSUUID *)arg1 ;
@end

