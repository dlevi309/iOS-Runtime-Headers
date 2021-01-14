/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol IMPerfProfilerBehavior, IMPerfProfilerSink;
@interface IMPerfSinkPair : NSObject {

	id<IMPerfProfilerBehavior> _behavior;
	id<IMPerfProfilerSink> _sink;

}

@property (nonatomic,readonly) id<IMPerfProfilerBehavior> behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) id<IMPerfProfilerSink> sink;                      //@synthesize sink=_sink - In the implementation block
-(id<IMPerfProfilerSink>)sink;
-(id<IMPerfProfilerBehavior>)behavior;
-(id)initWithBehavior:(id)arg1 sink:(id)arg2 ;
@end

