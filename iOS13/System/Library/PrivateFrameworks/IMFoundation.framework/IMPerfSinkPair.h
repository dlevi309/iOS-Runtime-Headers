/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol IMPerfProfilerBehavior, IMPerfProfilerSink;
@interface IMPerfSinkPair : NSObject {

	id<IMPerfProfilerBehavior> _behavior;
	id<IMPerfProfilerSink> _sink;

}

@property (nonatomic,readonly) id<IMPerfProfilerBehavior> behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) id<IMPerfProfilerSink> sink;                      //@synthesize sink=_sink - In the implementation block
-(void)dealloc;
-(id<IMPerfProfilerBehavior>)behavior;
-(id)initWithBehavior:(id)arg1 sink:(id)arg2 ;
-(id<IMPerfProfilerSink>)sink;
@end

