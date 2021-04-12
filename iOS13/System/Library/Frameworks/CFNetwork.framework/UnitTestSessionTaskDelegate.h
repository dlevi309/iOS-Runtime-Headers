/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSString;

@interface UnitTestSessionTaskDelegate : NSObject <NSURLSessionTaskDelegate> {

	SmartBlockWithArgs<NSURLSessionTaskMetrics *>* _didFinishCollectingMetricsCompletionBlock;

}

@property (assign,nonatomic) SmartBlockWithArgs<NSURLSessionTaskMetrics *>* didFinishCollectingMetricsCompletionBlock;              //@synthesize didFinishCollectingMetricsCompletionBlock=_didFinishCollectingMetricsCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(SmartBlockWithArgs<NSURLSessionTaskMetrics *>*)didFinishCollectingMetricsCompletionBlock;
-(void)setDidFinishCollectingMetricsCompletionBlock:(SmartBlockWithArgs<NSURLSessionTaskMetrics *>*)arg1 ;
@end

