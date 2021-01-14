/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INGetUserCurrentRestaurantReservationBookingsIntentResponseExport.h>

@class NSArray, NSString;

@interface INGetUserCurrentRestaurantReservationBookingsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetUserCurrentRestaurantReservationBookingsIntentResponseExport> {

	NSArray* _userCurrentBookings;

}

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * userCurrentBookings;              //@synthesize userCurrentBookings=_userCurrentBookings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)code;
-(NSArray *)userCurrentBookings;
-(void)setUserCurrentBookings:(NSArray *)arg1 ;
-(id)initWithUserCurrentBookings:(id)arg1 code:(long long)arg2 userActivity:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

