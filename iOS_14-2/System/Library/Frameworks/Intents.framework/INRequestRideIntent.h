/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INRequestRideIntentExport.h>

@class CLPlacemark, INSpeakableString, NSNumber, INPaymentMethod, INDateComponentsRange, NSString;

@interface INRequestRideIntent : INIntent <INRequestRideIntentExport>

@property (nonatomic,copy,readonly) CLPlacemark * pickupLocation; 
@property (nonatomic,copy,readonly) CLPlacemark * dropOffLocation; 
@property (nonatomic,copy,readonly) INSpeakableString * rideOptionName; 
@property (nonatomic,copy,readonly) NSNumber * partySize; 
@property (nonatomic,copy,readonly) INPaymentMethod * paymentMethod; 
@property (nonatomic,copy,readonly) INDateComponentsRange * scheduledPickupTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_ignoredParameters;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(void)setPickupLocation:(CLPlacemark *)arg1 ;
-(CLPlacemark *)dropOffLocation;
-(CLPlacemark *)pickupLocation;
-(void)setDropOffLocation:(CLPlacemark *)arg1 ;
-(INSpeakableString *)rideOptionName;
-(void)setRideOptionName:(INSpeakableString *)arg1 ;
-(void)setPartySize:(NSNumber *)arg1 ;
-(INPaymentMethod *)paymentMethod;
-(void)setPaymentMethod:(INPaymentMethod *)arg1 ;
-(INDateComponentsRange *)scheduledPickupTime;
-(void)setScheduledPickupTime:(INDateComponentsRange *)arg1 ;
-(id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethod:(id)arg5 scheduledPickupTime:(id)arg6 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(BOOL)_isUserConfirmationRequired;
-(id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethod:(id)arg5 ;
-(NSNumber *)partySize;
@end

