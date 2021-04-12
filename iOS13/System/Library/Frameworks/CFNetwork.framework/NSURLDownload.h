/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@class NSURLDownloadInternal, NSString, NSURLRequest, NSData;

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {

	NSURLDownloadInternal* _internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURLRequest * request; 
@property (copy,readonly) NSData * resumeData; 
@property (assign) BOOL deletesFileUponFailure; 
+(id)_downloadWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
+(id)_downloadWithLoadingCFURLConnection:(CFURLConnectionRef)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
+(id)_downloadWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
+(BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)_delegate;
-(void)cancel;
-(id)url;
-(NSURLRequest *)request;
-(NSData *)resumeData;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)_setDelegateQueue:(id)arg1 ;
-(void)cleanupChallenges;
-(id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
-(id)_initWithResumeInformation:(id)arg1 delegate:(id)arg2 path:(id)arg3 ;
-(id)initWithResumeData:(id)arg1 delegate:(id)arg2 path:(id)arg3 ;
-(id)_resumeInformation;
-(void)setDestination:(id)arg1 allowOverwrite:(BOOL)arg2 ;
-(void)setDeletesFileUponFailure:(BOOL)arg1 ;
-(BOOL)deletesFileUponFailure;
-(id)_directoryPath;
-(void)_setDelegate:(id)arg1 ;
-(void)_setDirectoryPath:(id)arg1 ;
-(void)releaseDelegate;
-(BOOL)_downloadActive;
-(void)withDelegate:(/*^block*/id)arg1 ;
-(void)sendDidStart:(CFURLDownloadRef)arg1 ;
-(id)sendWillSendRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(void)sendDidReceiveChallenge:(CFURLAuthChallengeRef)arg1 ;
-(void)sendDidReceiveResponse:(id)arg1 ;
-(void)sendWillResumeWithResponse:(id)arg1 startingByte:(unsigned long long)arg2 ;
-(void)sendDidReceiveData:(long long)arg1 ;
-(BOOL)sendShouldDecodeDataOfMIMEType:(CFStringRef)arg1 ;
-(void)sendDecideDestinationWithSuggestedObjectName:(CFStringRef)arg1 ;
-(void)sendDidCreateDestination:(CFURLRef)arg1 ;
-(void)sendDidFinish;
-(void)sendDidFail:(CFErrorRef)arg1 ;
-(BOOL)sendCanAuthenticateAgainstProtectionSpace:(CFURLProtectionSpaceRef)arg1 ;
@end

