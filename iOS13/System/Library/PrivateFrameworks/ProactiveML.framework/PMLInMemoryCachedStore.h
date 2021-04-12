/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/PMLTrainingStore.h>

@class PMLTrainingStoredSessionBatch;

@interface PMLInMemoryCachedStore : PMLTrainingStore {

	PMLTrainingStoredSessionBatch* _cachedSessions;

}
+(id)cachedStoreFromRealStore:(id)arg1 sessionDescriptor:(id)arg2 sessionsLimit:(unsigned long long)arg3 ;
-(id)initWithSessionBatch:(id)arg1 ;
-(void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(BOOL)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(/*^block*/id)arg7 ;
-(void)_openDbIfUnlocked;
-(void)_registerUnlockHandler;
@end

