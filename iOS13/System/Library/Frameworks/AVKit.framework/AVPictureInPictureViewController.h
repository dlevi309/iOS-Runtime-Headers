/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PGPictureInPictureViewController.h>

@protocol AVPictureInPictureViewControllerDelegate;
@class AVPlayerController, AVPictureInPicturePlayerLayerView, NSString;

@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController> {

	BOOL _shouldShowAlternateActionButtonImage;
	AVPlayerController* _playerController;
	AVPictureInPicturePlayerLayerView* _pictureInPicturePlayerLayerView;
	id<AVPictureInPictureViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) AVPlayerController * playerController;                                              //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,readonly) AVPictureInPicturePlayerLayerView * pictureInPicturePlayerLayerView;              //@synthesize pictureInPicturePlayerLayerView=_pictureInPicturePlayerLayerView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAlternateActionButtonImage;                                          //@synthesize shouldShowAlternateActionButtonImage=_shouldShowAlternateActionButtonImage - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPictureViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldShowLoadingIndicator; 
+(id)keyPathsForValuesAffectingShouldShowLoadingIndicator;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<AVPictureInPictureViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AVPictureInPictureViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPictureInPicturePlayerLayerView *)pictureInPicturePlayerLayerView;
-(void)willAnimatePictureInPictureStart;
-(void)didAnimatePictureInPictureStop;
-(void)actionButtonTapped;
-(BOOL)shouldShowAlternateActionButtonImage;
-(BOOL)shouldShowLoadingIndicator;
-(id)initWithPictureInPicturePlayerLayerView:(id)arg1 ;
-(void)setShouldShowAlternateActionButtonImage:(BOOL)arg1 ;
@end

