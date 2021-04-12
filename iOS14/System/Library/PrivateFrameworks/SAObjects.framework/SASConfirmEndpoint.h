/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber;

@interface SASConfirmEndpoint : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * endpointConfirmationTimestamp; 
+(id)confirmEndpoint;
+(id)confirmEndpointWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)endpointConfirmationTimestamp;
-(void)setEndpointConfirmationTimestamp:(NSNumber *)arg1 ;
@end

