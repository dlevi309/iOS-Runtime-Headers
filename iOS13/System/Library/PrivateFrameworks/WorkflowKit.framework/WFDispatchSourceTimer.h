/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface WFDispatchSourceTimer : NSObject {

	NSObject*<OS_dispatch_source> _source;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_source>)source;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(id)initWithInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithInterval:(double)arg1 repeatInterval:(double)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithInterval:(double)arg1 repeatIntervalInt:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

