/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMBCloudZoneRebuilder.h>

@class NAFuture, HMBCloudZoneRebuilderStatus, HMFUnfairLock, CKRecord, NSUUID, HMFTimer, HMBCloudZone, NSString;

@interface HMBPrivateCloudZoneRebuilder : HMFObject <HMFTimerDelegate, HMFLogging, HMBCloudZoneRebuilder> {

	HMBCloudZoneRebuilderStatus* _rebuilderStatus;
	NAFuture* _rebuildCompleteFuture;
	HMFUnfairLock* _propertyLock;
	CKRecord* _previousSentinelRebuildRecord;
	NSUUID* _lastRebuildUUID;
	HMFTimer* _uploadMonitorWatchdogTimer;
	HMBCloudZone* _cloudZone;

}

@property (nonatomic,readonly) HMFUnfairLock * propertyLock;                                           //@synthesize propertyLock=_propertyLock - In the implementation block
@property (nonatomic,retain) CKRecord * previousSentinelRebuildRecord;                                 //@synthesize previousSentinelRebuildRecord=_previousSentinelRebuildRecord - In the implementation block
@property (nonatomic,retain) NSUUID * lastRebuildUUID;                                                 //@synthesize lastRebuildUUID=_lastRebuildUUID - In the implementation block
@property (nonatomic,retain) HMFTimer * uploadMonitorWatchdogTimer;                                    //@synthesize uploadMonitorWatchdogTimer=_uploadMonitorWatchdogTimer - In the implementation block
@property (assign,nonatomic,__weak) HMBCloudZone * cloudZone;                                          //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,retain) NAFuture * rebuildCompleteFuture;                                         //@synthesize rebuildCompleteFuture=_rebuildCompleteFuture - In the implementation block
@property (copy) HMBCloudZoneRebuilderStatus * rebuilderStatus;                                        //@synthesize rebuilderStatus=_rebuilderStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isZoneRebuildInProgress,nonatomic,readonly) BOOL zoneRebuildInProgress; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(id)logIdentifier;
-(HMFUnfairLock *)propertyLock;
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
-(HMFTimer *)uploadMonitorWatchdogTimer;
-(void)setUploadMonitorWatchdogTimer:(HMFTimer *)arg1 ;
-(void)setLastRebuildUUID:(NSUUID *)arg1 ;
-(NSUUID *)lastRebuildUUID;
-(void)setRebuildCompleteFuture:(NAFuture *)arg1 ;
-(CKRecord *)previousSentinelRebuildRecord;
-(void)setPreviousSentinelRebuildRecord:(CKRecord *)arg1 ;
@end

