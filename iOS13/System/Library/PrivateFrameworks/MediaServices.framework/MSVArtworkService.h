/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject {

	NSOperationQueue* _serviceThrottlingOperationQueue;
	NSXPCConnection* _serverConnection;

}

@property (nonatomic,retain) NSOperationQueue * serviceThrottlingOperationQueue;              //@synthesize serviceThrottlingOperationQueue=_serviceThrottlingOperationQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverConnection;                              //@synthesize serverConnection=_serverConnection - In the implementation block
+(id)sharedService;
-(id)init;
-(void)dealloc;
-(void)sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection *)serverConnection;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)setServiceThrottlingOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)serviceThrottlingOperationQueue;
@end

