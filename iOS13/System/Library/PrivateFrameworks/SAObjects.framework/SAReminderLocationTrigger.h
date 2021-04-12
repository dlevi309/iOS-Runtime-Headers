/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(SALocation *)location;
-(NSURL *)contactIdentifier;
-(void)setLocation:(SALocation *)arg1 ;
-(NSString *)timing;
-(void)setContactIdentifier:(NSURL *)arg1 ;
-(void)setTiming:(NSString *)arg1 ;
-(NSString *)mobileSpace;
-(void)setMobileSpace:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)internalGUID;
-(void)setInternalGUID:(NSString *)arg1 ;
@end

