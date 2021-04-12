/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(id)arg1;
-(INPriceRange *)priceRange;
-(void)setPriceRange:(id)arg1;
-(NSDate *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(id)arg1;
-(NSNumber *)usesMeteredFare;
-(void)setUsesMeteredFare:(id)arg1;
-(NSString *)disclaimerMessage;
-(void)setDisclaimerMessage:(id)arg1;
-(NSArray *)availablePartySizeOptions;
-(void)setAvailablePartySizeOptions:(id)arg1;
-(NSString *)availablePartySizeOptionsSelectionPrompt;
-(void)setAvailablePartySizeOptionsSelectionPrompt:(id)arg1;
-(NSString *)specialPricing;
-(void)setSpecialPricing:(id)arg1;
-(INImage *)specialPricingBadgeImage;
-(void)setSpecialPricingBadgeImage:(id)arg1;
-(NSArray *)fareLineItems;
-(void)setFareLineItems:(id)arg1;
-(NSUserActivity *)userActivityForBookingInApplication;
-(void)setUserActivityForBookingInApplication:(id)arg1;

@end

