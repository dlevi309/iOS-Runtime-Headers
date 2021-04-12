/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, HMFTimer, NSString, NSMutableDictionary, NSSet;

@interface HMDXPCRequestTracker : HMFObject <HMFTimerDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	HMFTimer* _timer;
	NSString* _clientName;
	NSMutableDictionary* _pendingRequests;

}

@property (copy,readonly) NSSet * requestIdentifiers; 
@property (nonatomic,readonly) NSMutableDictionary * pendingRequests;              //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                         //@synthesize clientName=_clientName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClientName:(NSString *)arg1 ;
-(void)clear;
-(id)initWithQueue:(id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(NSMutableDictionary *)pendingRequests;
-(id)init;
-(NSString *)clientName;
-(void)__sendReponseForRequest:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)addRequestWithIdentifier:(id)arg1 messageName:(id)arg2 qualityOfService:(long long)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)removeRequestWithIdentifier:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(BOOL)containsMessageWithIdentifier:(id)arg1 ;
-(NSSet *)requestIdentifiers;
@end

