/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSNumber;

@interface _DKLowPowerModeMonitor : _DKMonitor {

	NSNumber* _lowPowerModeStatus;

}

@property (nonatomic,retain) NSNumber * lowPowerModeStatus;              //@synthesize lowPowerModeStatus=_lowPowerModeStatus - In the implementation block
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithLowPowerModeState:(BOOL)arg1 ;
+(void)setLowPowerMode:(BOOL)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(NSNumber *)lowPowerModeStatus;
-(void)start;
-(void)stop;
-(void)lowPowerModeStateChanged:(id)arg1 ;
-(void)setLowPowerModeStatus:(NSNumber *)arg1 ;
-(void)updateLowPowerMode;
@end

