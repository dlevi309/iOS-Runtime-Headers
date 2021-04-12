/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/

#import <libobjc.A.dylib/ACDDatabaseConnectionDelegate.h>
#import <libobjc.A.dylib/ACDDatabaseProtocol.h>

@class NSPersistentStoreCoordinator, NSDictionary, NSURL, NSString;

@interface ACDDatabase : NSObject <ACDDatabaseConnectionDelegate, ACDDatabaseProtocol> {

	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSDictionary* _storeOptions;
	NSURL* _databaseURL;

}

@property (nonatomic,readonly) NSURL * databaseURL;                 //@synthesize databaseURL=_databaseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)initWithDatabaseURL:(id)arg1 storeOptions:(id)arg2 ;
-(BOOL)_performBackupToURL:(id)arg1 unverifiedBackupURL:(id)arg2 error:(id*)arg3 ;
-(id)createConnection;
-(id)init;
-(BOOL)_persistentStoreCoodinator_resetPersistentStoreCoordinatorWithError:(id*)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(NSString *)description;
-(id)_unverifiedBackupURL;
-(void)databaseConnection:(id)arg1 encounteredUnrecoverableError:(id)arg2 ;
-(BOOL)restoreFromBackupReturningError:(id*)arg1 ;
-(id)_backupURL;
-(BOOL)performBackupReturningError:(id*)arg1 ;
-(NSURL *)databaseURL;
-(BOOL)_shouldResetPersistentStoreAfterError:(id)arg1 ;
-(id)_addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(BOOL)resetReturningError:(id*)arg1 ;
@end

