/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSISVariable;

@interface NSISVariableObservation : NSObject {

	NSISVariable* _variable;
	double _lastValue;
	BOOL _valueIsDirtied;

}
-(void)dealloc;
-(id)initWithVariable:(id)arg1 ;
-(void)valueWasDirtied;
-(void)emitValueIfNeededWithEngine:(id)arg1 ;
@end

