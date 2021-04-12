/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIsolationQueue:(PFDispatchQueue *)arg1 ;
-(PFDispatchQueue *)isolationQueue;
-(void)markPendingRequestAsOptionalForProgress:(id)arg1 ;
-(BOOL)canMarkPendingRequestAsOptionalForProgress:(id)arg1 ;
-(void)invalidateAfterPendingRequestCompletion;
-(void)setState:(unsigned long long)arg1 ;
-(void)updateProgress:(id)arg1 ;
-(unsigned long long)state;
-(NSXPCConnection *)serviceConnection;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(id)convertVideoAtSourceURLCollection:(id)arg1 toDestinationURLCollection:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setupServiceConnection;
-(id)convertVideoAtSourceURL:(id)arg1 toDestinationURL:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)modifyRequestWithIdentifier:(id)arg1 modifications:(id)arg2 ;
-(void)extractStillImageFromVideoAtSourceURL:(id)arg1 toDestinationURL:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleRequestCompletionForIdentifier:(id)arg1 ;
-(void)transitionToInvalidatedState;
-(NSMutableDictionary *)pendingRequestIdentifierToProgressMap;
-(void)setPendingRequestIdentifierToProgressMap:(NSMutableDictionary *)arg1 ;
-(void)ut_invalidateServiceConnection;
@end

