/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)_state;
-(void)_setState:(long long)arg1 ;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_completionHandler;
-(void)cancel;
-(void)dealloc;
-(void)beginScanningWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_thread_closeWifiConnection;
-(void)_wifiScanningThread;
-(void)_setScanningThread:(id)arg1 ;
-(void)_thread_callCompletionHandlerWithGuessedCountries:(id)arg1 ;
-(id)_scanningThread;
-(void)_thread_cancelScanning;
-(void)_thread_wifiScanComplete:(CFArrayRef)arg1 error:(BOOL)arg2 ;
@end

