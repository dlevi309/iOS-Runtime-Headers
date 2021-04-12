/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SALocalSearchBusiness2.h>

@class NSArray, NSURL;

@interface SARestaurantRestaurant : SALocalSearchBusiness2

@property (nonatomic,copy) NSArray * attributeSet; 
@property (nonatomic,copy) NSArray * makeReservationPunchOuts; 
@property (nonatomic,copy) NSURL * menuLink; 
@property (nonatomic,copy) NSArray * openings; 
@property (nonatomic,copy) NSArray * orderDeliveryPunchOuts; 
+(id)restaurantWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)restaurant;
-(id)groupIdentifier;
-(NSArray *)attributeSet;
-(id)encodedClassName;
-(void)setAttributeSet:(NSArray *)arg1 ;
-(NSURL *)menuLink;
-(NSArray *)openings;
-(NSArray *)makeReservationPunchOuts;
-(void)setMakeReservationPunchOuts:(NSArray *)arg1 ;
-(void)setMenuLink:(NSURL *)arg1 ;
-(void)setOpenings:(NSArray *)arg1 ;
-(NSArray *)orderDeliveryPunchOuts;
-(void)setOrderDeliveryPunchOuts:(NSArray *)arg1 ;
@end

