/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/TestProbe.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURLSession, NSURLSessionDataTask, NSURL, NSString;

@interface TestHTTPProbe : TestProbe <NSURLSessionDelegate> {

	NSURLSession* _urlSession;
	NSURLSessionDataTask* _urlSessionTask;
	NSURL* _urlToTest;

}

@property (nonatomic,retain) NSURL * urlToTest;                     //@synthesize urlToTest=_urlToTest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)stopTest;
-(NSURL *)urlToTest;
-(void)testURL:(id)arg1 timeout:(double)arg2 interfaceName:(id)arg3 userAgent:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)setUrlToTest:(NSURL *)arg1 ;
@end

