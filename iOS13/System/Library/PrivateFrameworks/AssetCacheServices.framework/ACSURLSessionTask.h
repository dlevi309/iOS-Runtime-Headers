/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServices.framework/AssetCacheServices
*/

#import <AssetCacheServices/AssetCacheServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSURLSessionTask, ACSURLSession, NSURLRequest, NSURLResponse, NSString, NSError;

@interface ACSURLSessionTask : NSObject <NSCopying, NSProgressReporting> {

	BOOL __tryCachingServer;
	BOOL __failBackToOrigin;
	BOOL __suspended;
	/*^block*/id __nsurlTaskCreator;
	NSURLSessionTask* __nsurlTaskToOrigin;
	NSURLSessionTask* __nsurlTaskToCachingServer;
	ACSURLSession* __weakSession;

}

@property (copy) id _nsurlTaskCreator;                                        //@synthesize _nsurlTaskCreator=__nsurlTaskCreator - In the implementation block
@property (retain) NSURLSessionTask * _nsurlTaskToOrigin;                     //@synthesize _nsurlTaskToOrigin=__nsurlTaskToOrigin - In the implementation block
@property (retain) NSURLSessionTask * _nsurlTaskToCachingServer;              //@synthesize _nsurlTaskToCachingServer=__nsurlTaskToCachingServer - In the implementation block
@property (__weak) ACSURLSession * _weakSession;                              //@synthesize _weakSession=__weakSession - In the implementation block
@property (readonly) BOOL _isUpload; 
@property (assign) BOOL _tryCachingServer;                                    //@synthesize _tryCachingServer=__tryCachingServer - In the implementation block
@property (assign) BOOL _failBackToOrigin;                                    //@synthesize _failBackToOrigin=__failBackToOrigin - In the implementation block
@property (assign) BOOL _suspended;                                           //@synthesize _suspended=__suspended - In the implementation block
@property (readonly) unsigned long long taskIdentifier; 
@property (copy,readonly) NSURLRequest * originalRequest; 
@property (copy,readonly) NSURLRequest * currentRequest; 
@property (copy,readonly) NSURLResponse * response; 
@property (readonly) NSProgress * progress; 
@property (assign) long long countOfBytesClientExpectsToSend; 
@property (assign) long long countOfBytesClientExpectsToReceive; 
@property (readonly) long long countOfBytesReceived; 
@property (readonly) long long countOfBytesSent; 
@property (readonly) long long countOfBytesExpectedToSend; 
@property (readonly) long long countOfBytesExpectedToReceive; 
@property (copy) NSString * taskDescription; 
@property (readonly) long long state; 
@property (copy,readonly) NSError * error; 
@property (assign) float priority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)resume;
-(NSProgress *)progress;
-(long long)state;
-(void)suspend;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(NSURLResponse *)response;
-(unsigned long long)taskIdentifier;
-(NSURLRequest *)originalRequest;
-(NSURLRequest *)currentRequest;
-(BOOL)_suspended;
-(long long)countOfBytesReceived;
-(void)setCountOfBytesClientExpectsToReceive:(long long)arg1 ;
-(long long)countOfBytesClientExpectsToReceive;
-(void)setCountOfBytesClientExpectsToSend:(long long)arg1 ;
-(long long)countOfBytesClientExpectsToSend;
-(void)setTaskDescription:(NSString *)arg1 ;
-(NSString *)taskDescription;
-(long long)countOfBytesExpectedToReceive;
-(long long)countOfBytesExpectedToSend;
-(long long)countOfBytesSent;
-(BOOL)_isUpload;
-(ACSURLSession *)_weakSession;
-(NSURLSessionTask *)_nsurlTaskToOrigin;
-(NSURLSessionTask *)_nsurlTaskToCachingServer;
-(void)set_nsurlTaskToOrigin:(NSURLSessionTask *)arg1 ;
-(void)set_nsurlTaskToCachingServer:(NSURLSessionTask *)arg1 ;
-(BOOL)_tryCachingServer;
-(void)set_failBackToOrigin:(BOOL)arg1 ;
-(void)set_nsurlTaskCreator:(id)arg1 ;
-(id)_nsurlTaskForRequest:(id)arg1 ;
-(void)set_tryCachingServer:(BOOL)arg1 ;
-(void)set_suspended:(BOOL)arg1 ;
-(BOOL)_failBackToOrigin;
-(id)initWithNSURLTaskCreator:(/*^block*/id)arg1 initialRequest:(id)arg2 forSession:(id)arg3 ;
-(void)set_weakSession:(ACSURLSession *)arg1 ;
-(id)_nsurlTaskCreator;
@end

