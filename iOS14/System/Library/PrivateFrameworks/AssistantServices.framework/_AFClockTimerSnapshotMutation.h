/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGeneration:(unsigned long long)arg1 ;
-(id)init;
-(void)setDate:(id)arg1 ;
-(void)setTimersByID:(id)arg1 ;
-(void)setNotifiedFiringTimerIDs:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

