/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSData, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudAccessoryModel : HMBModel <HMFLogging>

@property (nonatomic,retain) NSData * networkDeclarationsData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)hmbProperties;
+(id)modelIDForRecordID:(id)arg1 ;
+(id)namespaceID;
-(id)initWithCloudZoneID:(id)arg1 recordID:(id)arg2 networkDeclarationsData:(id)arg3 ;
-(id)initWithModelID:(id)arg1 parentModelID:(id)arg2 networkDeclarationsData:(id)arg3 ;
@end

