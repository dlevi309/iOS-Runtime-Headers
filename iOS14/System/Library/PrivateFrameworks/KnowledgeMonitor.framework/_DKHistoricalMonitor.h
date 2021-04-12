/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

@class NSDate;


@protocol _DKHistoricalMonitor <_DKMonitoring>
@property (nonatomic,copy) id historicalHandler; 
@property (nonatomic,copy) id shutdownHandler; 
@property (nonatomic,readonly) NSDate * lastUpdate; 
@required
-(NSDate *)lastUpdate;
-(id)historicalHandler;
-(id)shutdownHandler;
-(void)update;
-(void)setShutdownHandler:(/*^block*/id)arg1;
-(void)setHistoricalHandler:(/*^block*/id)arg1;

@end

