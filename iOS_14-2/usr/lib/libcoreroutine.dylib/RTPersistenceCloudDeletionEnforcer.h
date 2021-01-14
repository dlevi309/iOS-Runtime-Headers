/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTPersistenceCloudDeletionEnforcer : NSObject
-(BOOL)processRequestsSinceReferenceDate:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)performBatchDeleteOfEntityWithName:(id)arg1 identifiers:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)applyTombstonesToEntityWithName:(id)arg1 identifiers:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
@end

