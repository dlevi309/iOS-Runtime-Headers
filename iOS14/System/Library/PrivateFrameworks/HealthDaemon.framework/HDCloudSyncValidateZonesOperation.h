/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@interface HDCloudSyncValidateZonesOperation : HDCloudSyncOperation
+(BOOL)shouldLogAtOperationStart;
-(void)main;
-(void)_discardInvalidSharedZones;
-(void)_checkForOrphanedSequenceRecords;
@end

