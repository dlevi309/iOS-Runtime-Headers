/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol WPHeySiriProtocol <NSObject>
@optional
-(void)heySiri:(id)arg1 foundDevice:(id)arg2 withInfo:(id)arg3;
-(void)heySiriStartedAdvertising:(id)arg1;
-(void)heySiriAdvertisingPending:(id)arg1;
-(void)heySiriStoppedAdvertising:(id)arg1;
-(void)heySiri:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
-(void)heySiriStartedScanning:(id)arg1;
-(void)heySiriStoppedScanning:(id)arg1;
-(void)heySiri:(id)arg1 failedToStartScanningWithError:(id)arg2;

@required
-(void)heySiriDidUpdateState:(id)arg1;

@end

