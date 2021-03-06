/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAPersonAttribute;

@interface SAPhoneClientCoordinationPhoneCall : SABaseClientBoundCommand

@property (nonatomic,retain) SAPersonAttribute * callRecipient; 
@property (assign,nonatomic) BOOL emergencyCall; 
+(id)clientCoordinationPhoneCall;
+(id)clientCoordinationPhoneCallWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAPersonAttribute *)callRecipient;
-(void)setCallRecipient:(SAPersonAttribute *)arg1 ;
-(BOOL)emergencyCall;
-(void)setEmergencyCall:(BOOL)arg1 ;
@end

