/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@interface DMMigrationDeferredExitManager : NSObject
+(id)_serialQueue;
-(void)_exitClean;
-(void)migrationDidEnd;
-(id)_deferralDuration;
-(void)migrationDidStart;
-(void)deferExitWithConnection:(id)arg1 ;
-(void)cancelDeferredExitWithConnection:(id)arg1 ;
-(void)_resetGlobalState;
-(BOOL)_isDeferringExit;
@end

