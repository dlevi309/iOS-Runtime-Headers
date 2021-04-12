/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDDatabaseCorruptionTTRPromptDataSource;
@interface HDDatabaseCorruptionTTRPrompter : NSObject {

	id<HDDatabaseCorruptionTTRPromptDataSource> _dataSource;
	/*^block*/id _unitTest_willPresentTTRAlertHandler;

}

@property (nonatomic,copy) id unitTest_willPresentTTRAlertHandler;              //@synthesize unitTest_willPresentTTRAlertHandler=_unitTest_willPresentTTRAlertHandler - In the implementation block
+(id)defaultPrompterWithProfile:(id)arg1 ;
-(id)init;
-(id)initWithDataSource:(id)arg1 ;
-(void)_promptTTRWithDatabaseType:(long long)arg1 isSQLite:(BOOL)arg2 description:(id)arg3 error:(id)arg4 ;
-(BOOL)_deviceSupportsCorruptionPrompt;
-(id)_persistedDatabaseCorruptionContextForSQLite:(BOOL)arg1 databaseType:(long long)arg2 ;
-(id)_currentDatabaseCorruptionContextForError:(id)arg1 ;
-(void)_persistDatabaseCorruptionContext:(id)arg1 isSQLite:(BOOL)arg2 databaseType:(long long)arg3 ;
-(id)_currentDatabaseIdentifierAndBuildString;
-(id)_persistedDatabaseIdentifierAndBuildFromPriorPromptForSQLite:(BOOL)arg1 databaseType:(long long)arg2 ;
-(void)_popAlertWithRadarDescription:(id)arg1 ;
-(void)_persistDatabaseIdentifierAndBuild:(id)arg1 isSQLite:(BOOL)arg2 databaseType:(long long)arg3 ;
-(id)_defaultKeyForSQLite:(BOOL)arg1 databaseType:(long long)arg2 suffix:(id)arg3 ;
-(void)promptTTRForSQLiteCorruptionWithDatabaseType:(long long)arg1 corruptionError:(id)arg2 ;
-(void)promptTTRForHFDCorruptionWithFailureType:(long long)arg1 corruptionError:(id)arg2 ;
-(id)unitTest_willPresentTTRAlertHandler;
-(void)setUnitTest_willPresentTTRAlertHandler:(id)arg1 ;
@end

