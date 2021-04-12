/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class PXVideoPlayerView, ISWrappedAVPlayer, UIProgressView, UILabel, UISegmentedControl, UIVisualEffectView, PHAsset, NSURL, UIAlertAction, PXSettings, NSString, AVPlayerItem, NSError;

@interface PXVideoComparisonViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {

	PXVideoPlayerView* _videoView;
	ISWrappedAVPlayer* _videoPlayer;
	UIProgressView* _progressView;
	UILabel* _statusLabel;
	UISegmentedControl* _variantSegmentedControl;
	UIVisualEffectView* _statusBackgroundView;
	BOOL _useVariantVideoByDefaultInToggle;
	int _videoRequestID;
	PHAsset* _inputAsset;
	NSURL* _inputVideoURL;
	UIAlertAction* _extraAlertAction;
	PXSettings* _settings;
	NSString* _radarTitle;
	NSString* _radarClassification;
	NSString* _radarComponentID;
	NSString* _radarComponentName;
	NSString* _radarComponentVersion;
	AVPlayerItem* _inputPlayerItem;
	NSError* _inputVideoError;
	AVPlayerItem* _variantPlayerItem;
	NSError* _variantVideoError;

}

@property (nonatomic,retain) NSURL * inputVideoURL;                                //@synthesize inputVideoURL=_inputVideoURL - In the implementation block
@property (nonatomic,retain) AVPlayerItem * inputPlayerItem;                       //@synthesize inputPlayerItem=_inputPlayerItem - In the implementation block
@property (nonatomic,retain) NSError * inputVideoError;                            //@synthesize inputVideoError=_inputVideoError - In the implementation block
@property (assign,nonatomic) int videoRequestID;                                   //@synthesize videoRequestID=_videoRequestID - In the implementation block
@property (nonatomic,retain) AVPlayerItem * variantPlayerItem;                     //@synthesize variantPlayerItem=_variantPlayerItem - In the implementation block
@property (nonatomic,retain) NSError * variantVideoError;                          //@synthesize variantVideoError=_variantVideoError - In the implementation block
@property (nonatomic,readonly) PHAsset * inputAsset;                               //@synthesize inputAsset=_inputAsset - In the implementation block
@property (nonatomic,readonly) NSString * inputVideoDescription; 
@property (nonatomic,readonly) NSString * variantVideoDescription; 
@property (nonatomic,readonly) NSString * inputVideoButtonsTitle; 
@property (nonatomic,readonly) NSString * variantVideoButtonsTitle; 
@property (nonatomic,readonly) BOOL useVariantVideoByDefaultInToggle;              //@synthesize useVariantVideoByDefaultInToggle=_useVariantVideoByDefaultInToggle - In the implementation block
@property (nonatomic,readonly) UIAlertAction * extraAlertAction;                   //@synthesize extraAlertAction=_extraAlertAction - In the implementation block
@property (nonatomic,readonly) PXSettings * settings;                              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSString * radarTitle;                              //@synthesize radarTitle=_radarTitle - In the implementation block
@property (nonatomic,readonly) NSString * radarClassification;                     //@synthesize radarClassification=_radarClassification - In the implementation block
@property (nonatomic,readonly) NSString * radarComponentID;                        //@synthesize radarComponentID=_radarComponentID - In the implementation block
@property (nonatomic,readonly) NSString * radarComponentName;                      //@synthesize radarComponentName=_radarComponentName - In the implementation block
@property (nonatomic,readonly) NSString * radarComponentVersion;                   //@synthesize radarComponentVersion=_radarComponentVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(PHAsset *)inputAsset;
-(long long)modalPresentationStyle;
-(void)_handleActionButton:(id)arg1 ;
-(void)viewDidLoad;
-(PXSettings *)settings;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(NSString *)radarTitle;
-(void)_fileRadar;
-(void)_handleVariantSegmentedControl:(id)arg1 ;
-(void)_handleSettingsButton:(id)arg1 ;
-(void)_handleSettingsDone:(id)arg1 ;
-(void)_handleResultButton:(id)arg1 ;
-(void)_handleRefreshButton:(id)arg1 ;
-(void)_showAlertWithMessage:(id)arg1 ;
-(void)_exportInputVideo;
-(void)_exportVariantVideo;
-(void)_hideProgressAndStatus;
-(NSURL *)inputVideoURL;
-(void)_exportVariantVideoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_showProgressAndStatus;
-(void)_updateProgress:(float)arg1 status:(id)arg2 ;
-(void)_reloadInputAndVariantVideos;
-(void)_prepareInputAndVariantVideos;
-(void)_prepareVariantVideo;
-(void)_updateDisplayedPlayerItem;
-(NSString *)inputVideoDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)_updatePlayerItem:(id)arg1 error:(id)arg2 ;
-(void)setInputVideoURL:(NSURL *)arg1 ;
-(NSString *)radarClassification;
-(AVPlayerItem *)inputPlayerItem;
-(void)setInputPlayerItem:(AVPlayerItem *)arg1 ;
-(NSError *)inputVideoError;
-(void)setInputVideoError:(NSError *)arg1 ;
-(int)videoRequestID;
-(void)setVideoRequestID:(int)arg1 ;
-(AVPlayerItem *)variantPlayerItem;
-(void)setVariantPlayerItem:(AVPlayerItem *)arg1 ;
-(NSError *)variantVideoError;
-(void)setVariantVideoError:(NSError *)arg1 ;
-(NSString *)radarComponentID;
-(NSString *)radarComponentName;
-(NSString *)radarComponentVersion;
-(id)initWithInputAsset:(id)arg1 ;
-(BOOL)useVariantVideoByDefaultInToggle;
-(NSString *)inputVideoButtonsTitle;
-(NSString *)variantVideoButtonsTitle;
-(NSString *)variantVideoDescription;
-(UIAlertAction *)extraAlertAction;
-(void)invalidateInputAndVariantReferences;
-(void)prepareVariantVideoWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareVariantVideoForExportWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

