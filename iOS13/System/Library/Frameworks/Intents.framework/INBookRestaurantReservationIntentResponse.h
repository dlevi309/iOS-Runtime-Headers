/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(INRestaurantReservationUserBooking *)userBooking;
-(void)setUserBooking:(INRestaurantReservationUserBooking *)arg1 ;
@end

