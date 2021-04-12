/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, NSString;

@interface PPRecordMonitoringHelper : NSObject {

	NSMapTable* _delegates;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;

}
-(id)initWithName:(id)arg1 ;
-(BOOL)loadRecordsAndMonitorChangesWithDelegate:(id)arg1 recordGenerator:(/*^block*/id)arg2 notificationRegistrationBlock:(/*^block*/id)arg3 ;
-(void)loadRecordsWithDelegate:(id)arg1 recordGenerator:(/*^block*/id)arg2 ;
-(void)handleChangeNotificationWithName:(id)arg1 afterDelaySeconds:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)sendResetToAllDelegatesWithRecordGenerator:(/*^block*/id)arg1 ;
-(void)resetWithDelegate:(id)arg1 recordGenerator:(/*^block*/id)arg2 ;
-(void)sendChangesToDelegatesWithChangeGenerator:(/*^block*/id)arg1 recordGenerator:(/*^block*/id)arg2 ;
-(id)_setupRecentChangesWithDelegates:(id)arg1 recordGenerator:(/*^block*/id)arg2 ;
-(id)_handleRecentChangesWithDelegates:(id)arg1 changeGenerator:(/*^block*/id)arg2 recordGenerator:(/*^block*/id)arg3 ;
@end

