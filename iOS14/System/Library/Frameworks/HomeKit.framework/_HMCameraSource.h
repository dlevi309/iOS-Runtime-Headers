/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@class HMFUnfairLock, HMCameraView, _HMContext, NSNumber, NSUUID, NSString;

@interface _HMCameraSource : NSObject <HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	HMCameraView* _cameraView;
	_HMContext* _context;
	NSNumber* _aspectRatio;
	NSUUID* _profileUniqueIdentifier;
	NSNumber* _slotIdentifier;
	NSString* _sessionID;

}

@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * aspectRatio;                                   //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * profileUniqueIdentifier;                         //@synthesize profileUniqueIdentifier=_profileUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * slotIdentifier;                                //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionID;                                     //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic,__weak) HMCameraView * cameraView;                                //@synthesize cameraView=_cameraView - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSString *)sessionID;
-(HMCameraView *)cameraView;
-(void)setCameraView:(HMCameraView *)arg1 ;
-(NSNumber *)aspectRatio;
-(_HMContext *)context;
-(id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5 ;
-(NSUUID *)profileUniqueIdentifier;
-(NSNumber *)slotIdentifier;
@end

