/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
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
-(id<CFScriptDownloadDelegate>)delegate;
-(NSURLSession *)session;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_isValidURL:(id)arg1 ;
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

