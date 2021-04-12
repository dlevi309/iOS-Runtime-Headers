/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMDeviceSetupSessionDelegate;
@class HMFUnfairLock, HMFActivity, NSDictionary, NSUUID, _HMContext, NSString;

@interface HMDeviceSetupSession : NSObject <HMFLogging, HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	HMFActivity* _activity;
	BOOL _open;
	NSDictionary* _userInfo;
	id<HMDeviceSetupSessionDelegate> _delegate;
	NSUUID* _identifier;
	long long _role;
	_HMContext* _context;

}

@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                                         //@synthesize open=_open - In the implementation block
@property (__weak,readonly) id<HMDeviceSetupSessionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSUUID * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long role;                                                          //@synthesize role=_role - In the implementation block
@property (copy,readonly) NSDictionary * userInfo;                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(id)homeManagerDestination;
-(NSUUID *)messageTargetUUID;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSDictionary *)userInfo;
-(void)setOpen:(BOOL)arg1 ;
-(BOOL)open;
-(id)init;
-(void)__registerForMessages;
-(id<HMDeviceSetupSessionDelegate>)delegate;
-(BOOL)isOpen;
-(void)close;
-(id)logIdentifier;
-(_HMContext *)context;
-(id)messageDestination;
-(NSUUID *)identifier;
-(id)initWithRole:(long long)arg1 delegate:(id)arg2 ;
-(void)sendExchangeData:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleDisconnection:(id)arg1 ;
-(void)__handleReceivedExchangeData:(id)arg1 ;
-(void)__handleClose:(id)arg1 ;
-(void)_handleOpenedSession;
-(void)_closeWithError:(id)arg1 ;
-(void)__closeWithError:(id)arg1 ;
-(void)_reallySendExchangeData:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)role;
-(void)dealloc;
@end

