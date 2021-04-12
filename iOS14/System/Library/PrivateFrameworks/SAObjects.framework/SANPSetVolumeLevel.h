/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray, NSNumber;

@interface SANPSetVolumeLevel : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL acknowledgedExceedingVolumeLimit; 
@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSNumber * volumeValue; 
+(id)setVolumeLevel;
+(id)setVolumeLevelWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setVolumeValue:(NSNumber *)arg1 ;
-(BOOL)acknowledgedExceedingVolumeLimit;
-(void)setAcknowledgedExceedingVolumeLimit:(BOOL)arg1 ;
-(NSNumber *)volumeValue;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
@end

