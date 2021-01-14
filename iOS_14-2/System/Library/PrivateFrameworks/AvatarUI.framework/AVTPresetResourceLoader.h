/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTImageCache, AVTTaskScheduler, OS_dispatch_queue, AVTUILogger;
@class AVTUIEnvironment, AVTInMemoryResourceCache, NSObject;

@interface AVTPresetResourceLoader : NSObject {

	AVTUIEnvironment* _environment;
	AVTInMemoryResourceCache* _presetCache;
	id<AVTImageCache> _inMemoryImageCache;
	id<AVTTaskScheduler> _renderingScheduler;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<AVTUILogger> _logger;

}

@property (nonatomic,readonly) AVTUIEnvironment * environment;                          //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) AVTInMemoryResourceCache * presetCache;                  //@synthesize presetCache=_presetCache - In the implementation block
@property (nonatomic,readonly) id<AVTImageCache> inMemoryImageCache;                    //@synthesize inMemoryImageCache=_inMemoryImageCache - In the implementation block
@property (nonatomic,readonly) id<AVTTaskScheduler> renderingScheduler;                 //@synthesize renderingScheduler=_renderingScheduler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                  //@synthesize logger=_logger - In the implementation block
-(NSObject*<OS_dispatch_queue>)workQueue;
-(AVTInMemoryResourceCache *)presetCache;
-(id)initWithPresetCache:(id)arg1 renderingScheduler:(id)arg2 callbackQueue:(id)arg3 environment:(id)arg4 ;
-(void)startSectionItemPreloadingTask:(id)arg1 ;
-(void)performSectionItemPreloadingTask:(id)arg1 ;
-(void)performPresetLoadingForPresetResources:(id)arg1 task:(id)arg2 ;
-(void)startPresetPreloadingTask:(id)arg1 ;
-(void)performPresetResourcesPreloadingTask:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 renderingScheduler:(id)arg2 callbackQueue:(id)arg3 ;
-(id<AVTImageCache>)inMemoryImageCache;
-(id<AVTTaskScheduler>)renderingScheduler;
-(id)preLoadResourcesForSectionItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)preLoadResourcesForPresetResourcesProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<AVTUILogger>)logger;
-(AVTUIEnvironment *)environment;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
@end

