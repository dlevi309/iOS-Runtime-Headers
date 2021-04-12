/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class WFOAuth2Credential, NSURL, NSURLSession, NSMapTable, NSString;

@interface WFDropboxSessionManager : NSObject <NSURLSessionTaskDelegate> {

	WFOAuth2Credential* _credential;
	NSURL* _baseURL;
	NSURL* _contentBaseURL;
	NSURLSession* _session;
	NSMapTable* _progressTable;

}

@property (nonatomic,readonly) NSURL * baseURL;                          //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSURL * contentBaseURL;                   //@synthesize contentBaseURL=_contentBaseURL - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSMapTable * progressTable;               //@synthesize progressTable=_progressTable - In the implementation block
@property (nonatomic,copy) WFOAuth2Credential * credential;              //@synthesize credential=_credential - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSURL *)baseURL;
-(NSURLSession *)session;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(WFOAuth2Credential *)credential;
-(void)setCredential:(WFOAuth2Credential *)arg1 ;
-(NSURL *)contentBaseURL;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)deleteItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMapTable *)progressTable;
-(void)createFolderAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getItemAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getContentsOfFolderAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getContentsOfFolderWithParameters:(id)arg1 previous:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)saveFile:(id)arg1 toPath:(id)arg2 overwrite:(BOOL)arg3 progress:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)getSharedLinkForFile:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getExistingSharedLinkForFile:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)downloadFile:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sendContentDownloadRequestWithPath:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 parameters:(id)arg4 progress:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)sendContentUploadRequestWithPath:(id)arg1 parameters:(id)arg2 data:(id)arg3 inputStream:(id)arg4 progress:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)sendRPCRequestWithPath:(id)arg1 parameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
