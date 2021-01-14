/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/


@protocol WPTransferDelegate <NSObject>
@required
-(void)transferDidFailWithError:(id)arg1;
-(void)transferComplete;
-(void)transferDidUpdateScannerState:(id)arg1;
-(void)transferDidFailToStartAdvertising:(id)arg1;
-(id)transferDidReceiveData:(id)arg1;
-(void)transferDidUpdateAdvertiserState:(id)arg1;
-(void)transferDidFailToStartScanning:(id)arg1;

@end

