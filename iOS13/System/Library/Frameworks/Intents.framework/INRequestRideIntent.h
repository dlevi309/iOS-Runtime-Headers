/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(INPaymentMethod *)paymentMethod;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(BOOL)_isUserConfirmationRequired;
-(CLPlacemark *)pickupLocation;
-(void)setPickupLocation:(CLPlacemark *)arg1 ;
-(CLPlacemark *)dropOffLocation;
-(void)setDropOffLocation:(CLPlacemark *)arg1 ;
-(INSpeakableString *)rideOptionName;
-(void)setRideOptionName:(INSpeakableString *)arg1 ;
-(NSNumber *)partySize;
-(void)setPartySize:(NSNumber *)arg1 ;
-(void)setPaymentMethod:(INPaymentMethod *)arg1 ;
-(INDateComponentsRange *)scheduledPickupTime;
-(void)setScheduledPickupTime:(INDateComponentsRange *)arg1 ;
-(id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethod:(id)arg5 scheduledPickupTime:(id)arg6 ;
-(id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethod:(id)arg5 ;
@end

