/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTStore.h>

@interface RTSettledStateTransitionStore : RTStore
-(void)clearWithHandler:(/*^block*/id)arg1 ;
-(void)enumerateStoredSettledStateTransitionsWithOptions:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)_purgeSettledStateTransitionsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)storeSettledStateTransitions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)purgeSettledStateTransitionsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

