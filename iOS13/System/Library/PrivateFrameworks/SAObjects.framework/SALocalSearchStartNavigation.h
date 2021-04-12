/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(SALocation *)destination;
-(void)setDestination:(SALocation *)arg1 ;
-(SALocation *)origin;
-(void)setOrigin:(SALocation *)arg1 ;
-(NSString *)directionsType;
-(void)setDirectionsType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

