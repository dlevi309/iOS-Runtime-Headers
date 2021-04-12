/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSURLSession, NSURLSessionDataTask, MCSession, NSString, MCPeerID;

@interface MCResourceDownloader : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	NSURLSession* _urlSession;
	NSURLSessionDataTask* _urlTask;
	/*^block*/id _urlResponseHandler;
	MCSession* _session;
	NSString* _resourceName;
	MCPeerID* _peerID;

}

@property (nonatomic,retain) NSURLSession * urlSession;                   //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * urlTask;              //@synthesize urlTask=_urlTask - In the implementation block
@property (assign,nonatomic) id urlResponseHandler;                       //@synthesize urlResponseHandler=_urlResponseHandler - In the implementation block
@property (assign,nonatomic) MCSession * session;                         //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * resourceName;                       //@synthesize resourceName=_resourceName - In the implementation block
@property (nonatomic,retain) MCPeerID * peerID;                           //@synthesize peerID=_peerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setPeerID:(MCPeerID *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSURLSessionDataTask *)urlTask;
-(NSString *)resourceName;
-(MCPeerID *)peerID;
-(MCSession *)session;
-(void)setSession:(MCSession *)arg1 ;
-(NSURLSession *)urlSession;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)setUrlTask:(NSURLSessionDataTask *)arg1 ;
-(void)setResourceName:(NSString *)arg1 ;
-(void)dealloc;
-(void)syncCloseStreamForSession:(id)arg1 withError:(id)arg2 ;
-(void)sendData:(id)arg1 fromByteOffset:(unsigned long long)arg2 ;
-(id)initWithSession:(id)arg1 resourceUrl:(id)arg2 name:(id)arg3 peerID:(id)arg4 ;
-(id)urlResponseHandler;
-(void)setUrlResponseHandler:(id)arg1 ;
@end

