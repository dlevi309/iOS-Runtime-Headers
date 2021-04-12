/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDNetworkRouterFirewallRuleManagerOverrideParser : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)_parseOverrideNetworkDeclarationsWithProductGroup:(id)arg1 productNumber:(id)arg2 productNumberDictionary:(id)arg3 accessoryIdentifier:(id)arg4 ;
+(id)_parseOverridePairedMetadataWithProductGroup:(id)arg1 productNumber:(id)arg2 productNumberDictionary:(id)arg3 accessoryIdentifier:(id)arg4 ;
+(id)parseFromData:(id)arg1 ;
@end

