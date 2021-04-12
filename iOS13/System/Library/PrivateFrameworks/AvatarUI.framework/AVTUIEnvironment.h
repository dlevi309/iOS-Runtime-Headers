/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTImageCache, AVTUsageTrackingSession, OS_dispatch_queue;
#import <AvatarUI/AvatarUI-Structs.h>
@class AVTCoreModel, AVTAvatarConfigurationImageRenderer, AVTCoreEnvironment, NSObject, AVTDeviceResourceManager, NSURL, NSNotificationCenter, NSUserDefaults;

@interface AVTUIEnvironment : NSObject {

	AVTCoreModel* _editorCoreModel;
	AVTAvatarConfigurationImageRenderer* _renderer;
	id<AVTImageCache> _inMemoryImageCache;
	id<AVTUsageTrackingSession> _usageTrackingSession;
	BOOL _deviceIsSunflower;
	AVTCoreEnvironment* _coreEnvironment;
	double _mainScreenScale;
	long long _userInterfaceLayoutDirection;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSObject*<OS_dispatch_queue> _backgroundRenderingQueue;
	NSObject*<OS_dispatch_queue> _backgroundEncodingQueue;
	AVTDeviceResourceManager* _deviceResourceManager;
	double _actionAnimationsMultiplier;
	CGSize _mainScreenSize;

}

@property (nonatomic,readonly) AVTCoreEnvironment * coreEnvironment;                                    //@synthesize coreEnvironment=_coreEnvironment - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger; 
@property (nonatomic,readonly) double mainScreenScale;                                                  //@synthesize mainScreenScale=_mainScreenScale - In the implementation block
@property (nonatomic,readonly) CGSize mainScreenSize;                                                   //@synthesize mainScreenSize=_mainScreenSize - In the implementation block
@property (nonatomic,readonly) long long userInterfaceLayoutDirection;                                  //@synthesize userInterfaceLayoutDirection=_userInterfaceLayoutDirection - In the implementation block
@property (nonatomic,readonly) BOOL deviceIsSunflower;                                                  //@synthesize deviceIsSunflower=_deviceIsSunflower - In the implementation block
@property (nonatomic,copy,readonly) id serialQueueProvider; 
@property (nonatomic,copy,readonly) id lockProvider; 
@property (nonatomic,copy,readonly) NSObject*<OS_dispatch_queue> backgroundQueue;                       //@synthesize backgroundQueue=_backgroundQueue - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<OS_dispatch_queue> backgroundRenderingQueue;              //@synthesize backgroundRenderingQueue=_backgroundRenderingQueue - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<OS_dispatch_queue> backgroundEncodingQueue;               //@synthesize backgroundEncodingQueue=_backgroundEncodingQueue - In the implementation block
@property (nonatomic,readonly) AVTCoreModel * editorCoreModel; 
@property (nonatomic,copy,readonly) NSURL * storeLocation; 
@property (nonatomic,copy,readonly) NSURL * imageStoreLocation; 
@property (nonatomic,copy,readonly) NSURL * stickerImageStoreLocation; 
@property (nonatomic,copy,readonly) NSURL * imageCacheStoreLocation; 
@property (nonatomic,readonly) AVTAvatarConfigurationImageRenderer * renderer; 
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter; 
@property (nonatomic,readonly) AVTDeviceResourceManager * deviceResourceManager;                        //@synthesize deviceResourceManager=_deviceResourceManager - In the implementation block
@property (nonatomic,readonly) id<AVTImageCache> inMemoryImageCache; 
@property (nonatomic,readonly) id<AVTUsageTrackingSession> usageTrackingSession; 
@property (nonatomic,readonly) NSUserDefaults * userDefaults; 
@property (assign,nonatomic) double actionAnimationsMultiplier;                                         //@synthesize actionAnimationsMultiplier=_actionAnimationsMultiplier - In the implementation block
+(id)defaultEnvironment;
+(id)createFunCamEnvironment;
+(id)createQueueWithQoSClass:(unsigned)arg1 label:(const char*)arg2 ;
+(id)createEditorCoreModelWithLogger:(id)arg1 ;
+(id)createUsageTrackingSessionWithCoreModel:(id)arg1 serialQueueProvider:(/*^block*/id)arg2 logger:(id)arg3 ;
-(id<AVTUILogger>)logger;
-(NSUserDefaults *)userDefaults;
-(NSNotificationCenter *)notificationCenter;
-(long long)userInterfaceLayoutDirection;
-(NSURL *)storeLocation;
-(AVTAvatarConfigurationImageRenderer *)renderer;
-(NSObject*<OS_dispatch_queue>)backgroundQueue;
-(double)mainScreenScale;
-(CGSize)mainScreenSize;
-(NSURL *)imageCacheStoreLocation;
-(id<AVTImageCache>)inMemoryImageCache;
-(AVTCoreEnvironment *)coreEnvironment;
-(id)serialQueueProvider;
-(AVTCoreModel *)editorCoreModel;
-(BOOL)deviceIsSunflower;
-(NSURL *)stickerImageStoreLocation;
-(id)lockProvider;
-(NSObject*<OS_dispatch_queue>)backgroundRenderingQueue;
-(NSObject*<OS_dispatch_queue>)backgroundEncodingQueue;
-(id<AVTUsageTrackingSession>)usageTrackingSession;
-(double)actionAnimationsMultiplier;
-(NSURL *)imageStoreLocation;
-(id)initWithCoreEnvironment:(id)arg1 ;
-(AVTDeviceResourceManager *)deviceResourceManager;
-(void)setActionAnimationsMultiplier:(double)arg1 ;
@end

