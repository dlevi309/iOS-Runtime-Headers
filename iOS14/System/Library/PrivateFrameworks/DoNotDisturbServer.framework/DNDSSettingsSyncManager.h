/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/


@protocol DNDSSettingsSyncManager <NSObject>
@property (assign,nonatomic,__weak) id<DNDSSettingsSyncManagerDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<DNDSSettingsSyncManagerDelegate> delegate; 
@required
-(id<DNDSSettingsSyncManagerDelegate>)delegate;
-(id<DNDSSettingsSyncManagerDataSource>)dataSource;
-(void)setDelegate:(id)arg1;
-(void)update;
-(void)setDataSource:(id)arg1;
-(void)resume;

@end

