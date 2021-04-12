/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NENetworkAgent.h>

@class NSArray;

@interface NEPersonalDNSNetworkAgent : NENetworkAgent {

	NSArray* _settings;

}

@property (retain) NSArray * settings;              //@synthesize settings=_settings - In the implementation block
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(NSArray *)settings;
-(void)setSettings:(NSArray *)arg1 ;
-(id)copyAgentData;
@end

