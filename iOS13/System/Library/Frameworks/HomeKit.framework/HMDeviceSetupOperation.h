/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/HMDeviceSetupSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMFUnfairLock, NSError, HMAccessory, TRSession, NSObject, HMDeviceSetupSession, NSString;

@interface HMDeviceSetupOperation : NSOperation <HMDeviceSetupSessionDelegate, HMFLogging> {

	HMFUnfairLock* _lock;
	BOOL _executing;
	BOOL _finished;
	NSError* _error;
	HMAccessory* _accessory;
	TRSession* _session;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMDeviceSetupSession* _setupSession;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) HMDeviceSetupSession * setupSession;                   //@synthesize setupSession=_setupSession - In the implementation block
@property (getter=isExecuting) BOOL executing;                                        //@synthesize executing=_executing - In the implementation block
@property (getter=isFinished) BOOL finished;                                          //@synthesize finished=_finished - In the implementation block
@property (__weak,readonly) TRSession * session;                                      //@synthesize session=_session - In the implementation block
@property (readonly) NSError * error;                                                 //@synthesize error=_error - In the implementation block
@property (readonly) HMAccessory * accessory;                                         //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)logCategory;
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)start;
-(void)setError:(NSError *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)finish;
-(TRSession *)session;
-(void)cancelWithError:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setExecuting:(BOOL)arg1 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)logIdentifier;
-(HMDeviceSetupSession *)setupSession;
-(void)setupSession:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_reallyStart;
@end

