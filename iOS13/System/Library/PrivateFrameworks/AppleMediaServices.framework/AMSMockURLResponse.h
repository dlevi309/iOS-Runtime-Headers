/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSDictionary, NSData, NSURLRequest, NSMutableArray, NSURLSessionTask;

@interface AMSMockURLResponse : NSObject {

	BOOL _performActualRequest;
	unsigned long long _statusCode;
	NSDictionary* _headers;
	NSData* _body;
	NSURLRequest* _originalRequest;
	NSMutableArray* _responseHandlerBlocks;
	NSURLSessionTask* _runningTask;

}

@property (nonatomic,retain) NSMutableArray * responseHandlerBlocks;              //@synthesize responseHandlerBlocks=_responseHandlerBlocks - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * runningTask;                      //@synthesize runningTask=_runningTask - In the implementation block
@property (assign,nonatomic) unsigned long long statusCode;                       //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSData * body;                                       //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) BOOL performActualRequest;                           //@synthesize performActualRequest=_performActualRequest - In the implementation block
@property (nonatomic,readonly) NSURLRequest * originalRequest;                    //@synthesize originalRequest=_originalRequest - In the implementation block
+(id)responseFromActualResponse;
+(id)responseWithStatus:(unsigned long long)arg1 headers:(id)arg2 body:(id)arg3 ;
+(id)responseWithHARFile:(id)arg1 ;
-(id)init;
-(unsigned long long)statusCode;
-(NSURLRequest *)originalRequest;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(void)setStatusCode:(unsigned long long)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(SCD_Struct_AM9)handleReceivedRequest:(id)arg1 ;
-(void)stopRunningTasks;
-(void)setPerformActualRequest:(BOOL)arg1 ;
-(BOOL)performActualRequest;
-(void)setRunningTask:(NSURLSessionTask *)arg1 ;
-(NSURLSessionTask *)runningTask;
-(NSMutableArray *)responseHandlerBlocks;
-(void)addResponseHandler:(/*^block*/id)arg1 ;
-(void)setResponseHandlerBlocks:(NSMutableArray *)arg1 ;
@end

