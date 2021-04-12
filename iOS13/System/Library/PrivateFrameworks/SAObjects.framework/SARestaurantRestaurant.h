/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)restaurant;
+(id)restaurantWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)attributeSet;
-(id)encodedClassName;
-(void)setAttributeSet:(NSArray *)arg1 ;
-(NSArray *)makeReservationPunchOuts;
-(void)setMakeReservationPunchOuts:(NSArray *)arg1 ;
-(NSURL *)menuLink;
-(void)setMenuLink:(NSURL *)arg1 ;
-(NSArray *)openings;
-(void)setOpenings:(NSArray *)arg1 ;
-(NSArray *)orderDeliveryPunchOuts;
-(void)setOrderDeliveryPunchOuts:(NSArray *)arg1 ;
@end

