/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVBehaviorContextInternal.h>
#import <AVKit/AVPlayerViewControllerBehaviorContext.h>
#import <AVKit/AVEditViewDataSource.h>
#import <AVKit/AVEditViewDelegate.h>
#import <AVKit/AVBehaviorContext.h>

@class AVPlayerViewController, AVEditBehavior, AVEditBehaviorParameters, AVZoomingBehavior, AVObservationController, AVEditView, AVAssetImageGenerator, AVPlayerController, UIView, UIToolbar, UIBarButtonItem, NSMutableArray, NSMutableDictionary, NSString;

@interface AVEditBehaviorContext : NSObject <AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVEditViewDataSource, AVEditViewDelegate, AVBehaviorContext> {

	BOOL _editing;
	AVPlayerViewController* _playerViewController;
	AVEditBehavior* _behavior;
	AVEditBehaviorParameters* _parameters;
	AVZoomingBehavior* _zoomingBehavior;
	AVObservationController* _observationController;
	AVEditView* _editView;
	AVAssetImageGenerator* _imageGenerator;
	AVPlayerController* _playerController;
	id _playerTimeObserver;
	UIView* _containerView;
	UIToolbar* _toolbar;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _flexibleSpaceItem;
	UIBarButtonItem* _playButton;
	UIBarButtonItem* _pauseButton;
	NSMutableArray* _pendingImageRequests;
	NSMutableDictionary* _requestedImageTimeToCMTimeMap;
	unsigned long long _currentRotation;
	CGAffineTransform _rotationTransform;

}

@property (assign,nonatomic,__weak) AVEditBehavior * behavior;                                    //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,retain) AVZoomingBehavior * zoomingBehavior;                                 //@synthesize zoomingBehavior=_zoomingBehavior - In the implementation block
@property (nonatomic,retain) AVObservationController * observationController;                     //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) AVEditView * editView;                                               //@synthesize editView=_editView - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                       //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) AVAssetImageGenerator * imageGenerator;                              //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                               //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,retain) id playerTimeObserver;                                               //@synthesize playerTimeObserver=_playerTimeObserver - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                                                 //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                        //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * flexibleSpaceItem;                                 //@synthesize flexibleSpaceItem=_flexibleSpaceItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * playButton;                                        //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * pauseButton;                                       //@synthesize pauseButton=_pauseButton - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingImageRequests;                             //@synthesize pendingImageRequests=_pendingImageRequests - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * requestedImageTimeToCMTimeMap;               //@synthesize requestedImageTimeToCMTimeMap=_requestedImageTimeToCMTimeMap - In the implementation block
@property (assign,nonatomic) unsigned long long currentRotation;                                  //@synthesize currentRotation=_currentRotation - In the implementation block
@property (assign,nonatomic) CGAffineTransform rotationTransform;                                 //@synthesize rotationTransform=_rotationTransform - In the implementation block
@property (nonatomic,copy,readonly) AVEditBehaviorParameters * parameters;                        //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) AVPlayerViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
-(void)dealloc;
-(void)endEditing;
-(AVEditBehaviorParameters *)parameters;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(BOOL)isEditing;
-(UIToolbar *)toolbar;
-(void)setEditing:(BOOL)arg1 ;
-(AVEditBehavior *)behavior;
-(void)setBehavior:(AVEditBehavior *)arg1 ;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)done:(id)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)play:(id)arg1 ;
-(void)pause:(id)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)rotateClockwise;
-(void)cancel:(id)arg1 ;
-(AVAssetImageGenerator *)imageGenerator;
-(void)setImageGenerator:(AVAssetImageGenerator *)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(AVObservationController *)observationController;
-(void)contentViewWillTransitionToSize:(CGSize)arg1 withCoordinator:(id)arg2 ;
-(id)initWithAVKitOwner:(id)arg1 ;
-(void)willAddBehavior:(id)arg1 ;
-(void)didAddBehavior:(id)arg1 ;
-(void)willRemoveBehavior:(id)arg1 ;
-(void)didRemoveBehavior:(id)arg1 ;
-(void)editViewDidBeginScrubbing:(id)arg1 ;
-(void)editViewDidEndScrubbing:(id)arg1 ;
-(void)editView:(id)arg1 currentTimeDidChange:(double)arg2 ;
-(void)editView:(id)arg1 trimStartTimeDidChange:(double)arg2 ;
-(void)editView:(id)arg1 trimEndTimeDidChange:(double)arg2 ;
-(void)editViewWillBeginRequestingThumbnails:(id)arg1 ;
-(void)editViewDidFinishRequestingThumbnails:(id)arg1 ;
-(double)editViewDuration:(id)arg1 ;
-(double)editViewThumbnailAspectRatio:(id)arg1 ;
-(void)editView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 ;
-(void)startEditing;
-(id)videoCompostitionRotatingAsset:(id)arg1 ;
-(void)_generateThumbnails;
-(id)_makeBarButtonItems;
-(CGAffineTransform)rotationTransform;
-(void)setRotationTransform:(CGAffineTransform)arg1 ;
-(AVZoomingBehavior *)zoomingBehavior;
-(void)setZoomingBehavior:(AVZoomingBehavior *)arg1 ;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(AVEditView *)editView;
-(void)setEditView:(AVEditView *)arg1 ;
-(id)playerTimeObserver;
-(void)setPlayerTimeObserver:(id)arg1 ;
-(UIBarButtonItem *)flexibleSpaceItem;
-(void)setFlexibleSpaceItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)playButton;
-(void)setPlayButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)pauseButton;
-(void)setPauseButton:(UIBarButtonItem *)arg1 ;
-(NSMutableArray *)pendingImageRequests;
-(NSMutableDictionary *)requestedImageTimeToCMTimeMap;
-(unsigned long long)currentRotation;
-(void)setCurrentRotation:(unsigned long long)arg1 ;
@end

