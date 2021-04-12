/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue, NFSession;
@class NSObject;

@interface PKPaymentSessionHandle : NSObject {

	NSObject*<OS_dispatch_queue> _internalSessionSerialQueue;
	id<NFSession> _sessionHandle;

}
-(void)invalidateSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateSession;
-(BOOL)isFirstInQueue;
-(id)initWithInternalSessionHandle:(id)arg1 targetQueue:(id)arg2 ;
@end

