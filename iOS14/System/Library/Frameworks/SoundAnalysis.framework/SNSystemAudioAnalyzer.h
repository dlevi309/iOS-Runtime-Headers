/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNSystemAudioAnalyzerProtocol;
@interface SNSystemAudioAnalyzer : NSObject {

	id<SNSystemAudioAnalyzerProtocol> _impl;

}
+(id)selectAppropriateImplForThisProcess;
+(void)configureNewAnalyzersToComputeInThisProcess:(BOOL)arg1 ;
-(id)init;
-(void)start;
-(id)initWithImpl:(id)arg1 ;
-(void)stop;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg1 ;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)addRequestInBackground:(id)arg1 withObserver:(id)arg2 ;
@end

