/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/


@class MPSGraphExecutable;

@interface MPSGraphExecutionDescriptor : NSObject {

	BOOL _waitUntilCompleted;
	/*^block*/id _scheduledHandler;
	/*^block*/id _completionHandler;
	MPSGraphExecutable* _executable;

}

@property (nonatomic,retain) MPSGraphExecutable * executable;              //@synthesize executable=_executable - In the implementation block
@property (copy) id scheduledHandler;                                      //@synthesize scheduledHandler=_scheduledHandler - In the implementation block
@property (copy) id completionHandler;                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign) BOOL waitUntilCompleted;                                //@synthesize waitUntilCompleted=_waitUntilCompleted - In the implementation block
-(BOOL)waitUntilCompleted;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(MPSGraphExecutable *)executable;
-(void)setWaitUntilCompleted:(BOOL)arg1 ;
-(void)setExecutable:(MPSGraphExecutable *)arg1 ;
-(id)scheduledHandler;
-(void)setScheduledHandler:(id)arg1 ;
@end

