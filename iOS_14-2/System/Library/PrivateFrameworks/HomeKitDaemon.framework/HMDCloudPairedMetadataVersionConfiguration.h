/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDCloudPairedMetadataDiagnostics, HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSDictionary, NSString;

@interface HMDCloudPairedMetadataVersionConfiguration : HMFObject <HMFLogging> {

	HMDCloudPairedMetadataDiagnostics* _diagnostics;
	HMDNetworkRouterFirewallRuleAccessoryIdentifier* _accessoryIdentifier;

}

@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,readonly) HMDCloudPairedMetadataDiagnostics * diagnostics;                                    //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,readonly) NSDictionary * prettyJSONDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDCloudPairedMetadataDiagnostics *)diagnostics;
-(id)attributeDescriptions;
-(HMDNetworkRouterFirewallRuleAccessoryIdentifier *)accessoryIdentifier;
-(NSDictionary *)prettyJSONDictionary;
-(id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2 ;
-(id)initWithAccessoryIdentifier:(id)arg1 diagnostics:(id)arg2 ;
@end

