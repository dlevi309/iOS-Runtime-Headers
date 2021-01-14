/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INRestaurant, NSString, NSNumber, NSDate;


@protocol INGetUserCurrentRestaurantReservationBookingsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurant * restaurant; 
@property (nonatomic,copy) NSString * reservationIdentifier; 
@property (nonatomic,copy) NSNumber * maximumNumberOfResults; 
@property (nonatomic,copy) NSDate * earliestBookingDateForResults; 
@required
-(id)init;
-(NSNumber *)maximumNumberOfResults;
-(void)setMaximumNumberOfResults:(id)arg1;
-(void)setRestaurant:(id)arg1;
-(NSString *)reservationIdentifier;
-(void)setReservationIdentifier:(id)arg1;
-(NSDate *)earliestBookingDateForResults;
-(void)setEarliestBookingDateForResults:(id)arg1;
-(INRestaurant *)restaurant;

@end

