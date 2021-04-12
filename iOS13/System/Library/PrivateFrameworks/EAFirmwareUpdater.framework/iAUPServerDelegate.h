/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
*/


@protocol iAUPServerDelegate
@required
-(id)writeData:(id)arg1;
-(void)updateProgress:(double)arg1;
-(void)logStatusString:(id)arg1;
-(void)firmwareUpdateComplete:(id)arg1 error:(id)arg2;
-(void)handleFirmwareUpdateStatus:(id)arg1;
-(unsigned)getWhitelistedPersonalizationFields;
-(void)processPersonalizationInfoFromAccessory:(id)arg1;
-(unsigned char)getPersonalizationID;
-(BOOL)updateRequiresPersonalization;
-(void)handleSessionError:(unsigned)arg1 message:(id)arg2;
-(id)getDeviceClassName;

@end

