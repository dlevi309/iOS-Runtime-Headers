/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <libobjc.A.dylib/TRTransferBrowserDelegate.h>

@protocol TRDeviceSetupBrowserDelegate;
@class TRTransferBrowser, TRDeviceSetupPeripheral, NSString;

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate> {

	id<TRDeviceSetupBrowserDelegate> _delegate;
	TRTransferBrowser* _transferBrowser;
	TRDeviceSetupPeripheral* _peripheral;

}

@property (nonatomic,retain) TRTransferBrowser * transferBrowser;                           //@synthesize transferBrowser=_transferBrowser - In the implementation block
@property (nonatomic,retain) TRDeviceSetupPeripheral * peripheral;                          //@synthesize peripheral=_peripheral - In the implementation block
@property (assign,nonatomic,__weak) id<TRDeviceSetupBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<TRDeviceSetupBrowserDelegate>)delegate;
-(void)setDelegate:(id<TRDeviceSetupBrowserDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(long long)state;
-(void)defer;
-(TRDeviceSetupPeripheral *)peripheral;
-(void)setPeripheral:(TRDeviceSetupPeripheral *)arg1 ;
-(void)browser:(id)arg1 didStartTransferWithSendDataHandler:(/*^block*/id)arg2 ;
-(void)browserDidDisconnect:(id)arg1 ;
-(void)browser:(id)arg1 didReceiveData:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)browserDidChangeState:(id)arg1 ;
-(TRTransferBrowser *)transferBrowser;
-(void)setTransferBrowser:(TRTransferBrowser *)arg1 ;
@end

