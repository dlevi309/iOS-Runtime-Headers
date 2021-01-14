/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAReminderTrigger.h>

@class NSURL, NSString, SALocation;

@interface SAReminderLocationTrigger : SAReminderTrigger

@property (nonatomic,copy) NSURL * contactIdentifier; 
@property (nonatomic,copy) NSString * internalGUID; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * mobileSpace; 
@property (nonatomic,copy) NSString * timing; 
+(id)locationTrigger;
+(id)locationTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)contactIdentifier;
-(NSString *)timing;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SALocation *)location;
-(void)setTiming:(NSString *)arg1 ;
-(NSString *)internalGUID;
-(void)setInternalGUID:(NSString *)arg1 ;
-(NSString *)mobileSpace;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setMobileSpace:(NSString *)arg1 ;
-(void)setContactIdentifier:(NSURL *)arg1 ;
@end

