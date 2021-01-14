/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

