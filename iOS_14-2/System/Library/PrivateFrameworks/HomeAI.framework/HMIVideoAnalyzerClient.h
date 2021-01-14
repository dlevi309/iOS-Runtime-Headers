/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMIVideoAnalyzer.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, VCPHomeKitAnalysisSession, NSString;

@interface HMIVideoAnalyzerClient : HMIVideoAnalyzer <HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	VCPHomeKitAnalysisSession* _remote;

}

@property (readonly) VCPHomeKitAnalysisSession * remote;              //@synthesize remote=_remote - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)flush;
-(void)finish;
-(void)_didFailWithError:(id)arg1 ;
-(VCPHomeKitAnalysisSession *)remote;
-(void)flushAsync;
-(void)cancel;
-(id)initWithConfiguration:(id)arg1 identifier:(id)arg2 ;
-(void)setAnalysisFPS:(double)arg1 ;
-(void)setMonitored:(BOOL)arg1 ;
-(void)handleAssetData:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleMessageWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendMessage:(SEL)arg1 arguments:(id)arg2 asynchronous:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_sendMessageWithOptions:(id)arg1 asynchronous:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_sendMessage:(SEL)arg1 arguments:(id)arg2 asynchronous:(BOOL)arg3 ;
@end

