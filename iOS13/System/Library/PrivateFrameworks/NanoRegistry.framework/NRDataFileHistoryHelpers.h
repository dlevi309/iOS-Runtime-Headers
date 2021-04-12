/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@interface NRDataFileHistoryHelpers : NSObject
+(void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(/*^block*/id)arg3 ;
+(id)unarchiveDeviceHistory;
+(BOOL)createMissingDates:(id)arg1 ;
+(id)unarchiveSecureProperties;
+(BOOL)archiveSecureProperties:(id)arg1 ;
+(BOOL)archiveDeviceHistory:(id)arg1 ;
+(id)findPairedDateForDeviceID:(id)arg1 inHistory:(id)arg2 ;
@end

