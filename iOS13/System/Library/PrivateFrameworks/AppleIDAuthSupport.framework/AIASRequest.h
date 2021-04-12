/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleIDAuthSupport.framework/AppleIDAuthSupport
*/

#import <AppleIDAuthSupport/AppleIDAuthSupport-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSMutableURLRequest, NSMutableData, NSObject, NSURLSession, NSURLSessionDataTask, NSError, NSString;

@interface AIASRequest : NSObject <NSURLSessionDataDelegate> {

	BOOL _done;
	BOOL _success;
	NSMutableURLRequest* _URLRequest;
	NSMutableData* _data;
	AppleIDAuthSupportDataRef _context;
	NSObject*<OS_dispatch_semaphore> _sema;
	NSURLSession* _session;
	NSURLSessionDataTask* _task;
	NSError* _error;
	NSString* _networkTaskDescription;

}

@property (retain) NSMutableURLRequest * URLRequest;                   //@synthesize URLRequest=_URLRequest - In the implementation block
@property (retain) NSMutableData * data;                               //@synthesize data=_data - In the implementation block
@property (assign) BOOL done;                                          //@synthesize done=_done - In the implementation block
@property (assign) BOOL success;                                       //@synthesize success=_success - In the implementation block
@property (assign) AppleIDAuthSupportDataRef context;                  //@synthesize context=_context - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> sema;              //@synthesize sema=_sema - In the implementation block
@property (retain) NSURLSession * session;                             //@synthesize session=_session - In the implementation block
@property (retain) NSURLSessionDataTask * task;                        //@synthesize task=_task - In the implementation block
@property (retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (retain) NSString * networkTaskDescription;                  //@synthesize networkTaskDescription=_networkTaskDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableData *)data;
-(NSError *)error;
-(void)resume;
-(void)setData:(NSMutableData *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(AppleIDAuthSupportDataRef)context;
-(void)setContext:(AppleIDAuthSupportDataRef)arg1 ;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(BOOL)success;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)sema;
-(void)setSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(NSMutableURLRequest *)URLRequest;
-(void)setURLRequest:(NSMutableURLRequest *)arg1 ;
-(void)setNetworkTaskDescription:(NSString *)arg1 ;
-(NSString *)networkTaskDescription;
-(id)initWithURL:(id)arg1 data:(CFDictionaryRef)arg2 clientInfo:(id)arg3 proxiedClientInfo:(id)arg4 companionClientInfo:(id)arg5 appleITeamId:(id)arg6 appleIClientId:(id)arg7 ;
@end

