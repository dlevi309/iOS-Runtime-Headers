/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol OS_dispatch_queue;
@class VUIMediaLibrary, NSString, NSObject, NSOperationQueue, NSOperation;

@interface VUIMediaLibraryFetchController : NSObject {

	VUIMediaLibrary* _mediaLibrary;
	NSString* _identifier;
	NSString* _logName;
	NSString* _logNameSuffix;
	long long _state;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	NSOperationQueue* _serialFetchOperationQueue;
	NSOperation* _fetchOperation;
	unsigned long long _mediaLibraryRevision;
	unsigned long long _pauseCount;

}

@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                                          //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (assign) long long state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialFetchOperationQueue;                            //@synthesize serialFetchOperationQueue=_serialFetchOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperation * fetchOperation;                                            //@synthesize fetchOperation=_fetchOperation - In the implementation block
@property (assign,nonatomic) unsigned long long mediaLibraryRevision;                                 //@synthesize mediaLibraryRevision=_mediaLibraryRevision - In the implementation block
@property (assign,nonatomic) unsigned long long pauseCount;                                           //@synthesize pauseCount=_pauseCount - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * logName;                                                        //@synthesize logName=_logName - In the implementation block
@property (nonatomic,copy) NSString * logNameSuffix;                                                  //@synthesize logNameSuffix=_logNameSuffix - In the implementation block
+(id)_logStringWithFetchControllers:(id)arg1 ;
-(id)init;
-(void)pause;
-(void)setLogName:(NSString *)arg1 ;
-(NSString *)logName;
-(void)cancelFetch;
-(NSOperation *)fetchOperation;
-(void)setFetchOperation:(NSOperation *)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(long long)state;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(VUIMediaLibrary *)mediaLibrary;
-(unsigned long long)pauseCount;
-(void)resume;
-(id)initWithMediaLibrary:(id)arg1 ;
-(id)_fetchOperationForFetchReason:(long long)arg1 ;
-(void)_didCompleteFetchOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)mediaLibraryRevision;
-(void)beginFetchWithMediaLibraryRevision:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)setMediaLibraryRevision:(unsigned long long)arg1 ;
-(void)_enqueueSyncProcessingQueueBlock:(/*^block*/id)arg1 ;
-(void)_enqueueAsyncProcessingQueueBlock:(/*^block*/id)arg1 ;
-(NSOperationQueue *)serialFetchOperationQueue;
-(void)_enqueueProcessingQueueBlock:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)setSerialFetchOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setLogNameSuffix:(NSString *)arg1 ;
-(NSString *)logNameSuffix;
-(void)_cancelFetch;
-(void)_moveToPausedState;
-(void)setPauseCount:(unsigned long long)arg1 ;
-(void)_startFetchIfNeededWithMediaLibraryRevision:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_shouldFetchForMediaLibraryRevision:(unsigned long long)arg1 ;
-(void)_startFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_enqueueFetchWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchOperationCompleted:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_updateMutableArray:(id)arg1 withLatestObjects:(id)arg2 changeSet:(id)arg3 updateOnNoChanges:(BOOL)arg4 ;
@end

