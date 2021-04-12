/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

