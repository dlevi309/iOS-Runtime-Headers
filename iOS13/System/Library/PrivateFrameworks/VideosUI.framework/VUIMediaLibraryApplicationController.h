/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIMediaLibraryApplicationControllerDelegate;
@interface VUIMediaLibraryApplicationController : NSObject {

	id<VUIMediaLibraryApplicationControllerDelegate> _delegate;

}

@property (nonatomic,retain) id<VUIMediaLibraryApplicationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultController;
-(id<VUIMediaLibraryApplicationControllerDelegate>)delegate;
-(void)setDelegate:(id<VUIMediaLibraryApplicationControllerDelegate>)arg1 ;
-(id)settingsURL;
-(BOOL)isCellularDataForPlaybackEnabled;
-(BOOL)shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)arg1 ;
-(void)clearCellularPlaybackQualityOverrides;
-(void)overrideCellularPlaybackQuality:(unsigned long long)arg1 forMediaItem:(id)arg2 ;
-(unsigned long long)assetTypeForRentalMediaItem:(id)arg1 ;
-(void)removeRentalMediaItem:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

