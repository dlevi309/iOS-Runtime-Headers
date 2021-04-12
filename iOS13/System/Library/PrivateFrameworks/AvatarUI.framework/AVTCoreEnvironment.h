/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTUILogger, AVTBlockScheduler;
@class NSURL, NSNotificationCenter;

@interface AVTCoreEnvironment : NSObject {

	NSURL* _storeLocation;
	NSURL* _imageStoreLocation;
	NSURL* _stickerImageStoreLocation;
	NSURL* _imageCacheStoreLocation;
	id<AVTUILogger> _logger;
	id<AVTBlockScheduler> _scheduler;
	/*^block*/id _serialQueueProvider;
	/*^block*/id _lockProvider;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) id<AVTUILogger> logger;                                 //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTBlockScheduler> scheduler;                        //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,copy,readonly) id serialQueueProvider;                            //@synthesize serialQueueProvider=_serialQueueProvider - In the implementation block
@property (nonatomic,copy,readonly) id lockProvider;                                   //@synthesize lockProvider=_lockProvider - In the implementation block
@property (nonatomic,copy,readonly) NSURL * storeLocation; 
@property (nonatomic,copy,readonly) NSURL * imageStoreLocation; 
@property (nonatomic,copy,readonly) NSURL * stickerImageStoreLocation; 
@property (nonatomic,copy,readonly) NSURL * imageCacheStoreLocation; 
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
+(id)defaultEnvironment;
+(id)storeLocation;
+(/*^block*/id)serialQueueProvider;
+(id)stickerImageStoreLocation;
+(id)imageStoreLocation;
+(void)resetFlushCacheValuesIfNeeded;
+(id)imageCacheStoreLocationWithError:(id*)arg1 ;
-(id)init;
-(id<AVTUILogger>)logger;
-(NSNotificationCenter *)notificationCenter;
-(id<AVTBlockScheduler>)scheduler;
-(NSURL *)storeLocation;
-(NSURL *)imageCacheStoreLocation;
-(id)serialQueueProvider;
-(NSURL *)stickerImageStoreLocation;
-(id)lockProvider;
-(NSURL *)imageStoreLocation;
@end

