/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivity.h>

@class _UISaveToCameraRollSaveItemsController;

@interface UISaveToCameraRollActivity : UIActivity {

	long long _imageCount;
	long long _livePhotoCount;
	long long _videoCount;
	_UISaveToCameraRollSaveItemsController* _saveController;

}

@property (assign,nonatomic) long long imageCount;                                                 //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) long long livePhotoCount;                                             //@synthesize livePhotoCount=_livePhotoCount - In the implementation block
@property (assign,nonatomic) long long videoCount;                                                 //@synthesize videoCount=_videoCount - In the implementation block
@property (nonatomic,retain) _UISaveToCameraRollSaveItemsController * saveController;              //@synthesize saveController=_saveController - In the implementation block
+(unsigned long long)_xpcAttributes;
-(id)activityType;
-(long long)imageCount;
-(id)_systemImageName;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)_activityImage;
-(void)prepareWithActivityItems:(id)arg1 ;
-(/*^block*/id)_backgroundPreheatBlock;
-(void)performActivity;
-(void)setImageCount:(long long)arg1 ;
-(long long)livePhotoCount;
-(void)setLivePhotoCount:(long long)arg1 ;
-(long long)videoCount;
-(void)setVideoCount:(long long)arg1 ;
-(_UISaveToCameraRollSaveItemsController *)saveController;
-(void)setSaveController:(_UISaveToCameraRollSaveItemsController *)arg1 ;
@end

