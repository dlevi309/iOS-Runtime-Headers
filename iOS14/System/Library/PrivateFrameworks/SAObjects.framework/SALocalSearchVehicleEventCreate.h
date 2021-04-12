/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSString;

@interface SALocalSearchVehicleEventCreate : SADomainCommand

@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * notes; 
+(id)vehicleEventCreate;
+(id)vehicleEventCreateWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)notes;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setNotes:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
@end

