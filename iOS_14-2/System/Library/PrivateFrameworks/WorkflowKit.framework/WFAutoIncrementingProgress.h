/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <Foundation/NSProgress.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface WFAutoIncrementingProgress : NSProgress {

	double _duration;
	unsigned long long _increments;
	NSObject*<OS_dispatch_source> _progressTimer;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,readonly) unsigned long long increments;                          //@synthesize increments=_increments - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> progressTimer;              //@synthesize progressTimer=_progressTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                      //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) double duration;                                        //@synthesize duration=_duration - In the implementation block
-(void)finish;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)start;
-(double)duration;
-(void)cancel;
-(void)setProgressTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)progressTimer;
-(id)initWithParent:(id)arg1 pendingUnitCount:(unsigned long long)arg2 duration:(double)arg3 ;
-(unsigned long long)increments;
@end

