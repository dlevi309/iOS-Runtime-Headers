/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class CLPlacemark, INSpeakableString, NSNumber, INPaymentMethod, INDateComponentsRange;


@protocol INRequestRideIntentExport <NSObject,JSExport>
@property (nonatomic,copy) CLPlacemark * pickupLocation; 
@property (nonatomic,copy) CLPlacemark * dropOffLocation; 
@property (nonatomic,copy) INSpeakableString * rideOptionName; 
@property (nonatomic,copy) NSNumber * partySize; 
@property (nonatomic,copy) INPaymentMethod * paymentMethod; 
@property (nonatomic,copy) INDateComponentsRange * scheduledPickupTime; 
@required
-(id)init;
-(void)setPickupLocation:(id)arg1;
-(CLPlacemark *)dropOffLocation;
-(CLPlacemark *)pickupLocation;
-(void)setDropOffLocation:(id)arg1;
-(INSpeakableString *)rideOptionName;
-(void)setRideOptionName:(id)arg1;
-(void)setPartySize:(id)arg1;
-(INPaymentMethod *)paymentMethod;
-(void)setPaymentMethod:(id)arg1;
-(INDateComponentsRange *)scheduledPickupTime;
-(void)setScheduledPickupTime:(id)arg1;
-(NSNumber *)partySize;

@end

