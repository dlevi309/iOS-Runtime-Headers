/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
*/


@protocol AUServiceProtocol
@required
-(void)deviceClassAttached:(id)arg1 options:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)bootstrapWithOptions:(id)arg1;
-(void)findFirmwareWithOptions:(id)arg1 remote:(BOOL)arg2;
-(void)downloadFirmwareWithOptions:(id)arg1;
-(void)prepareFirmwareWithOptions:(id)arg1;
-(void)applyFirmwareWithOptions:(id)arg1;
-(void)finishWithOptions:(id)arg1;
-(void)queryDeviceList:(/*^block*/id)arg1;
-(void)personalizationResponse:(id)arg1 response:(id)arg2 status:(id)arg3;

@end

