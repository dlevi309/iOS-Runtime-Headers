/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDiagnosticExtensionCore.framework/HealthDiagnosticExtensionCore
*/

#import <HealthDiagnosticExtensionCore/HDDiagnosticOperation.h>

@interface HDNanoSyncDiagnosticOperation : HDDiagnosticOperation
-(void)run;
-(id)reportFilename;
-(void)_collectNanoSyncMessageDatabase;
-(id)_sortedPairedDevices;
-(void)_reportSummaryWithDevices:(id)arg1 ;
-(void)_reportQuickSwitchSummaryWithDevicesByPairingID:(id)arg1 ;
-(id)nanoSyncDatabaseURL;
-(id)_reportDetailsForDevice:(id)arg1 database:(id)arg2 ;
-(void)_reportIDSSummaryForDeviceIdentifier:(id)arg1 database:(id)arg2 ;
-(long long)_countOfMessagesForDeviceIdentifier:(id)arg1 description:(id)arg2 predicateSQL:(id)arg3 date:(id)arg4 database:(id)arg5 ;
-(void)_reportMostRecentMessageDateWithDeviceIdentifier:(id)arg1 description:(id)arg2 field:(id)arg3 predicateSQL:(id)arg4 database:(id)arg5 ;
-(void)_reportMostRecentMessageErrorsWithDeviceIdentifier:(id)arg1 database:(id)arg2 ;
@end

