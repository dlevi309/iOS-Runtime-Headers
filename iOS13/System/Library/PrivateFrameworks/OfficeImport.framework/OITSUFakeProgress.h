/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OITSUBasicProgress.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface OITSUFakeProgress : OITSUBasicProgress {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _currentStage;
	unsigned long long _numberOfStages;
	BOOL _stopped;

}
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)p_slowlyAdvanceToNextStage;
-(id)initWithMaxValue:(double)arg1 numberOfStages:(unsigned long long)arg2 ;
-(void)advanceToStage:(unsigned long long)arg1 ;
@end

