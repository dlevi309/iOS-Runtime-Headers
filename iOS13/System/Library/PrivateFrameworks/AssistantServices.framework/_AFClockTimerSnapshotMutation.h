/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClockTimerSnapshotMutating.h>

@class AFClockTimerSnapshot, NSDate, NSDictionary, NSOrderedSet, NSString;

@interface _AFClockTimerSnapshotMutation : NSObject <AFClockTimerSnapshotMutating> {

	AFClockTimerSnapshot* _baseModel;
	unsigned long long _generation;
	NSDate* _date;
	NSDictionary* _timersByID;
	NSOrderedSet* _notifiedFiringTimerIDs;
	struct {
		unsigned isDirty : 1;
		unsigned hasGeneration : 1;
		unsigned hasDate : 1;
		unsigned hasTimersByID : 1;
		unsigned hasNotifiedFiringTimerIDs : 1;
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
-(void)setTimersByID:(id)arg1 ;
-(void)setNotifiedFiringTimerIDs:(id)arg1 ;
@end

