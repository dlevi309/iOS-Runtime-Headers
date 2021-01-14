/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INRideStatus;


@protocol INGetRideStatusIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INRideStatus * rideStatus; 
@required
-(void)setRideStatus:(id)arg1;
-(long long)code;
-(INRideStatus *)rideStatus;

@end

