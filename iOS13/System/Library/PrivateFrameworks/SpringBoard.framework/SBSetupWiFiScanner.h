/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSThread;

@interface SBSetupWiFiScanner : NSObject {

	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	NSThread* _scanningThread;
	/*^block*/id _completionHandler;
	long long _state;

}

@property (setter=_setScanningThread:,getter=_scanningThread,retain) NSThread * scanningThread;              //@synthesize scanningThread=_scanningThread - In the implementation block
@property (setter=_setCompletionHandler:,getter=_completionHandler,copy) id completionHandler;               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,setter=_setState:,getter=_state,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
-(void)dealloc;
-(long long)_state;
-(void)cancel;
-(/*^block*/id)_completionHandler;
-(void)_setState:(long long)arg1 ;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginScanningWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_thread_closeWifiConnection;
-(void)_wifiScanningThread;
-(void)_setScanningThread:(id)arg1 ;
-(void)_thread_callCompletionHandlerWithGuessedCountries:(id)arg1 ;
-(id)_scanningThread;
-(void)_thread_cancelScanning;
-(void)_thread_wifiScanComplete:(CFArrayRef)arg1 error:(BOOL)arg2 ;
@end

