/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)invalidate;
-(NSOperationQueue *)queue;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(void)setSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(double)_simulatedLatency;
-(void)processResponseForCommand:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)networkActivityStatus:(BOOL)arg1 ;
-(void)sendCommand:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelCommand:(id)arg1 ;
-(void)cancelAllCommands;
@end

