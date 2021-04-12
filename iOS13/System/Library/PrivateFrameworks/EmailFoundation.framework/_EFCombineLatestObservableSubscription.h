/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSLock *)lock;
-(NSMutableArray *)results;
-(void)setLock:(NSLock *)arg1 ;
-(NSMutableArray *)tokens;
-(void)setTokens:(NSMutableArray *)arg1 ;
-(void)setResults:(NSMutableArray *)arg1 ;
-(id)subscribe:(id)arg1 ;
-(id)initWithObservables:(id)arg1 ;
-(NSArray *)observables;
-(void)_observableAtIndex:(unsigned long long)arg1 receivedResult:(id)arg2 observer:(id)arg3 ;
-(void)_observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2 ;
-(void)_observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 observer:(id)arg3 ;
-(void)setObservables:(NSArray *)arg1 ;
-(NSMutableIndexSet *)activeIndexes;
-(void)setActiveIndexes:(NSMutableIndexSet *)arg1 ;
-(NSMutableIndexSet *)silentIndexes;
-(void)setSilentIndexes:(NSMutableIndexSet *)arg1 ;
@end

