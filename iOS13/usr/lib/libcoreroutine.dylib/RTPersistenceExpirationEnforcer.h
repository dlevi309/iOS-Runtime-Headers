/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTPersistenceExpirationEnforcer : NSObject
-(id)init;
-(id)collectRecordIDsByTypeExpiredBeforeDate:(id)arg1 ownedByThisDevice:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeRecordsOwnedByOtherDevicesExpiredBeforeDate:(id)arg1 allowPropagation:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeExpiredRecordsBeforeDate:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)entitiesWithDeviceAndExpirationProperty:(id)arg1 ownedByThisDevice:(BOOL)arg2 ;
-(BOOL)removeExpiredRecordsWithObjectIDs:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)repairInvalidExpirationDatesWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeRecordsOwnedByThisDeviceExpiredBeforeDate:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
@end

