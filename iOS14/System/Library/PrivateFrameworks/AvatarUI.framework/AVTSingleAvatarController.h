/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<AVTAvatarDisplayingControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<AVTPresenterDelegate> presenterDelegate; 
-(void)transitionStaticViewToFront;
-(void)transitionLiveViewToFront;
-(id<AVTAvatarDisplayingControllerDelegate>)delegate;
-(void)setView:(AVTAdaptativeLayoutView *)arg1 ;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 ;
-(AVTRenderingScope *)renderingScope;
-(void)setDelegate:(id<AVTAvatarDisplayingControllerDelegate>)arg1 ;
-(AVTAdaptativeLayoutView *)view;
-(id)liveView;
-(BOOL)isViewLoaded;
-(void)reloadData;
-(void)viewDidLoad;
-(id<AVTUILogger>)logger;
-(void)setCurrentTransition:(id<AVTTransition>)arg1 ;
-(void)applyFullAlpha;
-(void)applyBaseAlpha;
-(id<AVTTransition>)currentTransition;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(AVTImageTransitioningContainerView *)transitioningContainer;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(void)loadView;
-(void)setTransitioningContainer:(AVTImageTransitioningContainerView *)arg1 ;
-(id<AVTAvatarRecord>)displayedRecord;
-(void)setDisplayedRecord:(id<AVTAvatarRecord>)arg1 ;
-(AVTViewSession *)avtViewSession;
-(void)setAvtViewSession:(AVTViewSession *)arg1 ;
-(_AVTAvatarRecordImageProvider *)thumbnailRenderer;
-(void)updateImageViewWithDisplayedRecord;
-(void)transitionToShowingDisplayedRecordWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateImageViewWithAVTViewSnapshot;
-(void)transitionToOtherDisplayedRecord;
-(void)setThumbnailRenderer:(_AVTAvatarRecordImageProvider *)arg1 ;
-(void)prepareViewWithLayout:(id)arg1 ;
-(void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2 ;
-(void)stopUsingAVTViewSessionSynchronously:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareToTransitionToVisible:(BOOL)arg1 completionHandler:(/*^block*/id*)arg2 ;
-(void)displayAvatarForRecord:(id)arg1 animated:(BOOL)arg2 ;
@end

