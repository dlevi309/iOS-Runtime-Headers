/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, SALocation, NSString, NSNumber;

@interface SALocalSearchVehicleEvent : SADomainObject

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSNumber * userSetLocation; 
@property (nonatomic,copy) NSString * vehicleIdentifier; 
+(id)vehicleEvent;
+(id)vehicleEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)notes;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setNotes:(NSString *)arg1 ;
-(SALocation *)location;
-(NSString *)vehicleIdentifier;
-(void)setVehicleIdentifier:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLocation:(SALocation *)arg1 ;
-(NSNumber *)userSetLocation;
-(void)setUserSetLocation:(NSNumber *)arg1 ;
-(NSDate *)date;
@end

