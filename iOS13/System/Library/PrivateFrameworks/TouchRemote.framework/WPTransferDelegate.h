/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/


@protocol WPTransferDelegate <NSObject>
@required
-(void)transferDidFailToStartAdvertising:(id)arg1;
-(void)transferDidFailToStartScanning:(id)arg1;
-(void)transferDidFailWithError:(id)arg1;
-(id)transferDidReceiveData:(id)arg1;
-(void)transferComplete;
-(void)transferDidUpdateAdvertiserState:(id)arg1;
-(void)transferDidUpdateScannerState:(id)arg1;

@end

