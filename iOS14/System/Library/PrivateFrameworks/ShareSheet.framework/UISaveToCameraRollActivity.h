/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(long long)videoCount;
-(void)setImageCount:(long long)arg1 ;
-(long long)livePhotoCount;
-(void)setLivePhotoCount:(long long)arg1 ;
-(void)setVideoCount:(long long)arg1 ;
-(_UISaveToCameraRollSaveItemsController *)saveController;
-(void)setSaveController:(_UISaveToCameraRollSaveItemsController *)arg1 ;
-(/*^block*/id)_backgroundPreheatBlock;
-(id)_systemImageName;
-(long long)imageCount;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)_activityImage;
@end

