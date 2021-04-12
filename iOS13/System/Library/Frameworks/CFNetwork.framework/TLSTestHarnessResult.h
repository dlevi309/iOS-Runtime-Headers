/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_semaphore;
@class NSURLSessionTask, NSHTTPURLResponse, NSMutableData, NSError, NSObject;

@interface TLSTestHarnessResult : NSObject {

	NSURLSessionTask* _task;
	NSHTTPURLResponse* _response;
	NSMutableData* _data;
	NSError* _error;
	NSObject*<OS_dispatch_semaphore> _sema;

}

@property (retain) NSURLSessionTask * task;                            //@synthesize task=_task - In the implementation block
@property (retain) NSHTTPURLResponse * response;                       //@synthesize response=_response - In the implementation block
@property (retain) NSMutableData * data;                               //@synthesize data=_data - In the implementation block
@property (retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> sema;              //@synthesize sema=_sema - In the implementation block
-(void)dealloc;
-(NSMutableData *)data;
-(NSError *)error;
-(void)setData:(NSMutableData *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSHTTPURLResponse *)response;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(NSURLSessionTask *)task;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(id)initWithTask:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)sema;
-(void)setSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)appendResponseData:(id)arg1 ;
@end

