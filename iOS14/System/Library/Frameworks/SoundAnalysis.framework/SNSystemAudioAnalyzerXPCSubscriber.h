/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNSystemAudioAnalyzerProtocol.h>
#import <libobjc.A.dylib/SNSystemAudioAnalyzerXPCProtocol.h>

@protocol SNSystemAudioAnalyzerProtocol;
@class NSMutableDictionary, NSString;

@interface SNSystemAudioAnalyzerXPCSubscriber : NSObject <SNSystemAudioAnalyzerProtocol, SNSystemAudioAnalyzerXPCProtocol> {

	NSMutableDictionary* _remoteObservers;
	id<SNSystemAudioAnalyzerProtocol> _receiver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)start;
-(void)stop;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg1 ;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(id)initWithReceiver:(id)arg1 ;
-(void)xpcAddRequest:(id)arg1 withObserver:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)xpcRemoveRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)xpcRemoveAllRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)xpcStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)xpcStopWithCompletionHandler:(/*^block*/id)arg1 ;
@end

