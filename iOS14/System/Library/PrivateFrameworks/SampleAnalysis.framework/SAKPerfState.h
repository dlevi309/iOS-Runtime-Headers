/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SATimestamp;

@interface SAKPerfState : NSObject {

	char* _onCoreBitArray;
	unsigned _numCores;
	BOOL _mostRecentSampleIsPET;
	int _petTimerID;
	ktrace_sessionRef _session;
	unsigned long long _latestMachAbsTimeParsed;
	SATimestamp* _mostRecentSampleTimestamp;

}
-(void)dealloc;
@end

