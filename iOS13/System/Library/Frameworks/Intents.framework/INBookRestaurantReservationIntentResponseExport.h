/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INRestaurantReservationUserBooking;


@protocol INBookRestaurantReservationIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INRestaurantReservationUserBooking * userBooking; 
@required
-(id)init;
-(long long)code;
-(INRestaurantReservationUserBooking *)userBooking;
-(void)setUserBooking:(id)arg1;

@end

