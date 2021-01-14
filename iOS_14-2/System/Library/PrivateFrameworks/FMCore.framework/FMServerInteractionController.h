/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSOperationQueue, NSURLSession, NSURLSessionConfiguration, NSString;

@interface FMServerInteractionController : NSObject <NSURLSessionDelegate> {

	NSObject*<OS_dispatch_queue> dq_inFlightCommands;
	NSMutableSet* inFlightCommands;
	NSOperationQueue* _queue;
	NSURLSession* _session;
	NSURLSessionConfiguration* _sessionConfiguration;

}

@property (nonatomic,retain) NSURLSessionConfiguration * sessionConfiguration;              //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                        //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_simulatedLatency;
-(id)init;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)processResponseForCommand:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)networkActivityStatus:(BOOL)arg1 ;
-(NSURLSession *)session;
-(void)cancelAllCommands;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(void)cancelCommand:(id)arg1 ;
-(void)invalidate;
-(NSOperationQueue *)queue;
-(void)sendCommand:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)dealloc;
@end

