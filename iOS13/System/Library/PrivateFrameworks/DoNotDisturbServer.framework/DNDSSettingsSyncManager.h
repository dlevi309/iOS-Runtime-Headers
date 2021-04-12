/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/


@protocol DNDSSettingsSyncManager <NSObject>
@property (assign,nonatomic,__weak) id<DNDSSettingsSyncManagerDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<DNDSSettingsSyncManagerDelegate> delegate; 
@required
-(id<DNDSSettingsSyncManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)resume;
-(void)update;
-(id<DNDSSettingsSyncManagerDataSource>)dataSource;
-(void)setDataSource:(id)arg1;

@end

