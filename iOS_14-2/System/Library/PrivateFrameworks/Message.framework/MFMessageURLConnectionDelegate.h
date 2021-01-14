/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(EFFuture *)future;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(NSURLResponse *)response;
@end

