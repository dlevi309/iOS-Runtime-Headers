/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/


@class NSISVariable;

@interface NSISVariableObservation : NSObject {

	NSISVariable* _variable;
	double _lastValue;
	BOOL _valueIsDirtied;

}
-(void)emitValueIfNeededWithEngine:(id)arg1 ;
-(void)valueWasDirtied;
-(id)initWithVariable:(id)arg1 ;
-(void)dealloc;
@end

