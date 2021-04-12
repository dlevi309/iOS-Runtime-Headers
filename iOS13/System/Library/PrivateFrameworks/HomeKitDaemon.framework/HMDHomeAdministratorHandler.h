/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFMessageDispatcher.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking;
@class NSOperationQueue, NSMapTable, HMDHome, HMFMessageDispatcher, NSString;

@interface HMDHomeAdministratorHandler : HMFMessageDispatcher <HMFLogging> {

	id<HMFLocking> _lock;
	NSOperationQueue* _queue;
	NSMapTable* _receivers;
	HMDHome* _home;

}

@property (readonly) HMFMessageDispatcher * dispatcher; 
@property (__weak,readonly) HMDHome * home;                          //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)addOperation:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(HMDHome *)home;
-(id)logIdentifier;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(/*^block*/id)arg4 ;
-(id)initWithTransport:(id)arg1 ;
-(void)deregisterReceiver:(id)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(HMFMessageDispatcher *)dispatcher;
-(id)operationForMessage:(id)arg1 error:(id*)arg2 ;
-(id)syncOperationManager;
@end

