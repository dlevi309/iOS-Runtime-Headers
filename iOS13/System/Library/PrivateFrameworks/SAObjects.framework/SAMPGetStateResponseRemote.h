/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAMPGetState, NSArray;

@interface SAMPGetStateResponseRemote : SABaseClientBoundCommand

@property (nonatomic,retain) SAMPGetState * getState; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (assign,nonatomic) double routeTimeout; 
+(id)getStateResponseRemote;
+(id)getStateResponseRemoteWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(SAMPGetState *)getState;
-(double)routeTimeout;
-(void)setRouteTimeout:(double)arg1 ;
-(void)setGetState:(SAMPGetState *)arg1 ;
@end

