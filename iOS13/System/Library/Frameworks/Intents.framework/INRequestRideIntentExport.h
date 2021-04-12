/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(INPaymentMethod *)paymentMethod;
-(CLPlacemark *)pickupLocation;
-(void)setPickupLocation:(id)arg1;
-(CLPlacemark *)dropOffLocation;
-(void)setDropOffLocation:(id)arg1;
-(INSpeakableString *)rideOptionName;
-(void)setRideOptionName:(id)arg1;
-(NSNumber *)partySize;
-(void)setPartySize:(id)arg1;
-(void)setPaymentMethod:(id)arg1;
-(INDateComponentsRange *)scheduledPickupTime;
-(void)setScheduledPickupTime:(id)arg1;

@end

