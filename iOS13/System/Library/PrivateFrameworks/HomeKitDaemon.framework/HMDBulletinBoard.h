/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDUserNotificationCenter, NSMutableDictionary, HMDHomeManager;

@interface HMDBulletinBoard : HMFObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDUserNotificationCenter* _notificationCenter;
	NSMutableDictionary* _characteristicTuples;
	HMDHomeManager* _homeManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMDUserNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * characteristicTuples;                  //@synthesize characteristicTuples=_characteristicTuples - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                         //@synthesize homeManager=_homeManager - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unarchive;
+(id)sharedBulletinBoard;
+(BOOL)isBulletinSupportedForNonSecureCharacteristicType:(id)arg1 serviceType:(id)arg2 ;
+(BOOL)isCriticalNonSecureServiceType:(id)arg1 ;
+(id)bulletinSupportedCharacteristicsForService:(id)arg1 ;
+(id)generateActionURLForHomeUUID:(id)arg1 cameraUUID:(id)arg2 ;
+(id)_targetCurrentCharacteristicTypeMap;
+(id)_supportedSecureServices;
+(id)_supportedNonSecureServices;
+(BOOL)isBulletinSupportedForCharacteristicType:(id)arg1 serviceType:(id)arg2 ;
+(id)characteristicTupleKeyFromServiceContextID:(id)arg1 currentType:(id)arg2 ;
+(BOOL)presentationValueOfCharacteristic:(id)arg1 equalTo:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDUserNotificationCenter *)notificationCenter;
-(void)archive;
-(void)setNotificationCenter:(HMDUserNotificationCenter *)arg1 ;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)configureHomeManager:(id)arg1 ;
-(void)refreshHomeBadgeNumber;
-(void)removeBulletinsForAccessory:(id)arg1 ;
-(id)updateBulletinForFirmwareUpdateInHome:(id)arg1 ;
-(void)insertBulletinsForChangedCharacteristics:(id)arg1 changedByThisDevice:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_migrateBulletins:(id)arg1 requests:(id)arg2 ;
-(id)_insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 ;
-(void)_updateCharacteristicTupleFor:(id)arg1 withCurrentType:(id)arg2 changedByThisDevice:(BOOL)arg3 ;
-(BOOL)_shouldPostBulletinOnCurrentValueChangeForCharacteristic:(id)arg1 ;
-(BOOL)_hasDuplicateBulletinForCharacteristic:(id)arg1 ;
-(id)_insertRequestWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 requestIdentifier:(id)arg4 bulletinType:(unsigned long long)arg5 actionURL:(id)arg6 bulletinContext:(id)arg7 actionContext:(id)arg8 ;
-(void)removeBulletinWithRecordID:(id)arg1 ;
-(id)_requestWithRecordID:(id)arg1 ;
-(void)_removeBulletinsUsingPredicate:(id)arg1 ;
-(NSMutableDictionary *)characteristicTuples;
-(void)insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)insertBulletinForIncomingInvitation:(id)arg1 ;
-(id)insertBulletinForSecureTrigger:(id)arg1 ;
-(void)removeBulletinsForHome:(id)arg1 ;
-(void)removeBulletinsForService:(id)arg1 ;
-(void)removeBulletinsForTrigger:(id)arg1 ;
-(void)removeAllBulletins;
-(id)_lookupRequestForCharacteristic:(id)arg1 ;
-(BOOL)isTargetCharacteristic:(id)arg1 matchCurrentCharacteristic:(id)arg2 ;
-(void)insertCameraSignificantEventBulletin:(id)arg1 ;
-(id)notificationUUIDsForClipBulletinWithIdentifier:(id)arg1 ;
-(void)insertCameraAccessModeChangedBulletin:(id)arg1 ;
-(void)setCharacteristicTuples:(NSMutableDictionary *)arg1 ;
@end

