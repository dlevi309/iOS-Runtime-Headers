/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKLowPowerModeMonitor : _DKMonitor
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithLowPowerModeState:(BOOL)arg1 ;
+(void)setLowPowerMode:(BOOL)arg1 ;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)lowPowerModeStateChanged:(id)arg1 ;
-(void)updateLowPowerMode;
@end

