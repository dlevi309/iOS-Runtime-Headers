/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol OS_dispatch_queue, WBSSiteMetadataImageCacheDelegate;
#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableSet, WBSCacheRetainReleasePolicy, WBSCoalescedAsynchronousWriter, NSURL;

@interface WBSSiteMetadataImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	os_unfair_lock_s _cacheAccessLock;
	atomic<bool> _terminating;
	NSMutableDictionary* _imagesForKeyStrings;
	NSMutableSet* _missingImageKeyStrings;
	NSMutableDictionary* _keyStringRequestsToCompletionHandlers;
	WBSCacheRetainReleasePolicy* _cachePolicy;
	NSMutableDictionary* _cacheSettings;
	WBSCoalescedAsynchronousWriter* _cacheSettingsWriter;
	unsigned long long _fileProtectionOptions;
	NSURL* _imageDirectoryURL;
	long long _imageType;
	id<WBSSiteMetadataImageCacheDelegate> _delegate;

}

@property (nonatomic,readonly) NSURL * imageDirectoryURL;                          //@synthesize imageDirectoryURL=_imageDirectoryURL - In the implementation block
@property (nonatomic,readonly) long long imageType;                                //@synthesize imageType=_imageType - In the implementation block
@property (getter=isTerminating,nonatomic,readonly) BOOL terminating; 
@property (__weak) id<WBSSiteMetadataImageCacheDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(id)imageForKeyString:(id)arg1 getImageState:(long long*)arg2 ;
-(void)_internalRemoveImagesFromCacheForKeyStrings:(id)arg1 ;
-(BOOL)isTerminating;
-(void)retainImageWithKeyStringProvider:(/*^block*/id)arg1 ;
-(void)saveImageToDisk:(id)arg1 forKeyString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id<WBSSiteMetadataImageCacheDelegate>)delegate;
-(id)settingForKey:(id)arg1 ;
-(void)setImageState:(long long)arg1 forKeyString:(id)arg2 ;
-(id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2 ;
-(void)removeImagesFromCacheForKeyStrings:(id)arg1 ;
-(void)_internalPurgeUnneededImages;
-(void)_internalRemoveAllImages;
-(id)_fileLocationForKeyString:(id)arg1 ;
-(id)_diskAccessQueueName;
-(id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2 fileProtectionOptions:(unsigned long long)arg3 ;
-(void)_requestImageForKeyString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_internalReleaseImageForKeyString:(id)arg1 ;
-(void)emptyCache;
-(id)_fileNameForKeyString:(id)arg1 ;
-(void)setDelegate:(id<WBSSiteMetadataImageCacheDelegate>)arg1 ;
-(void)_internalSetImageState:(long long)arg1 forKeyString:(id)arg2 ;
-(void)_didLoadImage:(id)arg1 forKeyString:(id)arg2 fromDisk:(BOOL)arg3 ;
-(void)purgeUnneededImages;
-(void)_emptyCacheDirectory;
-(long long)_internalImageStateForKeyString:(id)arg1 ;
-(void)_dispatchDiskAccessBlock:(/*^block*/id)arg1 ;
-(BOOL)_internalDidLoadImageAndShouldNotify:(id)arg1 forKeyString:(id)arg2 fromDisk:(BOOL)arg3 ;
-(void)getImageForKeyString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyDidFinishLoadingSettings;
-(void)setSetting:(id)arg1 forKey:(id)arg2 ;
-(void)setImage:(id)arg1 forKeyString:(id)arg2 ;
-(void)releaseImagesForKeyStrings:(id)arg1 ;
-(NSURL *)imageDirectoryURL;
-(id)_internalQueueName;
-(void)retainImagesForKeyStrings:(id)arg1 ;
-(void)_internalSetUpImageCache;
-(void)removeAllImages;
-(void)_removeImagesPassingTest:(/*^block*/id)arg1 ;
-(void)releaseImageForKeyString:(id)arg1 ;
-(long long)imageType;
-(id)_cacheSettingsFileURL;
-(void)releaseImageWithKeyStringProvider:(/*^block*/id)arg1 ;
-(void)setUpImageCache;
-(void)_internalSaveImageToDisk:(id)arg1 forKeyString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)retainImageForKeyString:(id)arg1 ;
-(BOOL)isImageRetainedForKeyString:(id)arg1 ;
-(long long)imageStateForKeyString:(id)arg1 ;
-(void)savePendingChangesBeforeTermination;
@end

