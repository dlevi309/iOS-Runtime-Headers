/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAlarmObserver.h>

@protocol OS_dispatch_queue, MTAlarmStorage;
@class NSObject, NSMutableDictionary, _CDClientContext, _DKKnowledgeStore, NSString;

@interface MTCoreDuetMonitor : NSObject <MTAlarmObserver> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	id<MTAlarmStorage> _alarmStorage;
	NSMutableDictionary* _alarmStatesByAlarmID;
	_CDClientContext* _context;
	_DKKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) id<MTAlarmStorage> alarmStorage;                         //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * alarmStatesByAlarmID;              //@synthesize alarmStatesByAlarmID=_alarmStatesByAlarmID - In the implementation block
@property (nonatomic,readonly) _CDClientContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) _DKKnowledgeStore * knowledgeStore;                      //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)handleSystemReady;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(id<MTAlarmStorage>)alarmStorage;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)_queue_writeCurrentStateToContextStore;
-(void)updateStateForIdleAlarms:(id)arg1 ;
-(_CDClientContext *)context;
-(id)metadataForAlarm:(id)arg1 ;
-(id)initWithAlarmStorage:(id)arg1 ;
-(void)updateStateForAlarm:(id)arg1 alarmEvent:(unsigned long long)arg2 ;
-(void)updateLastModifiedDateForAlarms:(id)arg1 ;
-(_DKKnowledgeStore *)knowledgeStore;
-(void)_queue_writeNextAlarmStateToContextStore:(id)arg1 ;
-(void)updateStateForNextAlarm:(id)arg1 ;
-(void)writeAlarmToKnowledgeStore:(id)arg1 alarmEvent:(unsigned long long)arg2 ;
-(void)_queue_writeAlarmToKnowledgeStore:(id)arg1 category:(id)arg2 ;
-(NSMutableDictionary *)alarmStatesByAlarmID;
@end

