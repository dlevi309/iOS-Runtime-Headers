/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>

@protocol MRUCoverSheetViewControllerDelegate;
@class NSArray, MRUVisualStylingProvider, MRUNowPlayingViewController, MediaControlsInteractionRecognizer, NSString;

@interface MRUCoverSheetViewController : UIViewController <UIGestureRecognizerDelegate, MTVisualStylingRequiring> {

	id<MRUCoverSheetViewControllerDelegate> _delegate;
	MRUVisualStylingProvider* _stylingProvider;
	MRUNowPlayingViewController* _nowPlayingViewController;
	MediaControlsInteractionRecognizer* _interactionRecognizer;

}

@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (nonatomic,retain) MRUNowPlayingViewController * nowPlayingViewController;                  //@synthesize nowPlayingViewController=_nowPlayingViewController - In the implementation block
@property (nonatomic,retain) MediaControlsInteractionRecognizer * interactionRecognizer;              //@synthesize interactionRecognizer=_interactionRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<MRUCoverSheetViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(NSArray *)requiredVisualStyleCategories;
-(id<MRUCoverSheetViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MRUCoverSheetViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(MRUNowPlayingViewController *)nowPlayingViewController;
-(void)setNowPlayingViewController:(MRUNowPlayingViewController *)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)didReceiveInteraction:(id)arg1 ;
-(MediaControlsInteractionRecognizer *)interactionRecognizer;
-(void)setInteractionRecognizer:(MediaControlsInteractionRecognizer *)arg1 ;
@end

