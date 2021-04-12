/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSString;

@interface SALocalSearchVehicleEventCreate : SADomainCommand

@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * notes; 
+(id)vehicleEventCreate;
+(id)vehicleEventCreateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

