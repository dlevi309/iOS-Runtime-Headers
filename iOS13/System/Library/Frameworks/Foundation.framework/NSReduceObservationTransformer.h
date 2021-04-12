/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSObservationTransformer.h>

@interface NSReduceObservationTransformer : NSObservationTransformer {

	/*^block*/id _reducer;
	id _accumulator;

}
+(id)reduceValue:(id)arg1 withReducer:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)_receiveBox:(id)arg1 ;
-(void)finishObserving;
-(id)initWithBlock:(/*^block*/id)arg1 initialValue:(id)arg2 ;
@end

