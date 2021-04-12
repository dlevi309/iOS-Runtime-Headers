/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, INTermsAndConditions, NSArray;


@protocol INGetAvailableRestaurantReservationBookingsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * localizedRestaurantDescriptionText; 
@property (nonatomic,copy) NSString * localizedBookingAdvisementText; 
@property (nonatomic,copy) INTermsAndConditions * termsAndConditions; 
@property (nonatomic,readonly) NSArray * availableBookings; 
@required
-(id)init;
-(NSString *)localizedRestaurantDescriptionText;
-(void)setLocalizedRestaurantDescriptionText:(id)arg1;
-(NSString *)localizedBookingAdvisementText;
-(void)setLocalizedBookingAdvisementText:(id)arg1;
-(INTermsAndConditions *)termsAndConditions;
-(void)setTermsAndConditions:(id)arg1;
-(NSArray *)availableBookings;
-(long long)code;

@end

