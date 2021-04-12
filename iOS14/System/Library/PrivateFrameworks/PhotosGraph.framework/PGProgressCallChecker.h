/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol OS_os_log;
@class NSObject, NSString;

@interface PGProgressCallChecker : NSObject {

	double _timestampOfLastCallToProgress;
	double _timestampOfLastRecordedCallToProgress;
	unsigned long long _numberOfCallsToProgressSinceLastRecordedCall;
	NSObject*<OS_os_log> _loggingConnection;
	BOOL _wasStopped;
	NSString* _taskName;

}

@property (nonatomic,copy) NSString * taskName;              //@synthesize taskName=_taskName - In the implementation block
-(NSString *)taskName;
-(void)setTaskName:(NSString *)arg1 ;
-(id)initWithTaskName:(id)arg1 loggingConnection:(id)arg2 ;
-(id)initWithTaskName:(id)arg1 ;
-(void)checkCallsWithProgress:(double)arg1 stop:(BOOL)arg2 ;
@end

