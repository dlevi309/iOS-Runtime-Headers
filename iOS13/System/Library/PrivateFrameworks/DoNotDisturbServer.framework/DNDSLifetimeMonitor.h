/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

@class NSArray;


@protocol DNDSLifetimeMonitor <NSObject>
@property (nonatomic,copy,readonly) NSArray * activeLifetimeAssertionUUIDs; 
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDelegate> delegate; 
@required
-(id<DNDSLifetimeMonitorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id<DNDSLifetimeMonitorDataSource>)dataSource;
-(void)setDataSource:(id)arg1;
-(NSArray *)activeLifetimeAssertionUUIDs;
-(void)refreshMonitorForDate:(id)arg1;

@end

