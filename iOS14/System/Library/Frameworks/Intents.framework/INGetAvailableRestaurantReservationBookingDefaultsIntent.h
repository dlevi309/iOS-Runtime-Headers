/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INGetAvailableRestaurantReservationBookingDefaultsIntentExport.h>

@class INRestaurant, NSString;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntent : INIntent <INGetAvailableRestaurantReservationBookingDefaultsIntentExport> {

	INRestaurant* _restaurant;

}

@property (nonatomic,copy) INRestaurant * restaurant;               //@synthesize restaurant=_restaurant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentDescription;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)initWithRestaurant:(id)arg1 ;
-(void)setRestaurant:(INRestaurant *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INRestaurant *)restaurant;
-(BOOL)isEqual:(id)arg1 ;
@end

