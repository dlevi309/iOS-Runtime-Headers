/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SATimestamp;

@interface SAKPerfState : NSObject {

	unsigned long long _onCore;
	BOOL _mostRecentSampleIsPET;
	ktrace_sessionRef _session;
	SATimestamp* _mostRecentSampleTimestamp;

}

@property (readonly) ktrace_sessionRef session;                          //@synthesize session=_session - In the implementation block
@property (retain) SATimestamp * mostRecentSampleTimestamp;              //@synthesize mostRecentSampleTimestamp=_mostRecentSampleTimestamp - In the implementation block
@property (assign) BOOL mostRecentSampleIsPET;                           //@synthesize mostRecentSampleIsPET=_mostRecentSampleIsPET - In the implementation block
+(id)kperfStateWithSession:(ktrace_sessionRef)arg1 ;
-(ktrace_sessionRef)session;
-(id)initWithSession:(ktrace_sessionRef)arg1 ;
-(void)nextSampleForCpu:(unsigned)arg1 isOnCore:(BOOL)arg2 ;
-(BOOL)isNextSampleisOnCoreForCpu:(unsigned)arg1 ;
-(SATimestamp *)mostRecentSampleTimestamp;
-(void)setMostRecentSampleTimestamp:(SATimestamp *)arg1 ;
-(BOOL)mostRecentSampleIsPET;
-(void)setMostRecentSampleIsPET:(BOOL)arg1 ;
@end

