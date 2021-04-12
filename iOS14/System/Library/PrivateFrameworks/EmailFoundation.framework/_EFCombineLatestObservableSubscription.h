/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSLock, NSArray, NSMutableArray, NSMutableIndexSet;

@interface _EFCombineLatestObservableSubscription : NSObject {

	NSLock* _lock;
	NSArray* _observables;
	NSMutableArray* _results;
	NSMutableArray* _tokens;
	NSMutableIndexSet* _activeIndexes;
	NSMutableIndexSet* _silentIndexes;

}

@property (nonatomic,retain) NSLock * lock;                                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) NSArray * observables;                            //@synthesize observables=_observables - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                       //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSMutableArray * tokens;                        //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * activeIndexes;              //@synthesize activeIndexes=_activeIndexes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * silentIndexes;              //@synthesize silentIndexes=_silentIndexes - In the implementation block
-(void)setTokens:(NSMutableArray *)arg1 ;
-(void)setResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)results;
-(NSMutableArray *)tokens;
-(NSLock *)lock;
-(void)setActiveIndexes:(NSMutableIndexSet *)arg1 ;
-(NSMutableIndexSet *)silentIndexes;
-(id)subscribe:(id)arg1 ;
-(void)_observableAtIndex:(unsigned long long)arg1 receivedResult:(id)arg2 observer:(id)arg3 ;
-(void)setObservables:(NSArray *)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(NSArray *)observables;
-(void)_observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 observer:(id)arg3 ;
-(void)setSilentIndexes:(NSMutableIndexSet *)arg1 ;
-(id)initWithObservables:(id)arg1 ;
-(void)_observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2 ;
-(NSMutableIndexSet *)activeIndexes;
@end

