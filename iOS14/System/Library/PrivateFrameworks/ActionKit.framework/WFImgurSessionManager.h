/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, WFOAuth2Credential, NSURL, NSURLSession, NSMapTable;

@interface WFImgurSessionManager : NSObject <NSURLSessionDataDelegate> {

	NSString* _clientID;
	WFOAuth2Credential* _credential;
	NSURL* _baseURL;
	NSURLSession* _session;
	NSMapTable* _progressTable;

}

@property (nonatomic,readonly) NSURLSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSMapTable * progressTable;               //@synthesize progressTable=_progressTable - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientID;                 //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) WFOAuth2Credential * credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                          //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(NSString *)clientID;
-(WFOAuth2Credential *)credential;
-(NSURL *)baseURL;
-(id)initWithClientID:(id)arg1 ;
-(NSURLSession *)session;
-(void)setCredential:(WFOAuth2Credential *)arg1 ;
-(id)initWithClientID:(id)arg1 configuration:(id)arg2 ;
-(void)uploadImage:(id)arg1 title:(id)arg2 description:(id)arg3 progress:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)createAlbumWithIDs:(id)arg1 title:(id)arg2 description:(id)arg3 layout:(id)arg4 privacy:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)getAlbumLinkFromID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendRequest:(id)arg1 progress:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMapTable *)progressTable;
@end

