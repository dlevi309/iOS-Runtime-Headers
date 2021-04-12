/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INRestaurant, NSString, NSDate, NSArray;


@protocol INRestaurantReservationBookingExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurant * restaurant; 
@property (nonatomic,copy) NSString * bookingDescription; 
@property (nonatomic,copy) NSDate * bookingDate; 
@property (assign,nonatomic) unsigned long long partySize; 
@property (nonatomic,copy) NSString * bookingIdentifier; 
@property (assign,getter=isBookingAvailable,nonatomic) BOOL bookingAvailable; 
@property (nonatomic,copy) NSArray * offers; 
@property (assign,nonatomic) BOOL requiresManualRequest; 
@property (assign,nonatomic) BOOL requiresEmailAddress; 
@property (assign,nonatomic) BOOL requiresName; 
@property (assign,nonatomic) BOOL requiresPhoneNumber; 
@required
-(id)init;
-(void)setPartySize:(unsigned long long)arg1;
-(void)setOffers:(id)arg1;
-(void)setRestaurant:(id)arg1;
-(NSDate *)bookingDate;
-(NSString *)bookingDescription;
-(void)setBookingDescription:(id)arg1;
-(void)setBookingDate:(id)arg1;
-(NSString *)bookingIdentifier;
-(void)setBookingIdentifier:(id)arg1;
-(BOOL)isBookingAvailable;
-(void)setBookingAvailable:(BOOL)arg1;
-(BOOL)requiresManualRequest;
-(BOOL)requiresName;
-(void)setRequiresManualRequest:(BOOL)arg1;
-(BOOL)requiresEmailAddress;
-(void)setRequiresEmailAddress:(BOOL)arg1;
-(void)setRequiresName:(BOOL)arg1;
-(BOOL)requiresPhoneNumber;
-(void)setRequiresPhoneNumber:(BOOL)arg1;
-(unsigned long long)partySize;
-(INRestaurant *)restaurant;
-(NSArray *)offers;

@end

