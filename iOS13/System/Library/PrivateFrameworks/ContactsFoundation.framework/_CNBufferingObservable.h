/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>

@protocol _CNBufferingStrategy, CNObservable;
@class NSMutableArray;

@interface _CNBufferingObservable : CNObservable {

	id<_CNBufferingStrategy> _strategy;
	id<CNObservable> _observable;
	NSMutableArray* _results;

}

@property (nonatomic,retain) id<_CNBufferingStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
@property (nonatomic,retain) id<CNObservable> observable;                    //@synthesize observable=_observable - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                       //@synthesize results=_results - In the implementation block
-(NSMutableArray *)results;
-(void)setResults:(NSMutableArray *)arg1 ;
-(id<_CNBufferingStrategy>)strategy;
-(void)setStrategy:(id<_CNBufferingStrategy>)arg1 ;
-(id)subscribe:(id)arg1 ;
-(id<CNObservable>)observable;
-(void)setObservable:(id<CNObservable>)arg1 ;
-(id)initWithLength:(unsigned long long)arg1 observable:(id)arg2 ;
-(id)initWithLength:(unsigned long long)arg1 timeInterval:(double)arg2 scheduler:(id)arg3 observable:(id)arg4 ;
-(id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2 observable:(id)arg3 ;
-(id)initWithBufferingStrategy:(id)arg1 observable:(id)arg2 ;
-(void)sendBufferedResultsToObserver:(id)arg1 ;
@end

