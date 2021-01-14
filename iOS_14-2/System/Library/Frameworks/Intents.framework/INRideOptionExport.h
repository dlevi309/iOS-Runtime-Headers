/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, NSDate, INPriceRange, NSNumber, NSArray, INImage, NSUserActivity;


@protocol INRideOptionExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSDate * estimatedPickupDate; 
@property (nonatomic,copy) INPriceRange * priceRange; 
@property (nonatomic,copy) NSNumber * usesMeteredFare; 
@property (nonatomic,copy) NSString * disclaimerMessage; 
@property (nonatomic,copy) NSArray * availablePartySizeOptions; 
@property (nonatomic,copy) NSString * availablePartySizeOptionsSelectionPrompt; 
@property (nonatomic,copy) NSString * specialPricing; 
@property (nonatomic,copy) INImage * specialPricingBadgeImage; 
@property (nonatomic,copy) NSArray * fareLineItems; 
@property (nonatomic,retain) NSUserActivity * userActivityForBookingInApplication; 
@required
-(id)init;
-(INPriceRange *)priceRange;
-(NSString *)name;
-(NSDate *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(id)arg1;
-(NSNumber *)usesMeteredFare;
-(void)setUsesMeteredFare:(id)arg1;
-(NSString *)disclaimerMessage;
-(void)setDisclaimerMessage:(id)arg1;
-(NSArray *)availablePartySizeOptions;
-(void)setAvailablePartySizeOptions:(id)arg1;
-(void)setSpecialPricing:(id)arg1;
-(NSString *)availablePartySizeOptionsSelectionPrompt;
-(void)setAvailablePartySizeOptionsSelectionPrompt:(id)arg1;
-(NSString *)specialPricing;
-(INImage *)specialPricingBadgeImage;
-(void)setSpecialPricingBadgeImage:(id)arg1;
-(NSArray *)fareLineItems;
-(void)setFareLineItems:(id)arg1;
-(NSUserActivity *)userActivityForBookingInApplication;
-(void)setUserActivityForBookingInApplication:(id)arg1;
-(void)setName:(id)arg1;
-(void)setPriceRange:(id)arg1;

@end

