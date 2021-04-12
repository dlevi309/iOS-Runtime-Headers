/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INGetRestaurantGuestIntentResponseExport.h>

@class INRestaurantGuest, INRestaurantGuestDisplayPreferences, NSString;

@interface INGetRestaurantGuestIntentResponse : INIntentResponse <INImageProxyInjecting, INGetRestaurantGuestIntentResponseExport> {

	INRestaurantGuest* _guest;
	INRestaurantGuestDisplayPreferences* _guestDisplayPreferences;

}

@property (nonatomic,copy) INRestaurantGuest * guest;                                                  //@synthesize guest=_guest - In the implementation block
@property (nonatomic,copy) INRestaurantGuestDisplayPreferences * guestDisplayPreferences;              //@synthesize guestDisplayPreferences=_guestDisplayPreferences - In the implementation block
@property (nonatomic,readonly) long long code; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setGuest:(INRestaurantGuest *)arg1 ;
-(INRestaurantGuest *)guest;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(INRestaurantGuestDisplayPreferences *)guestDisplayPreferences;
-(void)setGuestDisplayPreferences:(INRestaurantGuestDisplayPreferences *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

