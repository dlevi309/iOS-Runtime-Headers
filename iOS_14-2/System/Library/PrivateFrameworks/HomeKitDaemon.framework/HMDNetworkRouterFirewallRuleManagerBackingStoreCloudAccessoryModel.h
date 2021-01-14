/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSData, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudAccessoryModel : HMBModel <HMFLogging>

@property (nonatomic,retain) NSData * networkDeclarationsData; 
@property (nonatomic,retain) NSData * pairedMetadataData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)hmbProperties;
+(id)modelIDForRecordID:(id)arg1 ;
+(id)namespaceID;
-(id)initWithCloudZoneID:(id)arg1 recordID:(id)arg2 networkDeclarationsData:(id)arg3 pairedMetadataData:(id)arg4 ;
-(id)initWithModelID:(id)arg1 parentModelID:(id)arg2 networkDeclarationsData:(id)arg3 pairedMetadataData:(id)arg4 ;
-(id)initWithModelID:(id)arg1 parentModelID:(id)arg2 networkDeclarationsData:(id)arg3 ;
-(id)initWithCloudZoneID:(id)arg1 recordID:(id)arg2 networkDeclarationsData:(id)arg3 ;
@end

