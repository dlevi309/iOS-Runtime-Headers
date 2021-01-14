/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUBasicProgress.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSUFakeProgress : TSUBasicProgress {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _currentStage;
	unsigned long long _numberOfStages;
	BOOL _stopped;

}
-(void)start;
-(void)stop;
-(id)initWithMaxValue:(double)arg1 ;
-(void)p_slowlyAdvanceToNextStage;
-(id)initWithMaxValue:(double)arg1 numberOfStages:(unsigned long long)arg2 ;
-(void)advanceToStage:(unsigned long long)arg1 ;
@end

