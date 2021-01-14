/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization
*/


@protocol OS_dispatch_queue;
#import <VisualLocalization/VisualLocalization-Structs.h>
@class NSURL, NSObject;

@interface VLTraceRecorder : NSObject {

	NSURL* _destinationDirectory;
	NSObject*<OS_dispatch_queue> _queue;
	GEOOnce_s _began;
	GEOOnce_s _finished;
	NSURL* _baseDirectory;
	NSURL* _imagesDirectory;
	NSURL* _parametersDirectory;
	NSURL* _resultsDirectory;

}
+(id)defaultDirectory;
-(void)finish;
-(void)start;
-(id)initWithDirectory:(id)arg1 ;
-(void)_beginTraceIfNecessary;
-(void)_finishOnIsolationQueue;
-(void)_recordAttemptOnIsolationQueue:(id)arg1 ;
-(void)recordAttempt:(id)arg1 ;
@end

