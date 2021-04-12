/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol WPHeySiriProtocol <NSObject>
@optional
-(void)heySiriStartedAdvertising:(id)arg1;
-(void)heySiriAdvertisingPending:(id)arg1;
-(void)heySiriStoppedAdvertising:(id)arg1;
-(void)heySiri:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
-(void)heySiriStartedScanning:(id)arg1;
-(void)heySiriStoppedScanning:(id)arg1;
-(void)heySiri:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(void)heySiri:(id)arg1 foundDevice:(id)arg2 withInfo:(id)arg3;

@required
-(void)heySiriDidUpdateState:(id)arg1;

@end

