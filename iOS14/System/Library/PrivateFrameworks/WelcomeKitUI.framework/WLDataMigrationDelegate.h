/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
*/


@protocol WLDataMigrationDelegate <NSObject>
@required
-(void)dataMigratorDidGetInterrupted;
-(void)dataMigrator:(id)arg1 didFailWithError:(id)arg2;
-(void)dataMigratorDidBecomeRestartable:(id)arg1;
-(void)dataMigratorDidFinish:(id)arg1 withImportErrors:(BOOL)arg2;
-(void)dataMigrator:(id)arg1 didUpdateMigrationState:(unsigned long long)arg2;
-(void)dataMigrator:(id)arg1 didUpdateProgressPercentage:(float)arg2;
-(void)dataMigrator:(id)arg1 didUpdateRemainingDownloadTime:(double)arg2;

@end

