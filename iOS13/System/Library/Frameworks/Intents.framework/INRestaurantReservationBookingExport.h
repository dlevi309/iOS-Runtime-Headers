/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)offers;
-(void)setOffers:(id)arg1;
-(INRestaurant *)restaurant;
-(void)setRestaurant:(id)arg1;
-(unsigned long long)partySize;
-(void)setPartySize:(unsigned long long)arg1;
-(NSString *)bookingDescription;
-(void)setBookingDescription:(id)arg1;
-(NSDate *)bookingDate;
-(void)setBookingDate:(id)arg1;
-(NSString *)bookingIdentifier;
-(void)setBookingIdentifier:(id)arg1;
-(BOOL)isBookingAvailable;
-(void)setBookingAvailable:(BOOL)arg1;
-(BOOL)requiresManualRequest;
-(void)setRequiresManualRequest:(BOOL)arg1;
-(BOOL)requiresEmailAddress;
-(void)setRequiresEmailAddress:(BOOL)arg1;
-(BOOL)requiresName;
-(void)setRequiresName:(BOOL)arg1;
-(BOOL)requiresPhoneNumber;
-(void)setRequiresPhoneNumber:(BOOL)arg1;

@end

