/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(NSNumber *)enable;
-(void)setEnable:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAPerson *)friend;
-(void)setFriend:(SAPerson *)arg1 ;
-(SALocation *)requestedLocation;
-(void)setRequestedLocation:(SALocation *)arg1 ;
-(NSString *)geoFenceTrigger;
-(void)setGeoFenceTrigger:(NSString *)arg1 ;
-(NSString *)fenceType;
-(void)setFenceType:(NSString *)arg1 ;
-(NSNumber *)oneTimeOnly;
-(void)setOneTimeOnly:(NSNumber *)arg1 ;
@end

