/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@class HMFUnfairLock, _HMContext, _HMCameraProfile, HMService, NSUUID, HMHome, NSString;

@interface _HMCameraControl : NSObject <HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	_HMContext* _context;
	_HMCameraProfile* _cameraProfile;
	HMService* _service;
	NSUUID* _profileUniqueIdentifier;
	HMHome* _home;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,__weak,readonly) _HMCameraProfile * cameraProfile;                       //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,readonly) HMService * service;                                           //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * profileUniqueIdentifier;                         //@synthesize profileUniqueIdentifier=_profileUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(_HMContext *)context;
-(_HMCameraProfile *)cameraProfile;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 ;
-(NSUUID *)profileUniqueIdentifier;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)_registerNotificationHandlers;
-(HMService *)service;
-(HMHome *)home;
-(void)setContext:(_HMContext *)arg1 ;
@end

