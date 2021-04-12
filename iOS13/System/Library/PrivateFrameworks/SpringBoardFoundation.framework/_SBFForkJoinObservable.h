/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBFObservable.h>

@class NSArray, NSMutableArray;

@interface _SBFForkJoinObservable : SBFObservable {

	NSArray* _observables;
	NSMutableArray* _results;
	unsigned long long _uncompletedObservableCount;

}
-(id)subscribe:(id)arg1 ;
-(void)_setResult:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_observableFinishedForObserver:(id)arg1 ;
-(id)initWithWithObservables:(id)arg1 ;
@end

