/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

@class _DKEvent;


@protocol _DKInstantMonitor <_DKMonitoring>
@property (nonatomic,copy) id instantHandler; 
@property (nonatomic,readonly) _DKEvent * currentEvent; 
@required
-(void)stop;
-(void)start;
-(void)setCurrentEvent:(id)arg1 inferHistoricalState:(BOOL)arg2;
-(void)synchronouslyReflectCurrentValue;
-(id)instantHandler;
-(void)setInstantHandler:(/*^block*/id)arg1;
-(_DKEvent *)currentEvent;

@end

