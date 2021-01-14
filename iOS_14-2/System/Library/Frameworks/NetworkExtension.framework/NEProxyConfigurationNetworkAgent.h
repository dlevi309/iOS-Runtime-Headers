/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NENetworkAgent.h>

@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent {

	NSData* _agentData;

}

@property (retain) NSData * agentData;              //@synthesize agentData=_agentData - In the implementation block
+(id)agentType;
+(id)agentDomain;
+(id)agentFromData:(id)arg1 ;
-(id)initWithProxyConfiguration:(id)arg1 ;
-(id)copyAgentData;
-(void)setAgentData:(NSData *)arg1 ;
-(NSData *)agentData;
-(id)agentDescription;
@end

