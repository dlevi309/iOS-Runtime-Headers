/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, SAPerson, SALocation;

@interface SAFmfGeoFenceSet : SADomainCommand

@property (nonatomic,copy) NSNumber * enable; 
@property (nonatomic,copy) NSString * fenceType; 
@property (nonatomic,retain) SAPerson * friend; 
@property (nonatomic,copy) NSString * geoFenceTrigger; 
@property (nonatomic,copy) NSNumber * oneTimeOnly; 
@property (nonatomic,retain) SALocation * requestedLocation; 
+(id)geoFenceSet;
+(id)geoFenceSetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)enable;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAPerson *)friend;
-(void)setFriend:(SAPerson *)arg1 ;
-(SALocation *)requestedLocation;
-(void)setRequestedLocation:(SALocation *)arg1 ;
-(NSString *)fenceType;
-(NSString *)geoFenceTrigger;
-(void)setGeoFenceTrigger:(NSString *)arg1 ;
-(void)setFenceType:(NSString *)arg1 ;
-(NSNumber *)oneTimeOnly;
-(void)setOneTimeOnly:(NSNumber *)arg1 ;
-(void)setEnable:(NSNumber *)arg1 ;
@end

