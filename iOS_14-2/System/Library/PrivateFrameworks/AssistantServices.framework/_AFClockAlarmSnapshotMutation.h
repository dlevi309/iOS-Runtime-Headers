/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClockAlarmSnapshotMutating.h>

@class AFClockAlarmSnapshot, NSDate, NSDictionary, NSOrderedSet, NSString;

@interface _AFClockAlarmSnapshotMutation : NSObject <AFClockAlarmSnapshotMutating> {

	AFClockAlarmSnapshot* _baseModel;
	unsigned long long _generation;
	NSDate* _date;
	NSDictionary* _alarmsByID;
	NSOrderedSet* _notifiedFiringAlarmIDs;
	struct {
		unsigned isDirty : 1;
		unsigned hasGeneration : 1;
		unsigned hasDate : 1;
		unsigned hasAlarmsByID : 1;
		unsigned hasNotifiedFiringAlarmIDs : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGeneration:(unsigned long long)arg1 ;
-(id)init;
-(void)setDate:(id)arg1 ;
-(void)setAlarmsByID:(id)arg1 ;
-(void)setNotifiedFiringAlarmIDs:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

