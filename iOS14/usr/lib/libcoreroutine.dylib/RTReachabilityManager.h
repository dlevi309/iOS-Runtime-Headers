/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@class NWPathEvaluator;

@interface RTReachabilityManager : RTService {

	BOOL _observingReachabilityChanges;
	NWPathEvaluator* _pathEvaluator;
	unsigned long long _currentReachability;

}

@property (nonatomic,retain) NWPathEvaluator * pathEvaluator;                     //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (assign,nonatomic) unsigned long long currentReachability;              //@synthesize currentReachability=_currentReachability - In the implementation block
+(id)reachabilityToString:(unsigned long long)arg1 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(NWPathEvaluator *)pathEvaluator;
-(void)_shutdown;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPathEvaluator:(NWPathEvaluator *)arg1 ;
-(id)initWithPathEvaluator:(id)arg1 ;
-(id)init;
-(unsigned long long)reachability;
-(void)_fetchCurrentReachability:(/*^block*/id)arg1 ;
-(void)_processReachabilityChange:(id)arg1 ;
-(id)currentReachabilityString;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)currentReachability;
-(void)setCurrentReachability:(unsigned long long)arg1 ;
-(void)fetchCurrentReachability:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

