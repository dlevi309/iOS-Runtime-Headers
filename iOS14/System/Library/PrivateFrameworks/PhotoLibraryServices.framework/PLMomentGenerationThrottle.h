/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLMomentGenerationThrottleTimeProvider;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString;

@interface PLMomentGenerationThrottle : NSObject {

	BOOL _canDelayAnyQOS;
	/*^block*/id _targetBlock;
	NSString* _name;
	id<PLMomentGenerationThrottleTimeProvider> _timeProvider;
	BOOL _singleThreaded;
	atomic_flag _shouldRunAgain;
	atomic_flag _isExecutingOrConsideringExecution;
	double _lastRunDuration;
	double _lastRunEndTime;
	double _nextExpectedRun;

}
-(BOOL)isIdle;
-(void)update;
-(id)initWithName:(id)arg1 canDelayAnyQOS:(BOOL)arg2 singleThreadedMode:(BOOL)arg3 timeProvider:(id)arg4 target:(/*^block*/id)arg5 ;
@end

