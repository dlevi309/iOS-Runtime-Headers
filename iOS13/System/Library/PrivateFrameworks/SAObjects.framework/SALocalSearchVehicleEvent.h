/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)date;
-(id)groupIdentifier;
-(SALocation *)location;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLocation:(SALocation *)arg1 ;
-(NSString *)vehicleIdentifier;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)userSetLocation;
-(void)setVehicleIdentifier:(NSString *)arg1 ;
-(void)setUserSetLocation:(NSNumber *)arg1 ;
@end

