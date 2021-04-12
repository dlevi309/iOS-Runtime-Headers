/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarTransitionModel.h>
#import <libobjc.A.dylib/AVTAvatarDisplayingController.h>

@protocol AVTAvatarDisplayingControllerDelegate, AVTPresenterDelegate, AVTAvatarRecord, AVTUILogger, AVTTransition;
@class AVTAdaptativeLayoutView, AVTImageTransitioningContainerView, AVTViewSession, _AVTAvatarRecordImageProvider, AVTRenderingScope, NSString;

@interface AVTSingleAvatarController : NSObject <AVTAvatarTransitionModel, AVTAvatarDisplayingController> {

	id<AVTAvatarDisplayingControllerDelegate> delegate;
	id<AVTPresenterDelegate> presenterDelegate;
	AVTAdaptativeLayoutView* _view;
	AVTImageTransitioningContainerView* _transitioningContainer;
	id<AVTAvatarRecord> _displayedRecord;
	AVTViewSession* _avtViewSession;
	_AVTAvatarRecordImageProvider* _thumbnailRenderer;
	AVTRenderingScope* _renderingScope;
	id<AVTUILogger> _logger;
	id<AVTTransition> _currentTransition;

}

@property (nonatomic,retain) AVTAdaptativeLayoutView * view;                                           //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) AVTImageTransitioningContainerView * transitioningContainer;              //@synthesize transitioningContainer=_transitioningContainer - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> displayedRecord;                                      //@synthesize displayedRecord=_displayedRecord - In the implementation block
@property (nonatomic,retain) AVTViewSession * avtViewSession;                                          //@synthesize avtViewSession=_avtViewSession - In the implementation block
@property (nonatomic,retain) _AVTAvatarRecordImageProvider * thumbnailRenderer;                        //@synthesize thumbnailRenderer=_thumbnailRenderer - In the implementation block
@property (nonatomic,readonly) AVTRenderingScope * renderingScope;                                     //@synthesize renderingScope=_renderingScope - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                 //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) id<AVTTransition> currentTransition;                                      //@synthesize currentTransition=_currentTransition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTPresenterDelegate> presenterDelegate; 
@property (assign,nonatomic,__weak) id<AVTAvatarDisplayingControllerDelegate> delegate; 
-(id<AVTAvatarDisplayingControllerDelegate>)delegate;
-(void)setDelegate:(id<AVTAvatarDisplayingControllerDelegate>)arg1 ;
-(id<AVTUILogger>)logger;
-(AVTAdaptativeLayoutView *)view;
-(void)setView:(AVTAdaptativeLayoutView *)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)reloadData;
-(BOOL)isViewLoaded;
-(id<AVTTransition>)currentTransition;
-(void)setCurrentTransition:(id<AVTTransition>)arg1 ;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(AVTRenderingScope *)renderingScope;
-(id<AVTAvatarRecord>)displayedRecord;
-(void)setDisplayedRecord:(id<AVTAvatarRecord>)arg1 ;
-(AVTViewSession *)avtViewSession;
-(void)setAvtViewSession:(AVTViewSession *)arg1 ;
-(_AVTAvatarRecordImageProvider *)thumbnailRenderer;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 ;
-(void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2 ;
-(void)stopUsingAVTViewSessionSynchronously:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareToTransitionToVisible:(BOOL)arg1 completionHandler:(/*^block*/id*)arg2 ;
-(void)displayAvatarForRecord:(id)arg1 animated:(BOOL)arg2 ;
-(void)transitionStaticViewToFront;
-(id)liveView;
-(void)transitionLiveViewToFront;
-(void)applyFullAlpha;
-(void)applyBaseAlpha;
-(AVTImageTransitioningContainerView *)transitioningContainer;
-(void)setTransitioningContainer:(AVTImageTransitioningContainerView *)arg1 ;
-(void)updateImageViewWithDisplayedRecord;
-(void)transitionToShowingDisplayedRecordWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateImageViewWithAVTViewSnapshot;
-(void)transitionToOtherDisplayedRecord;
-(void)setThumbnailRenderer:(_AVTAvatarRecordImageProvider *)arg1 ;
@end

