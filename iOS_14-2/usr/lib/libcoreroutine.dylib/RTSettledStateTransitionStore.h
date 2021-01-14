/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

