/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <AVFoundation/AVPlayerItem.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>
#import <libobjc.A.dylib/HFCameraClipQueuableItem.h>

@protocol OS_dispatch_queue;
@class HMCameraClip, HMCameraClipManager, NSObject, HFCameraClipVideoAssetContextProvider, NSString;

@interface HFCameraClipPlayerItem : AVPlayerItem <AVAssetResourceLoaderDelegate, HFCameraClipQueuableItem> {

	HMCameraClip* _clip;
	HMCameraClipManager* _clipManager;
	NSObject*<OS_dispatch_queue> _resourceLoaderQueue;
	HFCameraClipVideoAssetContextProvider* _videoContextProvider;

}

@property (nonatomic,readonly) HMCameraClipManager * clipManager;                                         //@synthesize clipManager=_clipManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> resourceLoaderQueue;                          //@synthesize resourceLoaderQueue=_resourceLoaderQueue - In the implementation block
@property (nonatomic,readonly) HFCameraClipVideoAssetContextProvider * videoContextProvider;              //@synthesize videoContextProvider=_videoContextProvider - In the implementation block
@property (nonatomic,readonly) HMCameraClip * clip;                                                       //@synthesize clip=_clip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
+(id)_playlistURL;
+(id)_assetOptionsForClip:(id)arg1 ;
-(void)dealloc;
-(HMCameraClip *)clip;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(BOOL)isPlayable;
-(id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
-(HMCameraClipManager *)clipManager;
-(id)initWithClipManager:(id)arg1 clip:(id)arg2 ;
-(HFCameraClipVideoAssetContextProvider *)videoContextProvider;
-(NSObject*<OS_dispatch_queue>)resourceLoaderQueue;
@end

