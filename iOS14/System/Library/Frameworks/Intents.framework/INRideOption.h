/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INRideOptionExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, INPriceRange, NSNumber, NSArray, INImage, NSUserActivity;

@interface INRideOption : NSObject <INCacheableContainer, INRideOptionExport, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSArray* _availablePartySizeOptions;
	NSArray* _fareLineItems;
	NSString* _name;
	NSDate* _estimatedPickupDate;
	INPriceRange* _priceRange;
	NSNumber* _usesMeteredFare;
	NSString* _disclaimerMessage;
	NSString* _availablePartySizeOptionsSelectionPrompt;
	NSString* _specialPricing;
	INImage* _specialPricingBadgeImage;
	NSUserActivity* _userActivityForBookingInApplication;

}

@property (nonatomic,copy) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDate * estimatedPickupDate;                                        //@synthesize estimatedPickupDate=_estimatedPickupDate - In the implementation block
@property (nonatomic,copy) INPriceRange * priceRange;                                           //@synthesize priceRange=_priceRange - In the implementation block
@property (nonatomic,copy) NSNumber * usesMeteredFare;                                          //@synthesize usesMeteredFare=_usesMeteredFare - In the implementation block
@property (nonatomic,copy) NSString * disclaimerMessage;                                        //@synthesize disclaimerMessage=_disclaimerMessage - In the implementation block
@property (nonatomic,copy) NSArray * availablePartySizeOptions;                                 //@synthesize availablePartySizeOptions=_availablePartySizeOptions - In the implementation block
@property (nonatomic,copy) NSString * availablePartySizeOptionsSelectionPrompt;                 //@synthesize availablePartySizeOptionsSelectionPrompt=_availablePartySizeOptionsSelectionPrompt - In the implementation block
@property (nonatomic,copy) NSString * specialPricing;                                           //@synthesize specialPricing=_specialPricing - In the implementation block
@property (nonatomic,copy) INImage * specialPricingBadgeImage;                                  //@synthesize specialPricingBadgeImage=_specialPricingBadgeImage - In the implementation block
@property (nonatomic,copy) NSArray * fareLineItems;                                             //@synthesize fareLineItems=_fareLineItems - In the implementation block
@property (nonatomic,retain) NSUserActivity * userActivityForBookingInApplication;              //@synthesize userActivityForBookingInApplication=_userActivityForBookingInApplication - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INPriceRange *)priceRange;
-(NSString *)name;
-(NSDate *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(NSDate *)arg1 ;
-(NSString *)description;
-(NSNumber *)usesMeteredFare;
-(void)setUsesMeteredFare:(NSNumber *)arg1 ;
-(NSString *)disclaimerMessage;
-(void)setDisclaimerMessage:(NSString *)arg1 ;
-(NSArray *)availablePartySizeOptions;
-(void)setAvailablePartySizeOptions:(NSArray *)arg1 ;
-(void)setSpecialPricing:(NSString *)arg1 ;
-(NSString *)availablePartySizeOptionsSelectionPrompt;
-(void)setAvailablePartySizeOptionsSelectionPrompt:(NSString *)arg1 ;
-(NSString *)specialPricing;
-(INImage *)specialPricingBadgeImage;
-(void)setSpecialPricingBadgeImage:(INImage *)arg1 ;
-(NSArray *)fareLineItems;
-(void)setFareLineItems:(NSArray *)arg1 ;
-(NSUserActivity *)userActivityForBookingInApplication;
-(void)setUserActivityForBookingInApplication:(NSUserActivity *)arg1 ;
-(id)initWithName:(id)arg1 estimatedPickupDate:(id)arg2 ;
-(unsigned long long)hash;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriceRange:(INPriceRange *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

