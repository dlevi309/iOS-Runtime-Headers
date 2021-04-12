/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAMPGetState *)getState;
-(BOOL)mutatingCommand;
-(void)setGetState:(SAMPGetState *)arg1 ;
-(double)routeTimeout;
-(void)setRouteTimeout:(double)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
@end

