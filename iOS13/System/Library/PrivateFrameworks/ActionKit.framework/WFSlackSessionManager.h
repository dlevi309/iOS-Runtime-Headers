/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, NSURLSession, NSURL, NSMapTable;

@interface WFSlackSessionManager : NSObject <NSURLSessionDataDelegate> {

	NSString* _token;
	NSURLSession* _session;
	NSURL* _baseURL;
	NSMapTable* _progressTable;

}

@property (nonatomic,readonly) NSURLSession * session;                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                       //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSMapTable * progressTable;              //@synthesize progressTable=_progressTable - In the implementation block
@property (nonatomic,copy) NSString * token;                          //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)token;
-(NSURL *)baseURL;
-(NSURLSession *)session;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)setToken:(NSString *)arg1 ;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)sendRequest:(id)arg1 progress:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMapTable *)progressTable;
-(void)testAuthentication:(/*^block*/id)arg1 ;
-(void)listChannels:(/*^block*/id)arg1 ;
-(void)listGroups:(/*^block*/id)arg1 ;
-(void)listUsers:(/*^block*/id)arg1 ;
-(void)listIMs:(/*^block*/id)arg1 ;
-(void)sendMessage:(id)arg1 toChannel:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)uploadFile:(id)arg1 progress:(id)arg2 toChannel:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setProgressTable:(NSMapTable *)arg1 ;
@end

