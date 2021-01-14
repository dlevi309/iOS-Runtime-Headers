/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/


@protocol CoreTelephonyClientDataDelegateInternal <NSObject>
@optional
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
-(void)servingNetworkChanged:(id)arg1;
-(void)currentDataSimChanged:(id)arg1;
-(void)preferredDataSimChanged:(id)arg1;
-(void)connectionAvailability:(id)arg1 availableConnections:(id)arg2;
-(void)tetheringStatus:(id)arg1;
-(void)preferredDataServiceDescriptorChanged:(id)arg1;
-(void)serviceDisconnection:(id)arg1 status:(id)arg2;
-(void)internetConnectionAvailability:(BOOL)arg1;
-(void)internetConnectionActivationError:(int)arg1;
-(void)internetConnectionStateChanged:(id)arg1;
-(void)dataSettingsChanged:(id)arg1;
-(void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3;
-(void)internetDataStatus:(id)arg1;
-(void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
-(void)currentDataServiceDescriptorChanged:(id)arg1;

@end

