/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHLogger.h>

@class AWDServerConnection;

@interface AWDLogger : CHLogger {

	AWDServerConnection* _awdServer;

}

@property (nonatomic,retain) AWDServerConnection * awdServer;              //@synthesize awdServer=_awdServer - In the implementation block
+(id)instance;
-(id)init;
-(void)databaseMigrationResult:(BOOL)arg1 oldVersion:(long long)arg2 newVersion:(long long)arg3 ;
-(void)databaseSaveError:(long long)arg1 withTableName:(id)arg2 ;
-(void)commCenterMigrationResult:(BOOL)arg1 withMigratedCallCount:(unsigned long long)arg2 ;
-(AWDServerConnection *)awdServer;
-(void)syncSuccess:(unsigned long long)arg1 withDownloadRecordCount:(unsigned long long)arg2 ;
-(void)bootstrapGizmo:(unsigned long long)arg1 ;
-(void)gizmoDatabaseMigrationFailure;
-(void)entitlementRejection:(int)arg1 ;
-(void)uninitializedDatabaseSave;
-(void)deleteAll:(unsigned long long)arg1 ;
-(void)callAddedWithNilUuid:(unsigned long long)arg1 withCallStatus:(unsigned long long)arg2 ;
-(void)syncFailure:(unsigned)arg1 ;
-(void)setAwdServer:(AWDServerConnection *)arg1 ;
-(void)submitMetric:(id)arg1 withId:(unsigned)arg2 ;
@end

