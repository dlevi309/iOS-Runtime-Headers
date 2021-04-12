/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(INRestaurant *)restaurant;
-(void)setRestaurant:(id)arg1;
-(NSString *)reservationIdentifier;
-(void)setReservationIdentifier:(id)arg1;
-(NSNumber *)maximumNumberOfResults;
-(void)setMaximumNumberOfResults:(id)arg1;
-(NSDate *)earliestBookingDateForResults;
-(void)setEarliestBookingDateForResults:(id)arg1;

@end

