/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIDeviceMediaLibrary.h>

@class VUIMPMediaLibrary, NSMutableDictionary;

@interface VUIMPDeviceMediaLibrary : VUIDeviceMediaLibrary {

	BOOL _updatingRentalPlaybackStartDates;
	VUIMPMediaLibrary* _mediaLibrary;
	NSMutableDictionary* _rentalPlaybackStartDatesToSave;

}

@property (nonatomic,retain) VUIMPMediaLibrary * mediaLibrary;                                  //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * rentalPlaybackStartDatesToSave;              //@synthesize rentalPlaybackStartDatesToSave=_rentalPlaybackStartDatesToSave - In the implementation block
@property (assign,nonatomic) BOOL updatingRentalPlaybackStartDates;                             //@synthesize updatingRentalPlaybackStartDates=_updatingRentalPlaybackStartDates - In the implementation block
+(BOOL)_isUpdateInProgress;
+(BOOL)_isInitialUpdateInProgress;
-(id)initWithManager:(id)arg1 ;
-(BOOL)isUpdating;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg1 ;
-(void)setMediaLibrary:(VUIMPMediaLibrary *)arg1 ;
-(VUIMPMediaLibrary *)mediaLibrary;
-(id)title;
-(void)dealloc;
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
-(NSMutableDictionary *)rentalPlaybackStartDatesToSave;
-(void)setRentalPlaybackStartDatesToSave:(NSMutableDictionary *)arg1 ;
-(BOOL)updatingRentalPlaybackStartDates;
-(void)setUpdatingRentalPlaybackStartDates:(BOOL)arg1 ;
@end

