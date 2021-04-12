/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSMutableData, EFPromise, NSURLResponse, EFFuture, NSString;

@interface MFMessageURLConnectionDelegate : NSObject <NSURLSessionDelegate> {

	NSMutableData* _responseBody;
	EFPromise* _promise;
	NSURLResponse* _response;

}

@property (nonatomic,readonly) EFFuture * future; 
@property (nonatomic,readonly) NSURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSURLResponse *)response;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(EFFuture *)future;
@end

