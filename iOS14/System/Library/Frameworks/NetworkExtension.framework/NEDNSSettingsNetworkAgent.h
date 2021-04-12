/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NENetworkAgent.h>

@class NEDNSSettings;

@interface NEDNSSettingsNetworkAgent : NENetworkAgent {

	NEDNSSettings* _settings;

}

@property (retain) NEDNSSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(id)agentType;
+(id)agentDomain;
+(id)agentFromData:(id)arg1 ;
-(id)copyAgentData;
-(void)setSettings:(NEDNSSettings *)arg1 ;
-(NEDNSSettings *)settings;
-(id)agentDescription;
@end

