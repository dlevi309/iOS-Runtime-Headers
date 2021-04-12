/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMStoreContainerToken, REMStore, NSDate, NSString, NSError;

@interface REMDatabaseMigrationContext : NSObject {

	BOOL _hasPerformedEnsureAccountsExist;
	REMStoreContainerToken* _containerToken;
	REMStore* _cachedStore;
	NSDate* _migrationStartDate;
	NSString* _lastReportedErrorIdentifier;
	unsigned long long _lastReportedErrorStage;
	NSError* _lastReportedError;

}

@property (assign,nonatomic) BOOL isDatabaseMigrated; 
@property (nonatomic,retain) REMStoreContainerToken * containerToken;                //@synthesize containerToken=_containerToken - In the implementation block
@property (nonatomic,retain) REMStore * cachedStore;                                 //@synthesize cachedStore=_cachedStore - In the implementation block
@property (nonatomic,retain) NSDate * migrationStartDate;                            //@synthesize migrationStartDate=_migrationStartDate - In the implementation block
@property (assign,nonatomic) BOOL hasPerformedEnsureAccountsExist;                   //@synthesize hasPerformedEnsureAccountsExist=_hasPerformedEnsureAccountsExist - In the implementation block
@property (nonatomic,retain) NSString * lastReportedErrorIdentifier;                 //@synthesize lastReportedErrorIdentifier=_lastReportedErrorIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long lastReportedErrorStage;              //@synthesize lastReportedErrorStage=_lastReportedErrorStage - In the implementation block
@property (nonatomic,retain) NSError * lastReportedError;                            //@synthesize lastReportedError=_lastReportedError - In the implementation block
@property (nonatomic,readonly) BOOL shouldDeleteMigratedData; 
-(void)setLastReportedErrorStage:(unsigned long long)arg1 ;
-(void)_diagnosticReportWithStage:(unsigned long long)arg1 failureIdentifier:(id)arg2 error:(id)arg3 ;
-(void)setMigrationStartDate:(NSDate *)arg1 ;
-(void)setShouldDataAccessStopSyncingReminders:(BOOL)arg1 ;
-(id)init;
-(void)reportMigrationErrorWithIdentifier:(id)arg1 atStage:(unsigned long long)arg2 error:(id)arg3 objectLocator:(id)arg4 ;
-(BOOL)shouldDeleteMigratedData;
-(void)_postMigrationLocalAccountCleanup;
-(void)setLastReportedError:(NSError *)arg1 ;
-(void)setIsDatabaseMigrated:(BOOL)arg1 ;
-(BOOL)ensureAccountsExistWithMigrationAccountInfos:(id)arg1 error:(id*)arg2 ;
-(void)setCachedStore:(REMStore *)arg1 ;
-(id)remStore;
-(void)destroySandboxContainerIfNecessary;
-(void)setLastReportedErrorIdentifier:(NSString *)arg1 ;
-(void)reportMigrationWillBegin;
-(NSDate *)migrationStartDate;
-(REMStore *)cachedStore;
-(BOOL)isDatabaseMigrated;
-(BOOL)ensureAccountsExist:(id*)arg1 ;
-(void)setHasPerformedEnsureAccountsExist:(BOOL)arg1 ;
-(NSString *)lastReportedErrorIdentifier;
-(void)reportMigrationDidFinishWithSuccess:(BOOL)arg1 ;
-(BOOL)_cleanLocalDatabases:(id*)arg1 ;
-(void)setContainerToken:(REMStoreContainerToken *)arg1 ;
-(BOOL)ensureAccountsExist:(id)arg1 error:(id*)arg2 ;
-(NSError *)lastReportedError;
-(id)_migrationAccountInfosFromDEPRECATEDInfoDictionaryList:(id)arg1 ;
-(unsigned long long)lastReportedErrorStage;
-(REMStoreContainerToken *)containerToken;
-(BOOL)hasPerformedEnsureAccountsExist;
-(void)dealloc;
-(id)initWithSandboxDatabaseEnabled:(BOOL)arg1 ;
@end

