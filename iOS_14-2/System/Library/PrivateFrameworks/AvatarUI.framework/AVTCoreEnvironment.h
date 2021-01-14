/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)storeLocation;
+(id)imageStoreLocation;
+(/*^block*/id)serialQueueProvider;
+(id)defaultEnvironment;
+(id)stickerImageStoreLocation;
+(void)resetFlushCacheValuesIfNeeded;
+(id)imageCacheStoreLocationWithError:(id*)arg1 ;
-(id)init;
-(NSURL *)storeLocation;
-(NSNotificationCenter *)notificationCenter;
-(NSURL *)imageStoreLocation;
-(NSURL *)imageCacheStoreLocation;
-(id)serialQueueProvider;
-(id<AVTUILogger>)logger;
-(id)lockProvider;
-(NSURL *)stickerImageStoreLocation;
-(id<AVTBlockScheduler>)scheduler;
@end

