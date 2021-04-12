/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

@class NSArray;


@protocol DNDSLifetimeMonitor <NSObject>
@property (nonatomic,copy,readonly) NSArray * activeLifetimeAssertionUUIDs; 
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDelegate> delegate; 
@required
-(id<DNDSLifetimeMonitorDelegate>)delegate;
-(NSArray *)activeLifetimeAssertionUUIDs;
-(id<DNDSLifetimeMonitorDataSource>)dataSource;
-(void)setDelegate:(id)arg1;
-(void)setDataSource:(id)arg1;
-(void)refreshMonitorForDate:(id)arg1;

@end

