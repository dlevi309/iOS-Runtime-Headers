/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIDeviceMediaLibrary.h>

@class VUIDeviceMediaLibrary, VUISidebandMediaLibrary;

@interface VUIAggregateMediaLibrary : VUIDeviceMediaLibrary {

	VUIDeviceMediaLibrary* _deviceMediaLibrary;
	VUISidebandMediaLibrary* _sidebandMediaLibrary;

}

@property (nonatomic,readonly) VUIDeviceMediaLibrary * deviceMediaLibrary;                  //@synthesize deviceMediaLibrary=_deviceMediaLibrary - In the implementation block
@property (nonatomic,readonly) VUISidebandMediaLibrary * sidebandMediaLibrary;              //@synthesize sidebandMediaLibrary=_sidebandMediaLibrary - In the implementation block
+(id)keyPathsForValuesAffectingConnectionState;
-(BOOL)isUpdating;
-(unsigned long long)connectionState;
-(VUIDeviceMediaLibrary *)deviceMediaLibrary;
-(id)title;
-(void)dealloc;
-(id)enqueueFetchRequests:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithManager:(id)arg1 deviceMediaLibrary:(id)arg2 sidebandMediaLibrary:(id)arg3 ;
-(VUISidebandMediaLibrary *)sidebandMediaLibrary;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)saveMediaEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(BOOL)isInitialUpdateInProgress;
-(void)updateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateFromCloudWithReason:(long long)arg1 ;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)_deviceMediaLibraryContentsDidChange:(id)arg1 ;
-(void)_sidebandMediaLibraryContentsDidChangeNotification:(id)arg1 ;
@end

