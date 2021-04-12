/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@interface DMMigrationDeferredExitManager : NSObject
+(id)_serialQueue;
-(id)_deferralDuration;
-(void)_exitClean;
-(void)migrationDidStart;
-(void)migrationDidEnd;
-(void)deferExitWithConnection:(id)arg1 ;
-(void)cancelDeferredExitWithConnection:(id)arg1 ;
-(void)_resetGlobalState;
-(BOOL)_isDeferringExit;
@end

