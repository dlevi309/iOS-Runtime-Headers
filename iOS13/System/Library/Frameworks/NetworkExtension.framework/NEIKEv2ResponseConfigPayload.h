/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2ConfigPayload.h>

@class NEIKEv2ConfigurationMessage;

@interface NEIKEv2ResponseConfigPayload : NEIKEv2ConfigPayload {

	NEIKEv2ConfigurationMessage* _configurationRequest;

}

@property (retain) NEIKEv2ConfigurationMessage * configurationRequest;              //@synthesize configurationRequest=_configurationRequest - In the implementation block
-(NEIKEv2ConfigurationMessage *)configurationRequest;
-(void)setConfigurationRequest:(NEIKEv2ConfigurationMessage *)arg1 ;
-(BOOL)parsePayloadData;
-(id)initWithResponseConfigPayload:(id)arg1 configRequest:(id)arg2 ;
@end

