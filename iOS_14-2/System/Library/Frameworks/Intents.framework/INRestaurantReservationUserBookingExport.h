/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INRestaurantGuest, NSString, INRestaurantOffer, NSDate;


@protocol INRestaurantReservationUserBookingExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurantGuest * guest; 
@property (nonatomic,copy) NSString * advisementText; 
@property (nonatomic,copy) INRestaurantOffer * selectedOffer; 
@property (nonatomic,copy) NSString * guestProvidedSpecialRequestText; 
@property (assign,nonatomic) unsigned long long status; 
@property (nonatomic,copy) NSDate * dateStatusModified; 
@required
-(void)setGuest:(id)arg1;
-(INRestaurantGuest *)guest;
-(id)init;
-(NSString *)advisementText;
-(void)setAdvisementText:(id)arg1;
-(INRestaurantOffer *)selectedOffer;
-(void)setSelectedOffer:(id)arg1;
-(NSString *)guestProvidedSpecialRequestText;
-(void)setGuestProvidedSpecialRequestText:(id)arg1;
-(NSDate *)dateStatusModified;
-(void)setDateStatusModified:(id)arg1;
-(void)setStatus:(unsigned long long)arg1;
-(unsigned long long)status;

@end

