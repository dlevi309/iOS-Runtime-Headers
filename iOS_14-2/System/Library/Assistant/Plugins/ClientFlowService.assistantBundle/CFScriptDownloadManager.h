/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol CFScriptDownloadDelegate;
@class NSURLSession, NSString;

@interface CFScriptDownloadManager : NSObject <NSURLSessionDelegate> {

	id<CFScriptDownloadDelegate> _delegate;
	NSURLSession* _session;

}

@property (readonly) id<CFScriptDownloadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSURLSession * session;                             //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<CFScriptDownloadDelegate>)delegate;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(NSURLSession *)session;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_isValidURL:(id)arg1 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(BOOL)_verifyScriptData:(id)arg1 hmac:(id)arg2 hmacKey:(id)arg3 iv:(id)arg4 ;
-(id)_hmacVerificationEventContextWithEncryptionParameters:(id)arg1 script:(id)arg2 scriptData:(id)arg3 ;
-(id)_decryptedDataForScriptEncryptedData:(id)arg1 forScript:(id)arg2 ;
-(BOOL)_isValidDecryptedData:(id)arg1 forScript:(id)arg2 ;
-(id)_scriptStringFromData:(id)arg1 ;
-(void)_saveDecryptedData:(id)arg1 script:(id)arg2 ;
-(id)_filePathForScriptArchiveIdentifier:(id)arg1 ;
-(void)invalidateTasks;
-(void)downloadScript:(id)arg1 onDispatchGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

