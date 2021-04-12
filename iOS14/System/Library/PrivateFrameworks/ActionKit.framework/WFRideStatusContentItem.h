/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ContentKit/WFContentItem.h>

@class INRideStatus;

@interface WFRideStatusContentItem : WFContentItem

@property (nonatomic,readonly) INRideStatus * rideStatus; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
-(id)dropOffLocation;
-(id)pickupLocation;
-(id)rideOptionName;
-(id)driver;
-(id)estimatedPickupDate;
-(id)estimatedDropOffDate;
-(id)maximumPrice;
-(id)minimumPrice;
-(id)disclaimerMessage;
-(INRideStatus *)rideStatus;
-(id)vehicleDescription;
@end

