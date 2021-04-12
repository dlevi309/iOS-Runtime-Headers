/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INGetAvailableRestaurantReservationBookingsIntentResponseExport.h>

@class NSString, INTermsAndConditions, NSArray;

@interface INGetAvailableRestaurantReservationBookingsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetAvailableRestaurantReservationBookingsIntentResponseExport> {

	NSString* _localizedRestaurantDescriptionText;
	NSString* _localizedBookingAdvisementText;
	INTermsAndConditions* _termsAndConditions;
	NSArray* _availableBookings;

}

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * localizedRestaurantDescriptionText;              //@synthesize localizedRestaurantDescriptionText=_localizedRestaurantDescriptionText - In the implementation block
@property (nonatomic,copy) NSString * localizedBookingAdvisementText;                  //@synthesize localizedBookingAdvisementText=_localizedBookingAdvisementText - In the implementation block
@property (nonatomic,copy) INTermsAndConditions * termsAndConditions;                  //@synthesize termsAndConditions=_termsAndConditions - In the implementation block
@property (nonatomic,readonly) NSArray * availableBookings;                            //@synthesize availableBookings=_availableBookings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(NSString *)localizedRestaurantDescriptionText;
-(void)setLocalizedRestaurantDescriptionText:(NSString *)arg1 ;
-(NSString *)localizedBookingAdvisementText;
-(void)setLocalizedBookingAdvisementText:(NSString *)arg1 ;
-(INTermsAndConditions *)termsAndConditions;
-(void)setTermsAndConditions:(INTermsAndConditions *)arg1 ;
-(NSArray *)availableBookings;
-(id)initWithAvailableBookings:(id)arg1 code:(long long)arg2 userActivity:(id)arg3 ;
@end

