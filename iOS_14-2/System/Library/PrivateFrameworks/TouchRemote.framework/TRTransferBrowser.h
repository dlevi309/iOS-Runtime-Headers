/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<TRTransferBrowserDelegate>)delegate;
-(void)start;
-(id)_didReceiveEncryptedData:(id)arg1 ;
-(void)transferDidFailWithError:(id)arg1 ;
-(int)_runSetupStepWithInput:(const void*)arg1 inputLength:(unsigned long long)arg2 outputData:(id*)arg3 ;
-(void)stop;
-(void)setDelegate:(id<TRTransferBrowserDelegate>)arg1 ;
-(void)transferComplete;
-(int)_runVerifyStepWithInput:(const void*)arg1 inputLength:(unsigned long long)arg2 outputData:(id*)arg3 ;
-(void)_didFinishPairing;
-(void)defer;
-(long long)state;
-(void)transferDidUpdateScannerState:(id)arg1 ;
-(void)_beginScanningIfPowered;
-(void)transferDidFailToStartAdvertising:(id)arg1 ;
-(id)transferDidReceiveData:(id)arg1 ;
-(void)transferDidUpdateAdvertiserState:(id)arg1 ;
-(void)transferDidFailToStartScanning:(id)arg1 ;
-(void)dealloc;
@end

