/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/


@protocol UARPControllerInternalDelegate
@required
-(BOOL)removeAccessory:(id)arg1;
-(void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)arg1 assetID:(id)arg2 params:(id)arg3;
-(BOOL)addAccessory:(id)arg1 assetID:(id)arg2;
-(BOOL)changeAssetLocation:(id)arg1 assetID:(id)arg2;
-(BOOL)downloadAvailableFirmwareUpdate:(id)arg1 assetID:(id)arg2 withUserIntent:(BOOL)arg3;
-(BOOL)downloadReleaseNotes:(id)arg1 assetID:(id)arg2;
-(void)sendFirmwareUpdateProgressForAccessory:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;
-(BOOL)checkForUpdate:(id)arg1;
-(BOOL)personalizationVectorForAccessory:(id)arg1 assetTag:(unsigned)arg2 outVector:(unsigned*)arg3;
-(void)manifestPropertiesReceivedForAccessory:(id)arg1 assetTag:(unsigned)arg2 properties:(id)arg3;
-(BOOL)updateProperty:(unsigned long long)arg1 value:(id)arg2 forAccessory:(id)arg3;

@end

