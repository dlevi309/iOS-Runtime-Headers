/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)remStore;
-(id)initWithSandboxDatabaseEnabled:(BOOL)arg1 ;
-(REMStoreContainerToken *)containerToken;
-(BOOL)isDatabaseMigrated;
-(void)setIsDatabaseMigrated:(BOOL)arg1 ;
-(REMStore *)cachedStore;
-(void)setCachedStore:(REMStore *)arg1 ;
-(void)setContainerToken:(REMStoreContainerToken *)arg1 ;
-(void)destroySandboxContainerIfNecessary;
-(void)setMigrationStartDate:(NSDate *)arg1 ;
-(void)setLastReportedErrorIdentifier:(NSString *)arg1 ;
-(void)setLastReportedError:(NSError *)arg1 ;
-(void)setLastReportedErrorStage:(unsigned long long)arg1 ;
-(NSDate *)migrationStartDate;
-(unsigned long long)lastReportedErrorStage;
-(NSString *)lastReportedErrorIdentifier;
-(NSError *)lastReportedError;
-(void)_diagnosticReportWithStage:(unsigned long long)arg1 failureIdentifier:(id)arg2 error:(id)arg3 ;
-(void)setShouldDataAccessStopSyncingReminders:(BOOL)arg1 ;
-(void)_postMigrationLocalAccountCleanup;
-(BOOL)hasPerformedEnsureAccountsExist;
-(BOOL)_cleanLocalDatabases:(id*)arg1 ;
-(void)setHasPerformedEnsureAccountsExist:(BOOL)arg1 ;
-(id)_migrationAccountInfosFromDEPRECATEDInfoDictionaryList:(id)arg1 ;
-(BOOL)ensureAccountsExistWithMigrationAccountInfos:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldDeleteMigratedData;
-(void)reportMigrationWillBegin;
-(void)reportMigrationErrorWithIdentifier:(id)arg1 atStage:(unsigned long long)arg2 error:(id)arg3 objectLocator:(id)arg4 ;
-(void)reportMigrationDidFinishWithSuccess:(BOOL)arg1 ;
-(BOOL)ensureAccountsExist:(id)arg1 error:(id*)arg2 ;
-(BOOL)ensureAccountsExist:(id*)arg1 ;
@end

