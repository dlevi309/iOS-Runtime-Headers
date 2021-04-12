/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTPersistenceCloudDeletionEnforcer : NSObject
-(BOOL)processRequestsSinceReferenceDate:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)performBatchDeleteOfEntityWithName:(id)arg1 identifiers:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)applyTombstonesToEntityWithName:(id)arg1 identifiers:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
@end

