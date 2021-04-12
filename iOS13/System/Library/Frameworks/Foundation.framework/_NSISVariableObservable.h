/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSObservationSource.h>

@class NSISVariable, NSISEngine;

@interface _NSISVariableObservable : NSObservationSource {

	_NSISVariableObservable* _nextDirtyObservable;
	_NSISVariableObservable* _prevDirtyObservable;
	double _lastValue;
	NSISVariable* _variable;
	NSISEngine* _associatedEngine;
	unsigned _hasLastValue : 1;
	unsigned _valueIsDirtied : 1;

}
+(id)observableForVariable:(id)arg1 inEngine:(id)arg2 ;
-(void)dealloc;
-(void)emitValueIfNeeded;
-(void)receiveObservedValue:(id)arg1 ;
-(id)initWithVariable:(id)arg1 inEngine:(id)arg2 ;
-(BOOL)valueHasChanged;
@end

