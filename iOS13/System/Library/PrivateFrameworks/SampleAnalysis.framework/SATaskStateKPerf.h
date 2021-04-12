/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SATaskState.h>

@interface SATaskStateKPerf : SATaskState {

	BOOL _filledSnap;
	BOOL _filledMem;
	BOOL _filledLatencyQoS;

}

@property (assign) BOOL filledSnap;                    //@synthesize filledSnap=_filledSnap - In the implementation block
@property (assign) BOOL filledMem;                     //@synthesize filledMem=_filledMem - In the implementation block
@property (assign) BOOL filledLatencyQoS;              //@synthesize filledLatencyQoS=_filledLatencyQoS - In the implementation block
-(BOOL)filledSnap;
-(void)setFilledSnap:(BOOL)arg1 ;
-(BOOL)filledMem;
-(void)setFilledMem:(BOOL)arg1 ;
-(BOOL)filledLatencyQoS;
-(void)setFilledLatencyQoS:(BOOL)arg1 ;
@end

