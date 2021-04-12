/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INRestaurantReservationUserBooking;


@protocol INBookRestaurantReservationIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INRestaurantReservationUserBooking * userBooking; 
@required
-(id)init;
-(void)setUserBooking:(id)arg1;
-(INRestaurantReservationUserBooking *)userBooking;
-(long long)code;

@end

