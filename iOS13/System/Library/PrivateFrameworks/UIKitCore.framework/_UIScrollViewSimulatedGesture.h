/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIScrollViewSimulatedGesture : NSObject {

	double _simulationDuration;
	double _beginTime;
	/*^block*/id _beginBlock;
	/*^block*/id _updateBlock;
	/*^block*/id _endBlock;

}
-(id)initWithDuration:(double)arg1 begin:(/*^block*/id)arg2 update:(/*^block*/id)arg3 end:(/*^block*/id)arg4 ;
-(BOOL)updateSimulation;
@end

