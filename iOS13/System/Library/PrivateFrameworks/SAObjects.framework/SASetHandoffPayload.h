/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

