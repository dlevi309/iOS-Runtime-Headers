/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSArray, NSDictionary, NSString;

@interface HMDCloudPairedMetadata : HMFObject <HMFLogging> {

	HMDNetworkRouterFirewallRuleAccessoryIdentifier* _baseAccessoryIdentifier;
	NSArray* _versionConfigurations;

}

@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier * baseAccessoryIdentifier;              //@synthesize baseAccessoryIdentifier=_baseAccessoryIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * versionConfigurations;                                                        //@synthesize versionConfigurations=_versionConfigurations - In the implementation block
@property (nonatomic,readonly) NSDictionary * prettyJSONDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)__decodeVersionConfigurationWithVersionString:(id)arg1 versionConfigurationValue:(id)arg2 baseAccessoryIdentifier:(id)arg3 ;
+(id)_decodeVersionConfigurationsFromJSONDictionary:(id)arg1 baseAccessoryIdentifier:(id)arg2 allowUnzippedData:(BOOL)arg3 ;
-(id)attributeDescriptions;
-(NSDictionary *)prettyJSONDictionary;
-(id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2 ;
-(id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2 allowUnzippedData:(BOOL)arg3 ;
-(HMDNetworkRouterFirewallRuleAccessoryIdentifier *)baseAccessoryIdentifier;
-(NSArray *)versionConfigurations;
-(id)initWithBaseAccessoryIdentifier:(id)arg1 versionConfigurations:(id)arg2 ;
@end

