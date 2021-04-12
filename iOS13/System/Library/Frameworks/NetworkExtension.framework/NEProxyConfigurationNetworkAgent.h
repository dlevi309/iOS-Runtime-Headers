/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NENetworkAgent.h>

@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent {

	NSData* _agentData;

}

@property (retain) NSData * agentData;              //@synthesize agentData=_agentData - In the implementation block
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(id)agentDescription;
-(NSData *)agentData;
-(void)setAgentData:(NSData *)arg1 ;
-(id)copyAgentData;
-(id)initWithProxyConfiguration:(id)arg1 ;
@end

