/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BLTBBObserverDelegateDelegate.h>

@protocol OS_dispatch_queue;
@class BBObserver, NSLock, BLTBBObserverDelegate, NSObject, NSString;

@interface BLTBBObserver : NSObject <BLTBBObserverDelegateDelegate> {

	BBObserver* _actualObserver;
	NSLock* _actualObserverLock;
	BLTBBObserverDelegate* _delegateSurrogate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSString* _name;
	unsigned long long _priority;
	BOOL _isGateway;
	unsigned long long _observerFeed;
	BOOL _hasFeed;

}
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)surrogateWithQueue:(id)arg1 calloutQueue:(id)arg2 ;
+(id)surrogateGatewayWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setObserverFeed:(unsigned long long)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(void)noteServerConnectionStateChanged:(BOOL)arg1 ;
-(void)_reconnectObserver;
-(id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4 isGateway:(BOOL)arg5 ;
@end

