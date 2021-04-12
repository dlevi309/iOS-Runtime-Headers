/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCVideoOutput.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>

@protocol MPCVideoOutputDelegate;
@class UIViewController, AVPlayerViewController, NSString;

@interface _MPCVideoViewControllerMediaFoundationImplementation : NSObject <MPCVideoOutput, AVPlayerViewControllerDelegate> {

	id<MPCVideoOutputDelegate> _videoOutputDelegate;
	AVPlayerViewController* _internalController;

}

@property (nonatomic,readonly) AVPlayerViewController * internalController;                      //@synthesize internalController=_internalController - In the implementation block
@property (assign,nonatomic,__weak) id<MPCVideoOutputDelegate> videoOutputDelegate;              //@synthesize videoOutputDelegate=_videoOutputDelegate - In the implementation block
@property (nonatomic,readonly) UIViewController * playerViewController; 
@property (nonatomic,readonly) AVPlayerViewController * avPlayerViewController; 
@property (assign,nonatomic) BOOL showsPlaybackControls; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingReadyForDisplay;
+(id)keyPathsForValuesAffectingVideoBounds;
-(void)setVideoGravity:(NSString *)arg1 ;
-(NSString *)videoGravity;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)showFullScreenPresentationFromView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)debugDescription;
-(void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(UIViewController *)playerViewController;
-(BOOL)isReadyForDisplay;
-(void)exitFullScreenWithCompletion:(/*^block*/id)arg1 ;
-(void)enterFullScreenWithCompletion:(/*^block*/id)arg1 ;
-(void)setShowsPlaybackControls:(BOOL)arg1 ;
-(BOOL)showsPlaybackControls;
-(AVPlayerViewController *)avPlayerViewController;
-(CGRect)videoBounds;
-(id<MPCVideoOutputDelegate>)videoOutputDelegate;
-(void)setVideoOutputDelegate:(id<MPCVideoOutputDelegate>)arg1 ;
-(AVPlayerViewController *)internalController;
@end

