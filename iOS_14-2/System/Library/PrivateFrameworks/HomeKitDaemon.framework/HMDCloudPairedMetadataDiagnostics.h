/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSURL, HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSDictionary;

@interface HMDCloudPairedMetadataDiagnostics : HMFObject {

	NSURL* _privacyPolicyURL;
	NSURL* _uploadDestination;
	unsigned long long _consentVersion;
	unsigned long long _uploadType;
	HMDNetworkRouterFirewallRuleAccessoryIdentifier* _accessoryIdentifier;

}

@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * privacyPolicyURL;                                                           //@synthesize privacyPolicyURL=_privacyPolicyURL - In the implementation block
@property (nonatomic,readonly) NSURL * uploadDestination;                                                          //@synthesize uploadDestination=_uploadDestination - In the implementation block
@property (nonatomic,readonly) unsigned long long consentVersion;                                                  //@synthesize consentVersion=_consentVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long uploadType;                                                      //@synthesize uploadType=_uploadType - In the implementation block
@property (nonatomic,readonly) NSDictionary * prettyJSONDictionary; 
+(id)logCategory;
-(NSURL *)privacyPolicyURL;
-(id)attributeDescriptions;
-(unsigned long long)uploadType;
-(NSURL *)uploadDestination;
-(unsigned long long)consentVersion;
-(HMDNetworkRouterFirewallRuleAccessoryIdentifier *)accessoryIdentifier;
-(NSDictionary *)prettyJSONDictionary;
-(id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2 ;
-(id)initWithAccessoryIdentifier:(id)arg1 privacyPolicyURL:(id)arg2 uploadDestination:(id)arg3 consentVersion:(unsigned long long)arg4 uploadType:(unsigned long long)arg5 ;
@end

