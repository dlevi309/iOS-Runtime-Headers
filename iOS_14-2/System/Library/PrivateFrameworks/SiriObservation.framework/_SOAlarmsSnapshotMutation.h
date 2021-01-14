/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
*/

#import <SiriObservation/SiriObservation-Structs.h>
#import <libobjc.A.dylib/SOAlarmsSnapshotMutating.h>

@class SOAlarmsSnapshot, NSDate, NSDictionary, NSOrderedSet, NSString;

@interface _SOAlarmsSnapshotMutation : NSObject <SOAlarmsSnapshotMutating> {

	SOAlarmsSnapshot* _baseModel;
	NSDate* _date;
	NSDictionary* _alarmsByID;
	NSOrderedSet* _firingAlarmIDs;
	NSOrderedSet* _dismissedAlarmIDs;
	struct {
		unsigned isDirty : 1;
		unsigned hasDate : 1;
		unsigned hasAlarmsByID : 1;
		unsigned hasFiringAlarmIDs : 1;
		unsigned hasDismissedAlarmIDs : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDate:(id)arg1 ;
-(void)setAlarmsByID:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setFiringAlarmIDs:(id)arg1 ;
-(void)setDismissedAlarmIDs:(id)arg1 ;
@end

