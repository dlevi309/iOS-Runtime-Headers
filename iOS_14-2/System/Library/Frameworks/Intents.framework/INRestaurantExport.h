/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class CLLocation, NSString;


@protocol INRestaurantExport <NSObject,JSExport>
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * vendorIdentifier; 
@property (nonatomic,copy) NSString * restaurantIdentifier; 
@required
-(id)init;
-(CLLocation *)location;
-(NSString *)restaurantIdentifier;
-(void)setRestaurantIdentifier:(id)arg1;
-(void)setLocation:(id)arg1;
-(NSString *)name;
-(NSString *)vendorIdentifier;
-(void)setName:(id)arg1;
-(void)setVendorIdentifier:(id)arg1;

@end

