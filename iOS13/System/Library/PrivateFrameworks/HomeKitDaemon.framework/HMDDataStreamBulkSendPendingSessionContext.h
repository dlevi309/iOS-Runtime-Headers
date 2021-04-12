/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class HMFTimer;

@interface HMDDataStreamBulkSendPendingSessionContext : NSObject {

	/*^block*/id _sessionStartCallback;
	HMFTimer* _handleOpenRequestResponseTimer;
	HMFTimer* _sendCloseEventTimer;

}

@property (readonly) id sessionStartCallback;                               //@synthesize sessionStartCallback=_sessionStartCallback - In the implementation block
@property (retain) HMFTimer * handleOpenRequestResponseTimer;               //@synthesize handleOpenRequestResponseTimer=_handleOpenRequestResponseTimer - In the implementation block
@property (retain) HMFTimer * sendCloseEventTimer;                          //@synthesize sendCloseEventTimer=_sendCloseEventTimer - In the implementation block
@property (readonly) BOOL shouldCloseSessionWithTimeoutReason; 
-(HMFTimer *)handleOpenRequestResponseTimer;
-(HMFTimer *)sendCloseEventTimer;
-(id)initWithSessionStartCallback:(/*^block*/id)arg1 handleOpenRequestResponseTimer:(id)arg2 sendCloseEventTimer:(id)arg3 ;
-(BOOL)shouldCloseSessionWithTimeoutReason;
-(id)sessionStartCallback;
-(void)setHandleOpenRequestResponseTimer:(HMFTimer *)arg1 ;
-(void)setSendCloseEventTimer:(HMFTimer *)arg1 ;
@end

