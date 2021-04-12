/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHLogger.h>

@class NSPersistentStoreCoordinator;

@interface DBManager : CHLogger {

	NSPersistentStoreCoordinator* fPersistentStoreCoordinator;

}

@property (nonatomic,retain) NSPersistentStoreCoordinator * fPersistentStoreCoordinator; 
+(id)migrateDataStoreAtLocation:(id)arg1 withGetDestinationModel:(/*^block*/id)arg2 isEncrypted:(BOOL)arg3 ;
+(long long)versionForDBAtLocation:(id)arg1 ;
+(void)setPropertyValue:(id)arg1 forKey:(id)arg2 forContext:(id)arg3 ;
+(BOOL)makeDatabaseAtURLClassCDataProtected:(id)arg1 ;
+(id)getPropertyValueForKey:(id)arg1 forContext:(id)arg2 ;
+(long long)isDataStoreAtURLInitialized:(id)arg1 withModelAtURL:(id)arg2 ;
+(BOOL)replacePersistentStore:(id)arg1 withURL:(id)arg2 ;
+(id)mangedObjectWithURI:(id)arg1 inContext:(id)arg2 ;
+(long long)mapToDBMErrorCode:(id)arg1 ;
+(id)persistentStoreOptions:(BOOL)arg1 ;
+(id)getStoreURLforContext:(id)arg1 ;
+(id)instanceWithModelURL:(id)arg1 ;
+(id)modelForDBAtLocation:(id)arg1 ;
+(BOOL)destroyDBAtLocation:(id)arg1 withModelAtLocation:(id)arg2 ;
+(BOOL)moveDBAtLocation:(id)arg1 toLocation:(id)arg2 withModelAtLocation:(id)arg3 ;
+(id)getPersistentCoordinator:(id)arg1 ;
+(id)entityDescriptionHavingName:(id)arg1 forContext:(id)arg2 ;
+(long long)versionForManagedObjectModel:(id)arg1 ;
-(id)init;
-(BOOL)addDataStoreAtLocation:(id)arg1 isEncrypted:(BOOL)arg2 ;
-(void)setFPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(id)createManagedObjectContext;
-(void)removeDataStoreAtLocation:(id)arg1 ;
-(NSPersistentStoreCoordinator *)fPersistentStoreCoordinator;
@end

