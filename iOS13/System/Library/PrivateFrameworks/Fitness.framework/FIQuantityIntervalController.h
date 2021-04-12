/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

