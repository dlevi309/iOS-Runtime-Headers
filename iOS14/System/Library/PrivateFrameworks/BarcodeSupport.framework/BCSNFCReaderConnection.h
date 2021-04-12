/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@protocol OS_dispatch_queue;
@class BCSNotificationServiceConnection, NSObject;

@interface BCSNFCReaderConnection : NSObject {

	BCSNotificationServiceConnection* _notificationServiceConnection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)disconnect;
-(id)init;
-(BOOL)_isNFCEnabled;
-(BOOL)_needsRadioEnabledCheck;
-(BOOL)_enableNFC;
-(long long)_hardwareSupportState;
-(void)checkNFCEnabledWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableNFCWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)checkHardwareSupportStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startReaderWithDelegate:(id)arg1 errorHandler:(/*^block*/id)arg2 interruptionHandler:(/*^block*/id)arg3 ;
-(void)stopReaderWithErrorHandler:(/*^block*/id)arg1 ;
@end

