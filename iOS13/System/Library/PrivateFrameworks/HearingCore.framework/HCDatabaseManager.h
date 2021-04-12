/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore
*/


@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {

	int _contentProtectionNotifyToken;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
-(id)init;
-(void)dealloc;
-(id)containerIdentifier;
-(NSManagedObjectContext *)managedObjectContext;
-(void)logMessage:(id)arg1 ;
-(BOOL)isProtectedDataAvailable;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)apsConnectionMachServiceName;
-(id)cloudKitContainer;
-(void)setupDatabase;
-(BOOL)saveIfPossible;
-(id)managedObjectModelName;
-(id)databaseFilePath;
-(void)storesWillChange:(id)arg1 ;
-(void)contentDidUpdate:(id)arg1 ;
@end

