/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@interface SAMPGetRoutes : SADomainCommand

@property (assign,nonatomic) double routeTimeout; 
+(id)getRoutes;
+(id)getRoutesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(double)routeTimeout;
-(void)setRouteTimeout:(double)arg1 ;
@end

