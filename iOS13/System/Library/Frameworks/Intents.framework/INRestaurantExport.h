/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(id)arg1;
-(CLLocation *)location;
-(void)setLocation:(id)arg1;
-(NSString *)vendorIdentifier;
-(void)setVendorIdentifier:(id)arg1;
-(NSString *)restaurantIdentifier;
-(void)setRestaurantIdentifier:(id)arg1;

@end

