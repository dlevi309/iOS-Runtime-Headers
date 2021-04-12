/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SAThreadState.h>

@interface SAThreadStateKPerf : SAThreadState {

	BOOL _filledName;
	BOOL _filledDispatchQueue;
	BOOL _filledUserStack;
	BOOL _filledScheduling;
	BOOL _filledCyclesInstructions;
	BOOL _filledSnapshot;

}

@property (assign) BOOL filledName;                            //@synthesize filledName=_filledName - In the implementation block
@property (assign) BOOL filledDispatchQueue;                   //@synthesize filledDispatchQueue=_filledDispatchQueue - In the implementation block
@property (assign) BOOL filledUserStack;                       //@synthesize filledUserStack=_filledUserStack - In the implementation block
@property (assign) BOOL filledScheduling;                      //@synthesize filledScheduling=_filledScheduling - In the implementation block
@property (assign) BOOL filledCyclesInstructions;              //@synthesize filledCyclesInstructions=_filledCyclesInstructions - In the implementation block
@property (assign) BOOL filledSnapshot;                        //@synthesize filledSnapshot=_filledSnapshot - In the implementation block
-(BOOL)filledName;
-(void)setFilledName:(BOOL)arg1 ;
-(BOOL)filledDispatchQueue;
-(void)setFilledDispatchQueue:(BOOL)arg1 ;
-(BOOL)filledUserStack;
-(void)setFilledUserStack:(BOOL)arg1 ;
-(BOOL)filledScheduling;
-(void)setFilledScheduling:(BOOL)arg1 ;
-(BOOL)filledCyclesInstructions;
-(void)setFilledCyclesInstructions:(BOOL)arg1 ;
-(BOOL)filledSnapshot;
-(void)setFilledSnapshot:(BOOL)arg1 ;
@end

