/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore
*/


@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {

	int _contentProtectionNotifyToken;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
-(NSManagedObjectContext *)managedObjectContext;
-(void)logMessage:(id)arg1 ;
-(id)init;
-(id)containerIdentifier;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)apsConnectionMachServiceName;
-(void)setupDatabase;
-(id)cloudKitContainer;
-(void)dealloc;
-(BOOL)saveIfPossible;
-(id)managedObjectModelName;
-(id)databaseFilePath;
-(void)storesWillChange:(id)arg1 ;
-(void)contentDidUpdate:(id)arg1 ;
@end

