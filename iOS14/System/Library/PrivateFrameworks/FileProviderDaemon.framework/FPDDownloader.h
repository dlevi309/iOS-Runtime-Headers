/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/FPCancellable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSObservation, FPDDomain, NSProgress;

@interface FPDDownloader : NSObject <FPCancellable> {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _parentToChildMap;
	NSMutableDictionary* _childProxies;
	NSObservation* _observation;
	FPDDomain* _domain;
	NSProgress* _cancellationProgress;
	NSProgress* _progress;

}

@property (nonatomic,__weak,readonly) FPDDomain * domain;                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSProgress * cancellationProgress;              //@synthesize cancellationProgress=_cancellationProgress - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                          //@synthesize progress=_progress - In the implementation block
-(void)_cleanup;
-(NSProgress *)progress;
-(FPDDomain *)domain;
-(void)cancel;
-(void)dealloc;
-(void)_stopTrackingFileURLs;
-(void)_createChildItem:(id)arg1 ;
-(void)downloadItem:(id)arg1 recursively:(BOOL)arg2 request:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_didDownloadItem:(id)arg1 withError:(id)arg2 ;
-(void)_recursiveDownloadOfItem:(id)arg1 request:(id)arg2 perItemCompletion:(/*^block*/id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_nonRecursiveDownloadOfItem:(id)arg1 request:(id)arg2 perItemCompletion:(/*^block*/id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_logRootProgress;
-(void)_progressComputationPreflightForRecursiveRoot:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDomain:(id)arg1 callbackQueue:(id)arg2 ;
-(void)downloadURL:(id)arg1 recursively:(BOOL)arg2 request:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(NSProgress *)cancellationProgress;
@end

