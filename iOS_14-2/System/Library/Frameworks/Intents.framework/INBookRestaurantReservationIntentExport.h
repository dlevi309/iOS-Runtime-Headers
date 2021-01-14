/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INRestaurant, NSDateComponents, NSString, INRestaurantGuest, INRestaurantOffer;


@protocol INBookRestaurantReservationIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurant * restaurant; 
@property (nonatomic,copy) NSDateComponents * bookingDateComponents; 
@property (assign,nonatomic) unsigned long long partySize; 
@property (nonatomic,copy) NSString * bookingIdentifier; 
@property (nonatomic,copy) INRestaurantGuest * guest; 
@property (nonatomic,copy) INRestaurantOffer * selectedOffer; 
@property (nonatomic,copy) NSString * guestProvidedSpecialRequestText; 
@required
-(void)setGuest:(id)arg1;
-(INRestaurantGuest *)guest;
-(id)init;
-(void)setPartySize:(unsigned long long)arg1;
-(INRestaurantOffer *)selectedOffer;
-(void)setSelectedOffer:(id)arg1;
-(NSString *)guestProvidedSpecialRequestText;
-(void)setGuestProvidedSpecialRequestText:(id)arg1;
-(void)setRestaurant:(id)arg1;
-(NSString *)bookingIdentifier;
-(void)setBookingIdentifier:(id)arg1;
-(unsigned long long)partySize;
-(NSDateComponents *)bookingDateComponents;
-(void)setBookingDateComponents:(id)arg1;
-(INRestaurant *)restaurant;

@end

