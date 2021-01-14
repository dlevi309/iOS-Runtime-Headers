/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_downloadWithLoadingCFURLConnection:(CFURLConnectionRef)arg1 request:(CFURLRequestRef)arg2 response:(CFURLResponseRef)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
+(id)_downloadWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
+(BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)arg1 ;
-(id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithResumeInformation:(id)arg1 delegate:(id)arg2 path:(id)arg3 ;
-(id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)arg1 request:(CFURLRequestRef)arg2 response:(CFURLResponseRef)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)init;
-(NSData *)resumeData;
-(id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
-(id)initWithResumeData:(id)arg1 delegate:(id)arg2 path:(id)arg3 ;
-(void)withDelegate:(/*^block*/id)arg1 ;
-(void)setDestination:(id)arg1 allowOverwrite:(BOOL)arg2 ;
-(void)setDeletesFileUponFailure:(BOOL)arg1 ;
-(id)_directoryPath;
-(BOOL)deletesFileUponFailure;
-(id)_resumeInformation;
-(void)_setDirectoryPath:(id)arg1 ;
-(id)url;
-(NSURLRequest *)request;
-(NSString *)description;
-(void)_setDelegateQueue:(id)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)cancel;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)dealloc;
@end

