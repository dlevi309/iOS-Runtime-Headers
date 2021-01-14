/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString, SSXPCServer;

@interface SSDistributedNotificationCenter : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _observers;
	NSString* _portName;
	SSXPCServer* _server;

}

@property (readonly) NSString * namedPort; 
-(id)init;
-(id)initWithNamedPort:(id)arg1 ;
-(void)_distributedNotificationMessage:(id)arg1 connection:(id)arg2 ;
-(void)_sendRegistrationMessage:(long long)arg1 name:(id)arg2 ;
-(id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(NSString *)namedPort;
-(void)dealloc;
@end

