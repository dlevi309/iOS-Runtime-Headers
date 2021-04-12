/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue, NFSession;
@class NSObject;

@interface PKPaymentSessionHandle : NSObject {

	NSObject*<OS_dispatch_queue> _internalSessionSerialQueue;
	id<NFSession> _sessionHandle;

}
-(void)invalidateSession;
-(void)invalidateSessionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isFirstInQueue;
-(id)initWithInternalSessionHandle:(id)arg1 targetQueue:(id)arg2 ;
@end

