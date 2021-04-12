/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)code;
-(NSString *)localizedRestaurantDescriptionText;
-(void)setLocalizedRestaurantDescriptionText:(id)arg1;
-(NSString *)localizedBookingAdvisementText;
-(void)setLocalizedBookingAdvisementText:(id)arg1;
-(INTermsAndConditions *)termsAndConditions;
-(void)setTermsAndConditions:(id)arg1;
-(NSArray *)availableBookings;

@end

