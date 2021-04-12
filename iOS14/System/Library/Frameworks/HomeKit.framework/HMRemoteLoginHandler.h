/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMFUnfairLock, ACAccount, NSString, NSUUID, HMRemoteLoginAnisetteDataProvider, _HMContext, HMAccessory;

@interface HMRemoteLoginHandler : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {

	HMFUnfairLock* _lock;
	ACAccount* _loggedInAccount;
	NSString* _currentSessionID;
	NSUUID* _uniqueIdentifier;
	HMRemoteLoginAnisetteDataProvider* _anisetteDataProvider;
	_HMContext* _context;
	NSUUID* _uuid;
	HMAccessory* _accessory;

}

@property (nonatomic,retain) _HMContext * context;                                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,__weak,readonly) HMAccessory * accessory;                                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSString * currentSessionID;                                             //@synthesize currentSessionID=_currentSessionID - In the implementation block
@property (getter=isControllable,readonly) BOOL controllable; 
@property (nonatomic,readonly) ACAccount * loggedInAccount;                                           //@synthesize loggedInAccount=_loggedInAccount - In the implementation block
@property (getter=isSessionInProgress,nonatomic,readonly) BOOL sessionInProgress; 
@property (nonatomic,readonly) HMRemoteLoginAnisetteDataProvider * anisetteDataProvider;              //@synthesize anisetteDataProvider=_anisetteDataProvider - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSUUID *)uuid;
-(id)init;
-(HMRemoteLoginAnisetteDataProvider *)anisetteDataProvider;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(HMAccessory *)accessory;
-(_HMContext *)context;
-(id)messageDestination;
-(void)_configureWithContext:(id)arg1 ;
-(void)signout:(/*^block*/id)arg1 ;
-(ACAccount *)loggedInAccount;
-(void)updateLoggedInAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_signout:(/*^block*/id)arg1 ;
-(void)registerForMessages;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_handleRemoteLoginAccountUpdated:(id)arg1 ;
-(void)setLoggedInAccount:(ACAccount *)arg1 ;
-(NSString *)currentSessionID;
-(void)_callAccountUpdateDelegate:(id)arg1 ;
-(void)_companionLoginWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleLoginResponse:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCurrentSessionID:(NSString *)arg1 ;
-(void)_queryProxiedDevice:(/*^block*/id)arg1 ;
-(void)_handleQueryProxiedDeviceResponse:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_proxyLoginWithAuthResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleRemoteLoginSignoutResponse:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isSessionInProgress;
-(void)companionLoginWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)queryProxiedDevice:(/*^block*/id)arg1 ;
-(void)proxyLoginWithAuthResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isControllable;
-(void)setContext:(_HMContext *)arg1 ;
@end

