/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/_DKNotificationReceiver.h>
#import <libobjc.A.dylib/_DKInstantMonitor.h>
#import <libobjc.A.dylib/_DKHistoricalMonitor.h>

@class NSString, _DKEvent, NSDate;

@interface _DKNotificationScreenLockMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {

	BOOL _enabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id instantHandler; 
@property (nonatomic,readonly) _DKEvent * currentEvent; 
@property (nonatomic,copy) id historicalHandler; 
@property (nonatomic,copy) id shutdownHandler; 
@property (nonatomic,readonly) NSDate * lastUpdate; 
+(id)entitlements;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithState:(id)arg1 ;
+(void)setIsLocked:(BOOL)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(void)receiveNotificationEvent:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)deactivate;
-(void)dealloc;
@end

