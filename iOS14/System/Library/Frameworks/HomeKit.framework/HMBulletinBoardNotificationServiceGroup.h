/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMFUnfairLock, NSArray, NSSet, HMBulletinBoardNotification, NSUUID, _HMContext, NSString;

@interface HMBulletinBoardNotificationServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {

	HMFUnfairLock* _lock;
	NSArray* _cameraProfiles;
	NSArray* _associatedServices;
	NSSet* _cameraProfileUUIDs;
	NSSet* _associatedServiceUUIDs;
	HMBulletinBoardNotification* _bulletinBoardNotification;
	NSUUID* _uniqueIdentifier;
	NSUUID* _targetUUID;
	_HMContext* _context;
	NSString* _logID;

}

@property (nonatomic,retain) _HMContext * context;                                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSSet * cameraProfileUUIDs;                                                    //@synthesize cameraProfileUUIDs=_cameraProfileUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * associatedServiceUUIDs;                                                //@synthesize associatedServiceUUIDs=_associatedServiceUUIDs - In the implementation block
@property (nonatomic,retain) NSArray * cameraProfiles;                                                      //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,retain) NSArray * associatedServices;                                                  //@synthesize associatedServices=_associatedServices - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * targetUUID;                                                    //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * logID;                                                       //@synthesize logID=_logID - In the implementation block
@property (nonatomic,__weak,readonly) HMBulletinBoardNotification * bulletinBoardNotification;              //@synthesize bulletinBoardNotification=_bulletinBoardNotification - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)init;
-(NSString *)logID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(id)logIdentifier;
-(_HMContext *)context;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(void)_requestServiceGroup;
-(void)handleConfigureNotification:(id)arg1 ;
-(void)_handleBulletinBoardNotificationServiceGroupUpdateNotification:(id)arg1 ;
-(void)setCameraProfileUUIDs:(NSSet *)arg1 ;
-(void)setAssociatedServiceUUIDs:(NSSet *)arg1 ;
-(void)_findObjects;
-(HMBulletinBoardNotification *)bulletinBoardNotification;
-(NSArray *)cameraProfiles;
-(NSSet *)cameraProfileUUIDs;
-(NSSet *)associatedServiceUUIDs;
-(void)setCameraProfiles:(NSArray *)arg1 ;
-(NSArray *)associatedServices;
-(void)setAssociatedServices:(NSArray *)arg1 ;
-(void)_callServiceGroupUpdate;
-(NSUUID *)targetUUID;
-(void)__configureWithContext:(id)arg1 ;
-(void)_registerNotificationHandlers;
-(void)dealloc;
-(void)setContext:(_HMContext *)arg1 ;
@end

