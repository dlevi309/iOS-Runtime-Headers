/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMBCloudZoneRebuilder.h>

@class HMBCloudZoneRebuilderStatus, NAFuture, HMBCloudZone, NSString;

@interface HMBSharedCloudZoneRebuilder : HMFObject <HMFLogging, HMBCloudZoneRebuilder> {

	HMBCloudZoneRebuilderStatus* _rebuilderStatus;
	NAFuture* _rebuildCompleteFuture;
	HMBCloudZone* _cloudZone;

}

@property (assign,nonatomic,__weak) HMBCloudZone * cloudZone;                                          //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,retain) NAFuture * rebuildCompleteFuture;                                         //@synthesize rebuildCompleteFuture=_rebuildCompleteFuture - In the implementation block
@property (copy) HMBCloudZoneRebuilderStatus * rebuilderStatus;                                        //@synthesize rebuilderStatus=_rebuilderStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isZoneRebuildInProgress,nonatomic,readonly) BOOL zoneRebuildInProgress; 
+(id)logCategory;
-(id)logIdentifier;
-(void)rebuild;
-(HMBCloudZoneRebuilderStatus *)rebuilderStatus;
-(NAFuture *)rebuildCompleteFuture;
-(id)zoneStartUp;
-(void)handleIdentityLost;
-(BOOL)isZoneRebuildInProgress;
-(void)handleZoneChanged;
-(id)initWithCloudZone:(id)arg1 ;
-(HMBCloudZone *)cloudZone;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(void)setRebuilderStatus:(HMBCloudZoneRebuilderStatus *)arg1 ;
-(void)setRebuildCompleteFuture:(NAFuture *)arg1 ;
@end

