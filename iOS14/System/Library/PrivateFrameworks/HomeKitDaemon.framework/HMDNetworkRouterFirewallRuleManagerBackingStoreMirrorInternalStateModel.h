/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSSet, NSData, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel : HMBModel <HMFLogging> {

	NSSet* _lastSynchronizedRecordIDs;

}

@property (nonatomic,retain) NSData * archivedLastSynchronizedRecordIDs; 
@property (nonatomic,retain) NSSet * lastSynchronizedRecordIDs;                       //@synthesize lastSynchronizedRecordIDs=_lastSynchronizedRecordIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)modelID;
+(id)hmbProperties;
+(id)parentModelID;
-(id)init;
-(NSSet *)lastSynchronizedRecordIDs;
-(void)setLastSynchronizedRecordIDs:(NSSet *)arg1 ;
@end

