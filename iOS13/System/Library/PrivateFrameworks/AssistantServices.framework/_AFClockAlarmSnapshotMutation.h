/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setDate:(id)arg1 ;
-(void)setGeneration:(unsigned long long)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setAlarmsByID:(id)arg1 ;
-(void)setNotifiedFiringAlarmIDs:(id)arg1 ;
@end

