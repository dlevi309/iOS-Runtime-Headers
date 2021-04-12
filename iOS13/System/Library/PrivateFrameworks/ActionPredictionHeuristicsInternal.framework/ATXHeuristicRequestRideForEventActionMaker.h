/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <ActionPredictionHeuristicsInternal/ATXHeuristicActionMaker.h>

@class CLLocation, ATXHeuristicObjectHandle, NSString;

@interface ATXHeuristicRequestRideForEventActionMaker : ATXHeuristicActionMaker {

	CLLocation* _pickupLocation;
	ATXHeuristicObjectHandle* _dropoffEvent;
	NSString* _preferredAppBundleID;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_makeAction;
-(id)actionTypeName;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 pickupLocation:(id)arg3 dropoffEvent:(id)arg4 preferredAppBundleID:(id)arg5 ;
-(id)dropOffLocationFromEKEvent:(id)arg1 ;
-(BOOL)shouldPredictDropOffLocationGivenPickupLocation:(id)arg1 andDropOffLocation:(id)arg2 ;
@end

