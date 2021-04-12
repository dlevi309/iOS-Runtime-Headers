/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSXPCConnection *)serverConnection;
-(void)setServiceThrottlingOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)serviceThrottlingOperationQueue;
-(id)init;
-(void)sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

