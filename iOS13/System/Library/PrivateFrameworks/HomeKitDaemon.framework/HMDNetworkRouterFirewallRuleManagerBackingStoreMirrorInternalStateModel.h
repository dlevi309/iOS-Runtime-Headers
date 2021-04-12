/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

