/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <libobjc.A.dylib/NURenderStatistics.h>

@class NSArray, NSString;

@interface NURenderJobStatistics : NSObject <NURenderStatistics> {

	double _requestTime;
	double _willPrepareTime;
	double _didPrepareTime;
	double _willRenderTime;
	double _didRenderTime;
	double _willCompleteTime;
	double _didCompleteTime;
	double _responseTime;
	NSArray* _dependencies;

}

@property (assign) double requestTime;                              //@synthesize requestTime=_requestTime - In the implementation block
@property (assign) double willPrepareTime;                          //@synthesize willPrepareTime=_willPrepareTime - In the implementation block
@property (assign) double didPrepareTime;                           //@synthesize didPrepareTime=_didPrepareTime - In the implementation block
@property (assign) double willRenderTime;                           //@synthesize willRenderTime=_willRenderTime - In the implementation block
@property (assign) double didRenderTime;                            //@synthesize didRenderTime=_didRenderTime - In the implementation block
@property (assign) double willCompleteTime;                         //@synthesize willCompleteTime=_willCompleteTime - In the implementation block
@property (assign) double didCompleteTime;                          //@synthesize didCompleteTime=_didCompleteTime - In the implementation block
@property (assign) double responseTime;                             //@synthesize responseTime=_responseTime - In the implementation block
@property (copy) NSArray * dependencies;                            //@synthesize dependencies=_dependencies - In the implementation block
@property (readonly) double latency; 
@property (readonly) double duration; 
@property (readonly) double totalDuration; 
@property (readonly) double prepareLatency; 
@property (readonly) double prepareDuration; 
@property (readonly) double renderLatency; 
@property (readonly) double renderDuration; 
@property (readonly) double completeLatency; 
@property (readonly) double completeDuration; 
@property (readonly) double replyLatency; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aggregateStatistics:(id)arg1 ;
-(double)totalDuration;
-(double)completeDuration;
-(double)prepareDuration;
-(NSArray *)dependencies;
-(NSString *)description;
-(double)latency;
-(double)requestTime;
-(double)responseTime;
-(void)setResponseTime:(double)arg1 ;
-(double)duration;
-(void)setRequestTime:(double)arg1 ;
-(void)renderJob:(id)arg1 didRunStage:(long long)arg2 ;
-(void)renderJob:(id)arg1 willRunStage:(long long)arg2 ;
-(void)setDependencies:(NSArray *)arg1 ;
-(double)prepareLatency;
-(double)renderLatency;
-(double)renderDuration;
-(double)completeLatency;
-(double)replyLatency;
-(double)willPrepareTime;
-(void)setWillPrepareTime:(double)arg1 ;
-(double)didPrepareTime;
-(void)setDidPrepareTime:(double)arg1 ;
-(double)willRenderTime;
-(void)setWillRenderTime:(double)arg1 ;
-(double)didRenderTime;
-(void)setDidRenderTime:(double)arg1 ;
-(double)willCompleteTime;
-(void)setWillCompleteTime:(double)arg1 ;
-(double)didCompleteTime;
-(void)setDidCompleteTime:(double)arg1 ;
@end
