/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SALocation, NSString;

@interface SALocalSearchStartNavigation : SABaseClientBoundCommand

@property (nonatomic,retain) SALocation * destination; 
@property (nonatomic,copy) NSString * directionsType; 
@property (nonatomic,retain) SALocation * origin; 
+(id)startNavigation;
+(id)startNavigationWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setOrigin:(SALocation *)arg1 ;
-(void)setDestination:(SALocation *)arg1 ;
-(SALocation *)origin;
-(id)groupIdentifier;
-(NSString *)directionsType;
-(id)encodedClassName;
-(void)setDirectionsType:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(SALocation *)destination;
@end

