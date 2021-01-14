/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCKDatabaseStartUpMiddleware.h>

@protocol FCCKDatabaseMigrator;
@class NSString;

@interface FCCKDatabaseEncryptionStartUpMiddleware : NSObject <FCCKDatabaseStartUpMiddleware> {

	id<FCCKDatabaseMigrator> _encryptionMigrator;

}

@property (nonatomic,retain) id<FCCKDatabaseMigrator> encryptionMigrator;              //@synthesize encryptionMigrator=_encryptionMigrator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_deleteOldDataIfDesiredWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setEncryptionMigrator:(id<FCCKDatabaseMigrator>)arg1 ;
-(void)_tryToEnableEncryptionForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deleteOldDataWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_shouldHandleIdentityLossWithSentinel:(id)arg1 secureSentinel:(id)arg2 error:(id)arg3 ;
-(void)_adoptSentinel:(id)arg1 secureSentinel:(id)arg2 forDatabase:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)performStartUpForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<FCCKDatabaseMigrator>)encryptionMigrator;
-(void)_createSentinelsIfNeededForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithEncryptionMigrator:(id)arg1 ;
-(void)_associateChildOperation:(id)arg1 ;
-(void)_fetchSentinelsWithDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_migrateWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleIdentityLossWithDatabase:(id)arg1 sentinel:(id)arg2 secureSentinel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_shouldFailGracefullyWithSentinel:(id)arg1 secureSentinel:(id)arg2 error:(id)arg3 ;
@end

