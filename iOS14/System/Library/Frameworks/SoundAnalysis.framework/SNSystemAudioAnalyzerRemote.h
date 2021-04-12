/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNSystemAudioAnalyzerProtocol.h>

@protocol SNSystemAudioAnalyzerProtocol, OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface SNSystemAudioAnalyzerRemote : NSObject <SNSystemAudioAnalyzerProtocol> {

	NSMutableDictionary* _registeredRequests;
	id<SNSystemAudioAnalyzerProtocol> _analyzer;
	/*^block*/id _generator;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)connectionLostError;
-(id)init;
-(void)start;
-(void)stop;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg1 ;
-(id)initWithClient:(id)arg1 queue:(id)arg2 ;
-(void)_removeAllRequests;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)_removeRequest:(id)arg1 ;
-(id)initWithRemoteAnalyzerGenerator:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_invalidateAnalyzer:(id)arg1 ;
-(void)_invalidateActiveAnalyzer;
-(id)_acquireSystemAudioAnalyzer;
-(void)_addRequest:(id)arg1 withObserver:(id)arg2 ;
-(void)invalidateActiveAnalyzer;
@end

