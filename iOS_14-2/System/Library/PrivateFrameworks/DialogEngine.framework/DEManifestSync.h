/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@class DEManifest, DEUpdater, NSURLSession, NSMutableDictionary, NSString;

@interface DEManifestSync : NSObject <NSURLSessionDownloadDelegate> {

	BOOL _syncInForeground;
	BOOL _checkOverlay;
	BOOL _cleanStorage;
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
@property (assign,nonatomic) BOOL checkOverlay;                             //@synthesize checkOverlay=_checkOverlay - In the implementation block
@property (assign,nonatomic) BOOL cleanStorage;                             //@synthesize cleanStorage=_cleanStorage - In the implementation block
@property (assign,nonatomic) BOOL downloadFailure;                          //@synthesize downloadFailure=_downloadFailure - In the implementation block
@property (assign,nonatomic) BOOL success;                                  //@synthesize success=_success - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sync;
-(BOOL)success;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setSuccess:(BOOL)arg1 ;
-(void)sync:(/*^block*/id)arg1 ;
-(void)setInProgress:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)clean;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)setUpdater:(DEUpdater *)arg1 ;
-(DEUpdater *)updater;
-(NSURLSession *)urlSession;
-(BOOL)isLatest;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(DEManifest *)manifest;
-(void)doIfLatest:(/*^block*/id)arg1 inBackground:(BOOL)arg2 elseDo:(/*^block*/id)arg3 ;
-(void)handlePostSyncBlock;
-(void)checkOverlay:(id)arg1 overlayChecks:(id)arg2 workArray:(id)arg3 postFileBlock:(/*^block*/id)arg4 ;
-(void)cleanStorage:(id)arg1 removes:(id)arg2 workArray:(id)arg3 postFileBlock:(/*^block*/id)arg4 ;
-(void)cleanupURLSession;
-(void)backgroundSync;
-(id)postSyncBlock;
-(void)setPostSyncBlock:(id)arg1 ;
-(BOOL)syncInForeground;
-(void)setSyncInForeground:(BOOL)arg1 ;
-(BOOL)checkOverlay;
-(void)setCheckOverlay:(BOOL)arg1 ;
-(BOOL)cleanStorage;
-(void)setCleanStorage:(BOOL)arg1 ;
-(BOOL)downloadFailure;
-(void)setDownloadFailure:(BOOL)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(NSMutableDictionary *)inProgress;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)setManifest:(DEManifest *)arg1 ;
-(id)initWithManifest:(id)arg1 updater:(id)arg2 syncInForeground:(BOOL)arg3 ;
-(void)directorySync:(/*^block*/id)arg1 ;
-(void)directoryClean:(/*^block*/id)arg1 ;
@end

