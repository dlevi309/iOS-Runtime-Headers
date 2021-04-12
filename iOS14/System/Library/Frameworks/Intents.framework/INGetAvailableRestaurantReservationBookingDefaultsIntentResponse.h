/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport.h>

@class NSDate, NSNumber, INImage, NSString;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport> {

	unsigned long long _defaultPartySize;
	NSDate* _defaultBookingDate;
	NSNumber* _maximumPartySize;
	NSNumber* _minimumPartySize;
	INImage* _providerImage;

}

@property (nonatomic,readonly) unsigned long long defaultPartySize;              //@synthesize defaultPartySize=_defaultPartySize - In the implementation block
@property (nonatomic,copy,readonly) NSDate * defaultBookingDate;                 //@synthesize defaultBookingDate=_defaultBookingDate - In the implementation block
@property (nonatomic,copy) NSNumber * maximumPartySize;                          //@synthesize maximumPartySize=_maximumPartySize - In the implementation block
@property (nonatomic,copy) NSNumber * minimumPartySize;                          //@synthesize minimumPartySize=_minimumPartySize - In the implementation block
@property (nonatomic,copy) INImage * providerImage;                              //@synthesize providerImage=_providerImage - In the implementation block
@property (nonatomic,readonly) long long code; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INImage *)providerImage;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)code;
-(unsigned long long)defaultPartySize;
-(NSDate *)defaultBookingDate;
-(NSNumber *)maximumPartySize;
-(void)setMaximumPartySize:(NSNumber *)arg1 ;
-(NSNumber *)minimumPartySize;
-(void)setMinimumPartySize:(NSNumber *)arg1 ;
-(void)setProviderImage:(INImage *)arg1 ;
-(id)initWithDefaultPartySize:(unsigned long long)arg1 defaultBookingDate:(id)arg2 code:(long long)arg3 userActivity:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

