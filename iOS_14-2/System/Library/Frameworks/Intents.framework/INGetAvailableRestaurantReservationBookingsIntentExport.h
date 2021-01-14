/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INRestaurant, NSDateComponents, NSNumber, NSDate;


@protocol INGetAvailableRestaurantReservationBookingsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurant * restaurant; 
@property (assign,nonatomic) unsigned long long partySize; 
@property (nonatomic,copy) NSDateComponents * preferredBookingDateComponents; 
@property (nonatomic,copy) NSNumber * maximumNumberOfResults; 
@property (nonatomic,copy) NSDate * earliestBookingDateForResults; 
@property (nonatomic,copy) NSDate * latestBookingDateForResults; 
@required
-(id)init;
-(NSNumber *)maximumNumberOfResults;
-(void)setMaximumNumberOfResults:(id)arg1;
-(void)setPartySize:(unsigned long long)arg1;
-(NSDateComponents *)preferredBookingDateComponents;
-(void)setPreferredBookingDateComponents:(id)arg1;
-(NSDate *)latestBookingDateForResults;
-(void)setLatestBookingDateForResults:(id)arg1;
-(void)setRestaurant:(id)arg1;
-(NSDate *)earliestBookingDateForResults;
-(unsigned long long)partySize;
-(void)setEarliestBookingDateForResults:(id)arg1;
-(INRestaurant *)restaurant;

@end

