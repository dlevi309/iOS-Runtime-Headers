/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/


@protocol HMFSystemInfoMigrationDataSource <NSObject>
@property (__weak) id<HMFSystemInfoMigrationDataSourceDelegate> delegate; 
@property (getter=isMigrating,nonatomic,readonly) BOOL migrating; 
@required
-(id<HMFSystemInfoMigrationDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isMigrating;

@end

