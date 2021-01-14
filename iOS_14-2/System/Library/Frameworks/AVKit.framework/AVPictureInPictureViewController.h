/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PGPictureInPictureViewController.h>

@protocol AVPictureInPictureViewControllerDelegate;
@class AVPictureInPicturePlayerLayerView, AVPlayerController, NSString;

@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController> {

	BOOL _shouldShowAlternateActionButtonImage;
	AVPictureInPicturePlayerLayerView* _pictureInPicturePlayerLayerView;
	AVPlayerController* _playerController;
	id<AVPictureInPictureViewControllerDelegate> _delegate;
	AVPictureInPictureViewController* _contentViewController;

}

@property (nonatomic,retain) AVPlayerController * playerController;                                              //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,readonly) AVPictureInPicturePlayerLayerView * pictureInPicturePlayerLayerView;              //@synthesize pictureInPicturePlayerLayerView=_pictureInPicturePlayerLayerView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAlternateActionButtonImage;                                          //@synthesize shouldShowAlternateActionButtonImage=_shouldShowAlternateActionButtonImage - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPictureViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVPictureInPictureViewController * contentViewController;                           //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowLoadingIndicator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<AVPictureInPictureViewControllerDelegate>)delegate;
-(void)setContentViewController:(AVPictureInPictureViewController *)arg1 ;
-(AVPictureInPictureViewController *)contentViewController;
-(AVPlayerController *)playerController;
-(void)setDelegate:(id<AVPictureInPictureViewControllerDelegate>)arg1 ;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPictureInPicturePlayerLayerView *)pictureInPicturePlayerLayerView;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)willAnimatePictureInPictureStart;
-(void)didAnimatePictureInPictureStop;
-(BOOL)shouldShowAlternateActionButtonImage;
-(id)initWithPictureInPicturePlayerLayerView:(id)arg1 ;
-(void)setShouldShowAlternateActionButtonImage:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

