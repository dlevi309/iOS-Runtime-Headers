/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

@class NSDate;


@protocol _DKHistoricalMonitor <_DKMonitoring>
@property (nonatomic,copy) id historicalHandler; 
@property (nonatomic,copy) id shutdownHandler; 
@property (nonatomic,readonly) NSDate * lastUpdate; 
@required
-(NSDate *)lastUpdate;
-(void)update;
-(id)historicalHandler;
-(void)setHistoricalHandler:(/*^block*/id)arg1;
-(id)shutdownHandler;
-(void)setShutdownHandler:(/*^block*/id)arg1;

@end

