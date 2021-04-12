/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SASetHandoffPayload : SABaseClientBoundCommand

@property (nonatomic,retain) id<SAHandoffPayload> handoffPayload; 
+(id)setHandoffPayload;
+(id)setHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id<SAHandoffPayload>)handoffPayload;
-(void)setHandoffPayload:(id<SAHandoffPayload>)arg1 ;
@end

