/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMDeviceSetupSessionDelegate;
@class HMFUnfairLock, NSDictionary, NSUUID, _HMContext, NSString;

@interface HMDeviceSetupSession : NSObject <HMFLogging, HMFMessageReceiver> {

	HMFUnfairLock* _lock;
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
-(id)init;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(BOOL)open;
-(void)close;
-(id<HMDeviceSetupSessionDelegate>)delegate;
-(long long)role;
-(NSUUID *)identifier;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(_HMContext *)context;
-(BOOL)isOpen;
-(void)setOpen:(BOOL)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)_closeWithError:(id)arg1 ;
-(id)initWithRole:(long long)arg1 delegate:(id)arg2 ;
-(void)sendExchangeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)messageDestination;
-(void)__registerForMessages;
-(void)_handleDisconnection:(id)arg1 ;
-(void)__handleReceivedExchangeData:(id)arg1 ;
-(void)__handleClose:(id)arg1 ;
-(void)_handleOpenedSession;
-(void)__closeWithError:(id)arg1 ;
-(void)_reallySendExchangeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

