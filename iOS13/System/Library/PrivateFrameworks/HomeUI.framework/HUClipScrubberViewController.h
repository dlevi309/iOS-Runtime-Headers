/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/HUFeedbackConsentViewControllerDelegate.h>
#import <libobjc.A.dylib/HUCameraPlayerScrubbing.h>
#import <libobjc.A.dylib/HFCameraClipFeedbackObserving.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>

@class HFCameraPlaybackEngine, HUClipScrubberView, UIButton, UIView, HUClipScrubberDataSource, HUClipScrubberScrollDelegate, NSLayoutConstraint, CADisplayLink, HMCameraClipFetchVideoAssetContextOperation, NSString;

@interface HUClipScrubberViewController : UIViewController <NSURLSessionDelegate, HUFeedbackConsentViewControllerDelegate, HUCameraPlayerScrubbing, HFCameraClipFeedbackObserving, HFCameraPlaybackEngineObserver> {

	BOOL _isVisible;
	/*^block*/id _accessoryButtonHandler;
	/*^block*/id _beginEditingHandler;
	/*^block*/id _endEditingHandler;
	/*^block*/id _deletionHandler;
	HFCameraPlaybackEngine* _playbackEngine;
	HUClipScrubberView* _scrubberView;
	UIButton* _selectionButton;
	UIButton* _nearbyAccessoriesButton;
	UIButton* _feedbackButton;
	UIView* _selectionPlatter;
	UIView* _feedbackPlatter;
	UIView* _nearbyAccessoriesPlatter;
	HUClipScrubberDataSource* _dataSource;
	HUClipScrubberScrollDelegate* _clipScrollDelegate;
	NSLayoutConstraint* _scrubberViewRightAnchorConstraint;
	NSLayoutConstraint* _scrubberViewLeftAnchorConstraint;
	NSLayoutConstraint* _feedbackPlatterTopAnchorConstraint;
	NSLayoutConstraint* _nearbyAccessoriesPlatterTopAnchorConstraint;
	NSLayoutConstraint* _selectionPlatterTopAnchorConstraint;
	CADisplayLink* _scrubberUpdateDisplayLink;
	unsigned long long _lastEngineMode;
	HMCameraClipFetchVideoAssetContextOperation* _exportDownloadOperation;

}

