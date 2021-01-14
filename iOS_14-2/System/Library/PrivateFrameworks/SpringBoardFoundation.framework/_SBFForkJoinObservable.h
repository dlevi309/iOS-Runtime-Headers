/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBFObservable.h>

@class NSArray, NSMutableArray;

@interface _SBFForkJoinObservable : SBFObservable {

	NSArray* _observables;
	NSMutableArray* _results;
	unsigned long long _uncompletedObservableCount;

}
-(void)_setResult:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_observableFinishedForObserver:(id)arg1 ;
-(id)initWithWithObservables:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
@end

