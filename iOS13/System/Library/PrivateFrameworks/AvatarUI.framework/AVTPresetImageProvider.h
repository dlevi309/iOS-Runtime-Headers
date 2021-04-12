/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTDeviceResourceConsumer.h>

@protocol AVTDeviceResourceConsumerDelegate, AVTImageCache, AVTUILogger, AVTTaskScheduler, OS_dispatch_queue;
@class AVTAvatarConfigurationImageRenderer, NSObject, AVTRenderingScope, NSString;

@interface AVTPresetImageProvider : NSObject <AVTDeviceResourceConsumer> {

	id<AVTDeviceResourceConsumerDelegate> _consumerDelegate;
	id<AVTImageCache> _cache;
	id<AVTUILogger> _logger;
	AVTAvatarConfigurationImageRenderer* _renderer;
	id<AVTTaskScheduler> _renderingScheduler;
	NSObject*<OS_dispatch_queue> _presetQueue;
	NSObject*<OS_dispatch_queue> _colorQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	AVTRenderingScope* _colorScope;
	AVTRenderingScope* _defaultScope;

}

@property (nonatomic,readonly) id<AVTImageCache> cache;                                                  //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                   //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) AVTAvatarConfigurationImageRenderer * renderer;                           //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) id<AVTTaskScheduler> renderingScheduler;                                  //@synthesize renderingScheduler=_renderingScheduler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> presetQueue;                                 //@synthesize presetQueue=_presetQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> colorQueue;                                  //@synthesize colorQueue=_colorQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;                               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) AVTRenderingScope * colorScope;                                           //@synthesize colorScope=_colorScope - In the implementation block
@property (nonatomic,readonly) AVTRenderingScope * defaultScope;                                         //@synthesize defaultScope=_defaultScope - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTDeviceResourceConsumerDelegate> consumerDelegate;              //@synthesize consumerDelegate=_consumerDelegate - In the implementation block
+(id)presetImageCacheWithEnvironment:(id)arg1 ;
+(id)configurationToRenderForPreset:(id)arg1 overrides:(id)arg2 baseConfiguration:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id<AVTUILogger>)logger;
-(id<AVTImageCache>)cache;
-(AVTAvatarConfigurationImageRenderer *)renderer;
-(AVTRenderingScope *)defaultScope;
-(id)initWithCache:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3 ;
-(id)initWithCache:(id)arg1 renderingScheduler:(id)arg2 renderingQueueProvider:(/*^block*/id)arg3 callbackQueue:(id)arg4 renderer:(id)arg5 defaultScope:(id)arg6 environment:(id)arg7 ;
-(AVTRenderingScope *)colorScope;
-(NSObject*<OS_dispatch_queue>)colorQueue;
-(id)renderThumbnailForModelColor:(id)arg1 ;
-(/*^block*/id)providerForImageForItem:(id)arg1 scope:(id)arg2 queue:(id)arg3 renderingHandler:(/*^block*/id)arg4 ;
-(void)renderColorForColorPreset:(id)arg1 skinColor:(id)arg2 intoLayer:(id)arg3 ;
-(void)renderColorGradientForModelColor:(id)arg1 skinColor:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id<AVTTaskScheduler>)renderingScheduler;
-(NSObject*<OS_dispatch_queue>)presetQueue;
-(id<AVTDeviceResourceConsumerDelegate>)consumerDelegate;
-(void)releaseRenderingResourceForEstimatedDuration:(double)arg1 ;
-(void)setConsumerDelegate:(id<AVTDeviceResourceConsumerDelegate>)arg1 ;
-(id)initWithRenderingScheduler:(id)arg1 environment:(id)arg2 ;
-(id)initWithCache:(id)arg1 environment:(id)arg2 ;
-(/*^block*/id)providerForThumbnailForModelColor:(id)arg1 ;
-(/*^block*/id)providerForColorIntoLayer;
-(/*^block*/id)providerForGradientFromColor;
-(/*^block*/id)providerForThumbnailForModelPreset:(id)arg1 presetOverrides:(id)arg2 poseOverride:(id)arg3 avatarConfiguration:(id)arg4 framingMode:(id)arg5 ;
@end

