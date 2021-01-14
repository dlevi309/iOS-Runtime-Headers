/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

@class _DKEvent;


@protocol _DKInstantMonitor <_DKMonitoring>
@property (nonatomic,copy) id instantHandler; 
@property (nonatomic,readonly) _DKEvent * currentEvent; 
@required
-(void)synchronouslyReflectCurrentValue;
-(void)start;
-(void)setCurrentEvent:(id)arg1 inferHistoricalState:(BOOL)arg2;
-(id)instantHandler;
-(void)stop;
-(_DKEvent *)currentEvent;
-(void)setInstantHandler:(/*^block*/id)arg1;

@end

