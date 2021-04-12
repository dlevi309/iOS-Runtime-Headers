/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
*/

#import <SiriObservation/SiriObservation-Structs.h>
#import <libobjc.A.dylib/SOTimersSnapshotMutating.h>

@class SOTimersSnapshot, NSDate, NSDictionary, NSString;

@interface _SOTimersSnapshotMutation : NSObject <SOTimersSnapshotMutating> {

	SOTimersSnapshot* _baseModel;
	NSDate* _date;
	NSDictionary* _timersByID;
	struct {
		unsigned isDirty : 1;
		unsigned hasDate : 1;
		unsigned hasTimersByID : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDate:(id)arg1 ;
-(void)setTimersByID:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

