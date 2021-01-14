/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@protocol WLMigrationDataSource <NSObject>
@required
-(void)dataForSummary:(id)arg1 migrator:(id)arg2 completion:(/*^block*/id)arg3;
-(void)accountsDataForMigrator:(id)arg1 completion:(/*^block*/id)arg2;
-(void)summariesDataForAccount:(id)arg1 migrator:(id)arg2 completion:(/*^block*/id)arg3;
-(void)itemSizeForSummary:(id)arg1 migrator:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fileForSummary:(id)arg1 migrator:(id)arg2 fileAccessor:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;
-(void)dataSegmentForSummary:(id)arg1 byteRange:(NSRange)arg2 migrator:(id)arg3 completion:(/*^block*/id)arg4;
-(void)updateUIWithProgress:(double)arg1 logString:(id)arg2 completion:(/*^block*/id)arg3;

@end

