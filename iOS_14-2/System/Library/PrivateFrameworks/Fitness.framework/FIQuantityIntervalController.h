/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/

#import <libobjc.A.dylib/FIIntervalController.h>

@class NSDate, FIIntervalQuantityTrigger, FIMutableTimeSliceGroup;

@interface FIQuantityIntervalController : NSObject <FIIntervalController> {

	FIIntervalQuantityTrigger* _quantityTrigger;
	FIMutableTimeSliceGroup* _sliceGroup;

}

@property (nonatomic,readonly) BOOL intervalComplete; 
@property (nonatomic,readonly) NSDate * intervalEndDate; 
@property (nonatomic,readonly) BOOL allSlicesFinalized; 
-(void)addSample:(id)arg1 ;
-(BOOL)allSlicesFinalized;
-(BOOL)_updateTriggerWithSample:(id)arg1 ;
-(BOOL)intervalComplete;
-(id)initWithIntervalQuantityType:(id)arg1 threshold:(id)arg2 startDate:(id)arg3 trackedQuantityTypes:(id)arg4 ;
-(BOOL)isIntervalEndDate;
@end

