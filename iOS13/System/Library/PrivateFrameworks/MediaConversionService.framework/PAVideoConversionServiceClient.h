/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <libobjc.A.dylib/VideoConversionServiceClient.h>

@class NSXPCConnection, NSMutableDictionary, PFDispatchQueue, NSString;

@interface PAVideoConversionServiceClient : NSObject <VideoConversionServiceClient> {

	NSXPCConnection* _serviceConnection;
	NSMutableDictionary* _pendingRequestIdentifierToProgressMap;
	PFDispatchQueue* _isolationQueue;
	unsigned long long _state;

}

@property (retain) NSXPCConnection * serviceConnection;                                      //@synthesize serviceConnection=_serviceConnection - In the implementation block
@property (retain) NSMutableDictionary * pendingRequestIdentifierToProgressMap;              //@synthesize pendingRequestIdentifierToProgressMap=_pendingRequestIdentifierToProgressMap - In the implementation block
@property (retain) PFDispatchQueue * isolationQueue;                                         //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (assign) unsigned long long state;                                                 //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(PFDispatchQueue *)isolationQueue;
-(void)setIsolationQueue:(PFDispatchQueue *)arg1 ;
-(void)invalidateAfterPendingRequestCompletion;
-(void)updateProgress:(id)arg1 ;
-(id)convertVideoAtSourceURLCollection:(id)arg1 toDestinationURLCollection:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSXPCConnection *)serviceConnection;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(void)setupServiceConnection;
-(id)convertVideoAtSourceURL:(id)arg1 toDestinationURL:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)extractStillImageFromVideoAtSourceURL:(id)arg1 toDestinationURL:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleRequestCompletionForIdentifier:(id)arg1 ;
-(void)transitionToInvalidatedState;
-(void)performCleanupForJobGroupIdentifier:(id)arg1 ;
-(NSMutableDictionary *)pendingRequestIdentifierToProgressMap;
-(void)setPendingRequestIdentifierToProgressMap:(NSMutableDictionary *)arg1 ;
-(void)ut_invalidateServiceConnection;
@end

