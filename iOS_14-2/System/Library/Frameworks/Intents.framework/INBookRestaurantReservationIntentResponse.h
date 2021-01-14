/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INBookRestaurantReservationIntentResponseExport.h>

@class INRestaurantReservationUserBooking, NSString;

@interface INBookRestaurantReservationIntentResponse : INIntentResponse <INImageProxyInjecting, INBookRestaurantReservationIntentResponseExport> {

	INRestaurantReservationUserBooking* _userBooking;

}

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INRestaurantReservationUserBooking * userBooking;              //@synthesize userBooking=_userBooking - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setUserBooking:(INRestaurantReservationUserBooking *)arg1 ;
-(INRestaurantReservationUserBooking *)userBooking;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

