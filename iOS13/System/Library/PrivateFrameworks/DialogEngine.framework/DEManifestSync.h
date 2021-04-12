/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@class DEManifest, DEUpdater, NSURLSession, NSMutableDictionary, NSString;

@interface DEManifestSync : NSObject <NSURLSessionDownloadDelegate> {

	BOOL _syncInForeground;
	BOOL _downloadFailure;
	BOOL _success;
	DEManifest* _manifest;
	DEUpdater* _updater;
	NSURLSession* _urlSession;
	NSMutableDictionary* _inProgress;
	/*^block*/id _postSyncBlock;

}

@property (nonatomic,retain) DEManifest * manifest;                         //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,retain) DEUpdater * updater;                           //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) NSURLSession * urlSession;                     //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * inProgress;              //@synthesize inProgress=_inProgress - In the implementation block
@property (nonatomic,copy) id postSyncBlock;                                //@synthesize postSyncBlock=_postSyncBlock - In the implementation block
@property (assign,nonatomic) BOOL syncInForeground;                         //@synthesize syncInForeground=_syncInForeground - In the implementation block
@property (assign,nonatomic) BOOL downloadFailure;                          //@synthesize downloadFailure=_downloadFailure - In the implementation block
@property (assign,nonatomic) BOOL success;                                  //@synthesize success=_success - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)sync;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(BOOL)success;
-(NSMutableDictionary *)inProgress;
-(void)setInProgress:(NSMutableDictionary *)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(NSURLSession *)urlSession;
-(void)sync:(/*^block*/id)arg1 ;
-(DEManifest *)manifest;
-(void)setManifest:(DEManifest *)arg1 ;
-(void)setUpdater:(DEUpdater *)arg1 ;
-(DEUpdater *)updater;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(id)initWithManifest:(id)arg1 updater:(id)arg2 syncInForeground:(BOOL)arg3 ;
-(id)initWithManifest:(id)arg1 updater:(id)arg2 ;
-(BOOL)isLatest;
-(void)handlePostSyncBlock;
-(void)doIfLatest:(/*^block*/id)arg1 inBackground:(BOOL)arg2 elseDo:(/*^block*/id)arg3 ;
-(void)cleanupURLSession;
-(void)clean;
-(void)backgroundSync;
-(id)postSyncBlock;
-(void)setPostSyncBlock:(id)arg1 ;
-(BOOL)syncInForeground;
-(void)setSyncInForeground:(BOOL)arg1 ;
-(BOOL)downloadFailure;
-(void)setDownloadFailure:(BOOL)arg1 ;
@end

