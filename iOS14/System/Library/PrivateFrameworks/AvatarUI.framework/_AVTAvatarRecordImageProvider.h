/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTImageCache, AVTUILogger, OS_dispatch_queue, AVTTaskScheduler;
@class AVTUIEnvironment, AVTAvatarConfigurationImageRenderer, AVTAvatarImageRenderer, NSObject;

@interface _AVTAvatarRecordImageProvider : NSObject {

	BOOL _allowPreFlight;
	id<AVTImageCache> _peristentCache;
	id<AVTImageCache> _volatileCache;
	id<AVTUILogger> _logger;
	AVTUIEnvironment* _environment;
	AVTAvatarConfigurationImageRenderer* _configurationRenderer;
	AVTAvatarImageRenderer* _avatarRenderer;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<AVTTaskScheduler> _renderingScheduler;

}

@property (nonatomic,readonly) id<AVTImageCache> peristentCache;                                         //@synthesize peristentCache=_peristentCache - In the implementation block
@property (nonatomic,readonly) id<AVTImageCache> volatileCache;                                          //@synthesize volatileCache=_volatileCache - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                   //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                           //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) AVTAvatarConfigurationImageRenderer * configurationRenderer;              //@synthesize configurationRenderer=_configurationRenderer - In the implementation block
@property (nonatomic,readonly) AVTAvatarImageRenderer * avatarRenderer;                                  //@synthesize avatarRenderer=_avatarRenderer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;                               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) id<AVTTaskScheduler> renderingScheduler;                                  //@synthesize renderingScheduler=_renderingScheduler - In the implementation block
@property (nonatomic,readonly) BOOL allowPreFlight;                                                      //@synthesize allowPreFlight=_allowPreFlight - In the implementation block
+(void)makePersistentImageCache:(out id*)arg1 volatileImageCache:(out id*)arg2 withEnvironment:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(/*^block*/id)providerForRecord:(id)arg1 scope:(id)arg2 ;
-(id<AVTTaskScheduler>)renderingScheduler;
-(id)initWithEnvironment:(id)arg1 ;
-(id<AVTUILogger>)logger;
-(id<AVTImageCache>)peristentCache;
-(id)initWithPersistentCache:(id)arg1 volatileCache:(id)arg2 allowPreFlight:(BOOL)arg3 taskScheduler:(id)arg4 environment:(id)arg5 ;
-(BOOL)allowPreFlight;
-(id)initWithEnvironment:(id)arg1 taskScheduler:(id)arg2 ;
-(id)initWithPersistentCache:(id)arg1 volatileCache:(id)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 configurationRenderer:(id)arg5 avatarRenderer:(id)arg6 taskScheduler:(id)arg7 allowPreFlight:(BOOL)arg8 environment:(id)arg9 ;
-(/*^block*/id)_providerForAvatar:(id)arg1 forRecord:(id)arg2 scope:(id)arg3 usingCache:(BOOL)arg4 ;
-(AVTAvatarConfigurationImageRenderer *)configurationRenderer;
-(id<AVTImageCache>)volatileCache;
-(/*^block*/id)providerForAvatar:(id)arg1 forRecord:(id)arg2 scope:(id)arg3 usingCache:(BOOL)arg4 ;
-(/*^block*/id)_providerForRecord:(id)arg1 scope:(id)arg2 ;
-(AVTUIEnvironment *)environment;
-(AVTAvatarImageRenderer *)avatarRenderer;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
@end

