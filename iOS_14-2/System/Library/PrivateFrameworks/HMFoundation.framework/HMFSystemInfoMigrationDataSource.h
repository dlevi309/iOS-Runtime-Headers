/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/


@protocol HMFSystemInfoMigrationDataSource <NSObject>
@property (__weak) id<HMFSystemInfoMigrationDataSourceDelegate> delegate; 
@property (getter=isMigrating,nonatomic,readonly) BOOL migrating; 
@required
-(id<HMFSystemInfoMigrationDataSourceDelegate>)delegate;
-(BOOL)isMigrating;
-(void)setDelegate:(id)arg1;

@end

