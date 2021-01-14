/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSDate, NSNumber, INImage;


@protocol INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) unsigned long long defaultPartySize; 
@property (nonatomic,copy,readonly) NSDate * defaultBookingDate; 
@property (nonatomic,copy) NSNumber * maximumPartySize; 
@property (nonatomic,copy) NSNumber * minimumPartySize; 
@property (nonatomic,copy) INImage * providerImage; 
@required
-(id)init;
-(INImage *)providerImage;
-(unsigned long long)defaultPartySize;
-(NSDate *)defaultBookingDate;
-(NSNumber *)maximumPartySize;
-(void)setMaximumPartySize:(id)arg1;
-(NSNumber *)minimumPartySize;
-(void)setMinimumPartySize:(id)arg1;
-(void)setProviderImage:(id)arg1;

@end

