/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <libobjc.A.dylib/TPSURLSessionManagerDelegate.h>
#import <libobjc.A.dylib/TPSURLSessionDelegate.h>

@protocol TPSURLSessionHandlerDelegate;
@class NSIndexSet, NSString;

@interface TPSURLSessionHandler : NSObject <TPSURLSessionManagerDelegate, TPSURLSessionDelegate> {

	BOOL _shouldIgnoreInMemoryCaching;
	id<TPSURLSessionHandlerDelegate> _delegate;
	NSIndexSet* _excludeCachingDataTypes;
	NSString* _passphrase;
	NSString* _certificateFilePath;

}

@property (assign,nonatomic,__weak) id<TPSURLSessionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreInMemoryCaching;                              //@synthesize shouldIgnoreInMemoryCaching=_shouldIgnoreInMemoryCaching - In the implementation block
@property (nonatomic,retain) NSIndexSet * excludeCachingDataTypes;                          //@synthesize excludeCachingDataTypes=_excludeCachingDataTypes - In the implementation block
@property (nonatomic,retain) NSString * passphrase;                                         //@synthesize passphrase=_passphrase - In the implementation block
@property (nonatomic,retain) NSString * certificateFilePath;                                //@synthesize certificateFilePath=_certificateFilePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id<TPSURLSessionHandlerDelegate>)delegate;
-(id)cacheControllerForDataType:(long long)arg1 ;
-(id)processJSONFormattedDataForCDSError:(id)arg1 ;
-(BOOL)shouldCacheToDiskForSessionTask:(id)arg1 ;
-(BOOL)respectCachingForRequest:(id)arg1 ;
-(id)URLSessionManagerSessionOperationQueue:(id)arg1 ;
-(id)URLSessionManagerSessionConfiguration:(id)arg1 ;
-(BOOL)URLSessionManagerShouldCoalesceRequest:(id)arg1 ;
-(void)URLSessionManagerDidReceiveChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)sessionTask:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sessionTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sessionTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)sessionTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCertificateFilePath:(NSString *)arg1 ;
-(BOOL)shouldIgnoreInMemoryCaching;
-(void)setShouldIgnoreInMemoryCaching:(BOOL)arg1 ;
-(NSIndexSet *)excludeCachingDataTypes;
-(void)setExcludeCachingDataTypes:(NSIndexSet *)arg1 ;
-(NSString *)certificateFilePath;
-(void)setDelegate:(id<TPSURLSessionHandlerDelegate>)arg1 ;
-(NSString *)passphrase;
-(void)setPassphrase:(NSString *)arg1 ;
@end

