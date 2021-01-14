/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

