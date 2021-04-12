/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SALocalSearchVehicleEventDelete : SADomainCommand

@property (nonatomic,copy) NSArray * eventIds; 
+(id)vehicleEventDelete;
+(id)vehicleEventDeleteWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)eventIds;
-(void)setEventIds:(NSArray *)arg1 ;
@end

