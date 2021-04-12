/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)defaultPartySize;
-(NSDate *)defaultBookingDate;
-(NSNumber *)maximumPartySize;
-(void)setMaximumPartySize:(id)arg1;
-(NSNumber *)minimumPartySize;
-(void)setMinimumPartySize:(id)arg1;
-(INImage *)providerImage;
-(void)setProviderImage:(id)arg1;

@end

