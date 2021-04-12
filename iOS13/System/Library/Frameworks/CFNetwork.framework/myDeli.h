/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSError, NSData, NSString;

@interface myDeli : NSObject <NSURLSessionDelegate> {

	NSError* _errorResult;
	BOOL _receivedResponse;
	BOOL _hasCanceled;
	NSData* resumeData;

}

@property (retain) NSError * someError;                             //@synthesize errorResult=_errorResult - In the implementation block
@property (assign) BOOL receivedResponse;                           //@synthesize receivedResponse=_receivedResponse - In the implementation block
@property (assign) BOOL hasCanceled;                                //@synthesize hasCanceled=_hasCanceled - In the implementation block
@property (copy) NSData * resumeData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(NSData *)resumeData;
-(void)setResumeData:(NSData *)arg1 ;
-(NSError *)someError;
-(void)setSomeError:(NSError *)arg1 ;
-(BOOL)receivedResponse;
-(void)setReceivedResponse:(BOOL)arg1 ;
-(BOOL)hasCanceled;
-(void)setHasCanceled:(BOOL)arg1 ;
@end

