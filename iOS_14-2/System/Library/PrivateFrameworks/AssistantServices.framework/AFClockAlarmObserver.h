/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFClockItemStorageDelegate.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSHashTable, MTAlarmManager, AFClockAlarmSnapshot, AFClockItemStorage, NSMutableOrderedSet, NSUUID, NSString;

@interface AFClockAlarmObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _listeners;
	MTAlarmManager* _alarmManager;
	AFClockAlarmSnapshot* _alarmSnapshot;
	NSObject*<OS_dispatch_group> _alarmSnapshotGroup;
	long long _alarmSnapshotGroupDepth;
	AFClockItemStorage* _alarmStorage;
	NSMutableOrderedSet* _notifiedFiringAlarmIDs;
	NSUUID* _alarmsChangedToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)addListener:(id)arg1 ;
-(id)_alarmSnapshot;
-(void)_fetchAlarmsForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_consolidateNotifiedFiringAlarms;
-(void)firingAlarmChanged:(id)arg1 ;
-(id)init;
-(void)firingAlarmDismissed:(id)arg1 ;
-(void)_handleFetchAlarmsForReason:(id)arg1 result:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleFetchAlarmsForReason:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAlarmSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)getFiringAlarmIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)alarmsAdded:(id)arg1 ;
-(void)alarmFired:(id)arg1 ;
-(void)_endGroup;
-(void)_beginGroup;
-(void)alarmsRemoved:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)_tearDown;
-(void)invalidate;
-(void)alarmsUpdated:(id)arg1 ;
-(void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4 ;
-(void)_setUp;
-(void)stateReset:(id)arg1 ;
-(void)_enumerateListenersUsingBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)alarmsChanged:(id)arg1 ;
@end

