/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/


@protocol DNDSAssertionSyncManager <NSObject>
@property (assign,nonatomic,__weak) id<DNDSAssertionSyncManagerDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<DNDSAssertionSyncManagerDelegate> delegate; 
@optional
-(void)updateForModeAssertionUpdateResult:(id)arg1;
-(void)updateForStateUpdate:(id)arg1;

@required
-(id<DNDSAssertionSyncManagerDelegate>)delegate;
-(id<DNDSAssertionSyncManagerDataSource>)dataSource;
-(void)setDelegate:(id)arg1;
-(void)setDataSource:(id)arg1;
-(void)resume;

@end

