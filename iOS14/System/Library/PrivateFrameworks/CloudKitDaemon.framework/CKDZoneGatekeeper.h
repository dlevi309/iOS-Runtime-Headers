/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSMutableDictionary, NSMutableArray;

@interface CKDZoneGatekeeper : NSObject {

	NSMutableDictionary* _zoneIDsToGateHolders;
	NSMutableArray* _waiterWrappers;

}

@property (nonatomic,retain) NSMutableDictionary * zoneIDsToGateHolders;              //@synthesize zoneIDsToGateHolders=_zoneIDsToGateHolders - In the implementation block
@property (nonatomic,retain) NSMutableArray * waiterWrappers;                         //@synthesize waiterWrappers=_waiterWrappers - In the implementation block
-(id)init;
-(BOOL)hasStatusToReport;
-(void)setWaiterWrappers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)waiterWrappers;
-(void)relinquishLocksForWaiter:(id)arg1 deferRelinquish:(BOOL)arg2 ;
-(void)setZoneIDsToGateHolders:(NSMutableDictionary *)arg1 ;
-(void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)CKStatusReportArray;
-(NSMutableDictionary *)zoneIDsToGateHolders;
@end

