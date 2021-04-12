/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TouchRemote-Structs.h>
#import <libobjc.A.dylib/WPTransferDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, TRTransferBrowserDelegate;
@class NSObject, WPTransfer, NSString;

@interface TRTransferBrowser : NSObject <WPTransferDelegate> {

	SCD_Struct_TR0* _aesContext;
	AirPlayPairingSessionPrivateRef _pairingSession;
	long long _pairingState;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _responseSemaphore;
	BOOL _started;
	BOOL _waitingOnSemaphore;
	long long _scannerState;
	WPTransfer* _transferSession;
	id<TRTransferBrowserDelegate> _delegate;
	long long _state;

}

@property (assign,nonatomic,__weak) id<TRTransferBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state;                                          //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<TRTransferBrowserDelegate>)delegate;
-(void)setDelegate:(id<TRTransferBrowserDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(long long)state;
-(void)defer;
-(void)transferDidFailToStartAdvertising:(id)arg1 ;
-(void)transferDidFailToStartScanning:(id)arg1 ;
-(void)transferDidFailWithError:(id)arg1 ;
-(id)transferDidReceiveData:(id)arg1 ;
-(void)transferComplete;
-(void)transferDidUpdateAdvertiserState:(id)arg1 ;
-(void)transferDidUpdateScannerState:(id)arg1 ;
-(void)_beginScanningIfPowered;
-(int)_runSetupStepWithInput:(const void*)arg1 inputLength:(unsigned long long)arg2 outputData:(id*)arg3 ;
-(int)_runVerifyStepWithInput:(const void*)arg1 inputLength:(unsigned long long)arg2 outputData:(id*)arg3 ;
-(id)_didReceiveEncryptedData:(id)arg1 ;
-(void)_didFinishPairing;
@end