@property (assign,nonatomic,__weak) HFCameraPlaybackEngine * playbackEngine;                                            //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) HUClipScrubberView * scrubberView;                                                         //@synthesize scrubberView=_scrubberView - In the implementation block
@property (nonatomic,retain) UIButton * selectionButton;                                                                //@synthesize selectionButton=_selectionButton - In the implementation block
@property (nonatomic,retain) UIButton * nearbyAccessoriesButton;                                                        //@synthesize nearbyAccessoriesButton=_nearbyAccessoriesButton - In the implementation block
@property (nonatomic,retain) UIButton * feedbackButton;                                                                 //@synthesize feedbackButton=_feedbackButton - In the implementation block
@property (nonatomic,retain) UIView * selectionPlatter;                                                                 //@synthesize selectionPlatter=_selectionPlatter - In the implementation block
@property (nonatomic,retain) UIView * feedbackPlatter;                                                                  //@synthesize feedbackPlatter=_feedbackPlatter - In the implementation block
@property (nonatomic,retain) UIView * nearbyAccessoriesPlatter;                                                         //@synthesize nearbyAccessoriesPlatter=_nearbyAccessoriesPlatter - In the implementation block
@property (nonatomic,retain) HUClipScrubberDataSource * dataSource;                                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) HUClipScrubberScrollDelegate * clipScrollDelegate;                                         //@synthesize clipScrollDelegate=_clipScrollDelegate - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * scrubberViewRightAnchorConstraint;                                    //@synthesize scrubberViewRightAnchorConstraint=_scrubberViewRightAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * scrubberViewLeftAnchorConstraint;                                     //@synthesize scrubberViewLeftAnchorConstraint=_scrubberViewLeftAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * feedbackPlatterTopAnchorConstraint;                                   //@synthesize feedbackPlatterTopAnchorConstraint=_feedbackPlatterTopAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nearbyAccessoriesPlatterTopAnchorConstraint;                          //@synthesize nearbyAccessoriesPlatterTopAnchorConstraint=_nearbyAccessoriesPlatterTopAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * selectionPlatterTopAnchorConstraint;                                  //@synthesize selectionPlatterTopAnchorConstraint=_selectionPlatterTopAnchorConstraint - In the implementation block
@property (nonatomic,retain) CADisplayLink * scrubberUpdateDisplayLink;                                                 //@synthesize scrubberUpdateDisplayLink=_scrubberUpdateDisplayLink - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                                                                            //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) unsigned long long lastEngineMode;                                                         //@synthesize lastEngineMode=_lastEngineMode - In the implementation block
@property (assign,nonatomic,__weak) HMCameraClipFetchVideoAssetContextOperation * exportDownloadOperation;              //@synthesize exportDownloadOperation=_exportDownloadOperation - In the implementation block
@property (nonatomic,copy) id accessoryButtonHandler;                                                                   //@synthesize accessoryButtonHandler=_accessoryButtonHandler - In the implementation block
@property (nonatomic,copy) id beginEditingHandler;                                                                      //@synthesize beginEditingHandler=_beginEditingHandler - In the implementation block
@property (nonatomic,copy) id endEditingHandler;                                                                        //@synthesize endEditingHandler=_endEditingHandler - In the implementation block
@property (nonatomic,copy) id deletionHandler;                                                                          //@synthesize deletionHandler=_deletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double currentScrubberResolution; 
-(void)dealloc;
-(HUClipScrubberDataSource *)dataSource;
-(void)setDataSource:(HUClipScrubberDataSource *)arg1 ;
-(BOOL)isVisible;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(unsigned long long)displayMode;
-(void)didTap:(id)arg1 ;
-(void)_addConstraints;
-(void)togglePlayPause;
-(HFCameraPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(void)manager:(id)arg1 didSubmitCameraClip:(id)arg2 ;
-(void)manager:(id)arg1 didSubmitCameraClips:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateClipManager:(id)arg2 ;
-(UIButton *)selectionButton;
-(void)setSelectionButton:(UIButton *)arg1 ;
-(void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)didPinch:(id)arg1 ;
-(void)_updateScrubberDisplayLinkState;
-(double)currentScrubberResolution;
-(id)platterWithView:(id)arg1 ;
-(void)submitCurrentClip;
-(void)setAccessoryButtonHandler:(id)arg1 ;
-(void)dismissEditInterface;
-(void)setBeginEditingHandler:(id)arg1 ;
-(void)setEndEditingHandler:(id)arg1 ;
-(void)setDeletionHandler:(id)arg1 ;
-(void)exportCurrentClipWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)userIsScrubbing;
-(void)reloadClipManager:(id)arg1 ;
-(void)setClipScrollDelegate:(HUClipScrubberScrollDelegate *)arg1 ;
-(HUClipScrubberScrollDelegate *)clipScrollDelegate;
-(HUClipScrubberView *)scrubberView;
-(UIView *)selectionPlatter;
-(UIView *)nearbyAccessoriesPlatter;
-(UIView *)feedbackPlatter;
-(void)updateDisplayForLiveMode;
-(void)_scrubberDisplayLinkTick:(id)arg1 ;
-(void)setScrubberUpdateDisplayLink:(CADisplayLink *)arg1 ;
-(void)updateScrubberViewAndAssociatedConstraints;
-(NSLayoutConstraint *)scrubberViewLeftAnchorConstraint;
-(NSLayoutConstraint *)scrubberViewRightAnchorConstraint;
-(NSLayoutConstraint *)nearbyAccessoriesPlatterTopAnchorConstraint;
-(NSLayoutConstraint *)selectionPlatterTopAnchorConstraint;
-(CADisplayLink *)scrubberUpdateDisplayLink;
-(void)setScrubberViewRightAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setScrubberViewLeftAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSelectionPlatterTopAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setNearbyAccessoriesPlatterTopAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFeedbackPlatterTopAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)feedbackPlatterTopAnchorConstraint;
-(id)accessoryButtonHandler;
-(void)_updatePlaybackPosition:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeLiveButtonHighlighting;
-(unsigned long long)lastEngineMode;
-(void)setLastEngineMode:(unsigned long long)arg1 ;
-(BOOL)_cellBoundsContainsPlayhead:(id)arg1 ;
-(void)changeToLiveMode;
-(void)showDeleteInterface;
-(void)didSelectLeftActionButton:(id)arg1 ;
-(void)didSelectRightActionButton:(id)arg1 ;
-(UIButton *)feedbackButton;
-(void)didSelectFeedbackButton;
-(void)showEditInterface;
-(void)showAssociatedAccessories;
-(UIButton *)nearbyAccessoriesButton;
-(void)exportLocalClipAtURL:(id)arg1 ;
-(void)setExportDownloadOperation:(HMCameraClipFetchVideoAssetContextOperation *)arg1 ;
-(id)_displayableURLForCameraClipURL:(id)arg1 ;
-(void)presentPreviouslySubmittedClipAlert;
-(id)deletionHandler;
-(void)deleteClip;
-(HMCameraClipFetchVideoAssetContextOperation *)exportDownloadOperation;
-(id)endEditingHandler;
-(id)beginEditingHandler;
-(void)presentFeedbackConsent;
-(id)_feedbackClip;
-(void)presentFeedbackOptions;
-(void)verifySubmitAllClips;
-(void)submitAllUnsubmittedClips;
-(void)consentController:(id)arg1 didFinishConsentWithAnswer:(BOOL)arg2 ;
-(id)uploadURLCameraClip:(id)arg1 ;
-(id)outputURLForClip:(id)arg1 ;
-(void)updateTimelineState:(unsigned long long)arg1 ;
-(void)setScrubberView:(HUClipScrubberView *)arg1 ;
-(void)setNearbyAccessoriesButton:(UIButton *)arg1 ;
-(void)setFeedbackButton:(UIButton *)arg1 ;
-(void)setSelectionPlatter:(UIView *)arg1 ;
-(void)setFeedbackPlatter:(UIView *)arg1 ;
-(void)setNearbyAccessoriesPlatter:(UIView *)arg1 ;
@end

