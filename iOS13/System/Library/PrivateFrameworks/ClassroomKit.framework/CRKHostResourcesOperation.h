/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/CATRemoteConnectionDelegate.h>

@protocol CRKHostResourcesOperationDelegate;
@class CRKHostResourcesConfiguration, NSDictionary, NSMutableDictionary, NSNetService, NSMutableSet, NSError, NSString;

@interface CRKHostResourcesOperation : CATOperation <NSNetServiceDelegate, CATRemoteConnectionDelegate> {

	CRKHostResourcesConfiguration* mConfiguration;
	NSDictionary* mFileURLsByFilePath;
	NSMutableDictionary* mStartedDownloadCountByFileURL;
	NSMutableDictionary* mFinishedDownloadCountByFileURL;
	NSNetService* mNetService;
	NSMutableSet* mConnections;
	BOOL mPublished;
	NSMutableSet* mConnectionCloseTimers;
	NSError* mStashedError;
	NSMutableDictionary* mZipOperationsByDirectoryURL;
	id<CRKHostResourcesOperationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CRKHostResourcesOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)run;
-(id<CRKHostResourcesOperationDelegate>)delegate;
-(void)setDelegate:(id<CRKHostResourcesOperationDelegate>)arg1 ;
-(void)cancel;
-(void)main;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isAsynchronous;
-(id)initWithConfiguration:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)connectionDidClose:(id)arg1 ;
-(void)operationDidFinish;
-(void)connection:(id)arg1 didReceiveDataRequestWithURL:(id)arg2 ;
-(void)connection:(id)arg1 didSendDataWithStream:(id)arg2 userInfo:(id)arg3 ;
-(void)connection:(id)arg1 didFailToSendDataWithStream:(id)arg2 userInfo:(id)arg3 error:(id)arg4 ;
-(void)connection:(id)arg1 didInterruptWithError:(id)arg2 ;
-(id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 ;
-(void)IPAddressDidChange;
-(void)delegateResourcesDidPublish;
-(id)hostingSocketOptions;
-(BOOL)downloadAllowedForFileURL:(id)arg1 ;
-(void)delegateDownloadStarted:(id)arg1 fileURL:(id)arg2 ;
-(void)incrementStartedDownloadCountForFileURL:(id)arg1 ;
-(void)serveItemAtURL:(id)arg1 toConnection:(id)arg2 forRequestURL:(id)arg3 originalItemURL:(id)arg4 ;
-(void)zipDirectoryAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)zipOperationDidFail:(id)arg1 directoryURL:(id)arg2 ;
-(void)delegateDownloadFinished:(id)arg1 fileURL:(id)arg2 error:(id)arg3 ;
-(void)incrementFinishedDownloadCountForFileURL:(id)arg1 ;
-(void)connectionCloseDidTimeout:(id)arg1 ;
-(BOOL)allDownloadsFinished;
-(id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 maximumAllowedDownloads:(unsigned long long)arg4 ;
-(id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 maximumAllowedDownloads:(unsigned long long)arg4 port:(unsigned short)arg5 ;
@end

