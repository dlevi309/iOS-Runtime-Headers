/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol OS_dispatch_queue, WBSSiteMetadataImageCacheDelegate;
@class NSObject, NSMutableDictionary, NSMutableSet, WBSCacheRetainReleasePolicy, WBSCoalescedAsynchronousWriter, NSURL;

@interface WBSSiteMetadataImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _imagesForKeyStrings;
	NSMutableSet* _pendingKeyStringRequests;
	NSMutableSet* _missingImageKeyStrings;
	WBSCacheRetainReleasePolicy* _cachePolicy;
	NSMutableDictionary* _cacheSettings;
	WBSCoalescedAsynchronousWriter* _cacheSettingsWriter;
	unsigned long long _fileProtectionOptions;
	BOOL _terminating;
	NSURL* _imageDirectoryURL;
	long long _imageType;
	id<WBSSiteMetadataImageCacheDelegate> _delegate;

}

@property (nonatomic,readonly) NSURL * imageDirectoryURL;                                        //@synthesize imageDirectoryURL=_imageDirectoryURL - In the implementation block
@property (nonatomic,readonly) long long imageType;                                              //@synthesize imageType=_imageType - In the implementation block
@property (getter=isTerminating,nonatomic,readonly) BOOL terminating;                            //@synthesize terminating=_terminating - In the implementation block
@property (assign,nonatomic,__weak) id<WBSSiteMetadataImageCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WBSSiteMetadataImageCacheDelegate>)delegate;
-(void)setDelegate:(id<WBSSiteMetadataImageCacheDelegate>)arg1 ;
-(long long)imageType;
-(void)emptyCache;
-(void)removeAllImages;
-(void)savePendingChangesBeforeTermination;
-(id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2 ;
-(void)setUpImageCache;
-(void)imageForKeyString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveImageToDisk:(id)arg1 forKeyString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeImagesFromCacheForKeyStrings:(id)arg1 ;
-(void)purgeUnneededImages;
-(BOOL)isTerminating;
-(id)settingForKey:(id)arg1 ;
-(void)setSetting:(id)arg1 forKey:(id)arg2 ;
-(NSURL *)imageDirectoryURL;
-(id)imageForKeyString:(id)arg1 getImageState:(long long*)arg2 ;
-(void)setImageState:(long long)arg1 forKeyString:(id)arg2 ;
-(id)_internalQueueName;
-(void)_internalQueueDispatchSync:(/*^block*/id)arg1 ;
-(id)_diskAccessQueueName;
-(id)_cacheSettingsFileURL;
-(void)_dispatchDiskAccessBlock:(/*^block*/id)arg1 ;
-(id)_fileLocationForKeyString:(id)arg1 ;
-(id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2 fileProtectionOptions:(unsigned long long)arg3 ;
-(void)_internalReleaseImageForKeyString:(id)arg1 ;
-(void)_notifyDidFinishLoadingSettings;
-(void)_internalQueueDispatchBarrierAsync:(/*^block*/id)arg1 ;
-(void)_internalSetUpImageCache;
-(void)_internalPurgeUnneededImages;
-(id)_fileNameForKeyString:(id)arg1 ;
-(void)_removeImagesPassingTest:(/*^block*/id)arg1 ;
-(void)_emptyCacheDirectory;
-(void)_didLoadImage:(id)arg1 forKeyString:(id)arg2 fromDisk:(BOOL)arg3 ;
-(id)_loadImageFromDiskForKeyString:(id)arg1 ;
-(long long)_internalImageStateForKeyString:(id)arg1 ;
-(void)_internalSetImageState:(long long)arg1 forKeyString:(id)arg2 ;
-(id)_internalImageForKeyString:(id)arg1 ;
-(void)_requestImageForKeyString:(id)arg1 ;
-(void)_internalSaveImageToDisk:(id)arg1 forKeyString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_internalRemoveAllImages;
-(void)_internalRemoveImagesFromCacheForKeyStrings:(id)arg1 ;
-(id)_internalSettingForKey:(id)arg1 ;
-(void)_internalSetSetting:(id)arg1 forKey:(id)arg2 ;
-(void)_saveCacheSettingsSoon;
-(void)setImage:(id)arg1 forKeyString:(id)arg2 ;
-(long long)imageStateForKeyString:(id)arg1 ;
-(void)retainImageWithKeyStringProvider:(/*^block*/id)arg1 ;
-(void)retainImageForKeyString:(id)arg1 ;
-(void)retainImagesForKeyStrings:(id)arg1 ;
-(void)releaseImageWithKeyStringProvider:(/*^block*/id)arg1 ;
-(void)releaseImageForKeyString:(id)arg1 ;
-(void)releaseImagesForKeyStrings:(id)arg1 ;
-(BOOL)isImageRetainedForKeyString:(id)arg1 ;
@end

