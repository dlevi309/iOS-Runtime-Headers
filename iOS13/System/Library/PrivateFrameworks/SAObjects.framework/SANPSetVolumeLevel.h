/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(NSNumber *)volumeValue;
-(void)setVolumeValue:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)acknowledgedExceedingVolumeLimit;
-(void)setAcknowledgedExceedingVolumeLimit:(BOOL)arg1 ;
@end

