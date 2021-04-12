/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIDeviceMediaLibrary.h>

@class VUIMPMediaLibrary;

@interface VUIMPDeviceMediaLibrary : VUIDeviceMediaLibrary {

	VUIMPMediaLibrary* _mediaLibrary;

}

@property (nonatomic,retain) VUIMPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
+(BOOL)_isUpdateInProgress;
+(BOOL)_isInitialUpdateInProgress;
-(void)dealloc;
-(id)initWithManager:(id)arg1 ;
-(id)title;
-(BOOL)isUpdating;
-(VUIMPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIMPMediaLibrary *)arg1 ;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_handleApplicationWillResignActiveNotification:(id)arg1 ;
-(id)enqueueFetchRequests:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)saveMediaEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1 ;
-(void)_handleMediaLibraryIsUpdateInProgressDidChangeNotification:(id)arg1 ;
-(BOOL)isInitialUpdateInProgress;
-(void)updateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateFromCloudWithReason:(long long)arg1 ;
@end

