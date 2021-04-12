/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNSystemAudioAnalyzerProtocol.h>

@protocol SNSystemAudioAnalyzerXPCProtocolNSXPCProxyCreating;
@interface SNSystemAudioAnalyzerXPCPublisher : NSObject <SNSystemAudioAnalyzerProtocol> {

	id<SNSystemAudioAnalyzerXPCProtocol><NSXPCProxyCreating> _subscriber;

}
-(id)init;
-(void)start;
-(void)stop;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg1 ;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(id)initWithSubscriber:(id)arg1 ;
@end

