/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@protocol WLMigrationDataSource <NSObject>
@required
-(void)dataForSummary:(id)arg1 migrator:(id)arg2 completion:(/*^block*/id)arg3;
-(void)accountsDataForMigrator:(id)arg1 completion:(/*^block*/id)arg2;
-(void)summariesDataForAccount:(id)arg1 migrator:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fileForSummary:(id)arg1 migrator:(id)arg2 fileAccessor:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;
-(void)dataSegmentForSummary:(id)arg1 byteRange:(NSRange)arg2 migrator:(id)arg3 completion:(/*^block*/id)arg4;
-(void)updateUIWithProgress:(double)arg1 logString:(id)arg2 completion:(/*^block*/id)arg3;

@end

