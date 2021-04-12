/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNSystemAudioAnalyzerXPCProtocol <NSObject>
@required
-(void)xpcAddRequest:(id)arg1 withObserver:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)xpcRemoveRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)xpcRemoveAllRequestsWithCompletionHandler:(/*^block*/id)arg1;
-(void)xpcStartWithCompletionHandler:(/*^block*/id)arg1;
-(void)xpcStopWithCompletionHandler:(/*^block*/id)arg1;

@end

