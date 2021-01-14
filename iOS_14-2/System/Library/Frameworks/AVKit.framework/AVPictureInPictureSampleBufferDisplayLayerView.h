/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPictureInPicturePlayerLayerView.h>

@class AVSampleBufferDisplayLayer, AVObservationController, AVSampleBufferDisplayLayerPlayerController, AVPictureInPictureIndicatorLayer, AVPictureInPictureSampleBufferDisplayLayerHostView, CALayerHost;

@interface AVPictureInPictureSampleBufferDisplayLayerView : AVPictureInPicturePlayerLayerView {

	BOOL _PIPModeEnabled;
	unsigned _sourceContextId;
	AVSampleBufferDisplayLayer* _sourceLayer;
	AVObservationController* _observationController;
	AVSampleBufferDisplayLayerPlayerController* _playerController;
	AVPictureInPictureIndicatorLayer* _placeholderLayer;
	AVPictureInPictureSampleBufferDisplayLayerHostView* _sbdlHostView;
	CALayerHost* _sourceLayerHost;
	CGSize _lastKnownRenderSize;
	CGSize _imageQueueSize;

}

@property (nonatomic,retain) AVObservationController * observationController;                                //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) AVSampleBufferDisplayLayerPlayerController * playerController;                  //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,retain) AVPictureInPictureIndicatorLayer * placeholderLayer;                            //@synthesize placeholderLayer=_placeholderLayer - In the implementation block
@property (nonatomic,retain) AVPictureInPictureSampleBufferDisplayLayerHostView * sbdlHostView;              //@synthesize sbdlHostView=_sbdlHostView - In the implementation block
@property (assign,nonatomic,__weak) CALayerHost * sourceLayerHost;                                           //@synthesize sourceLayerHost=_sourceLayerHost - In the implementation block
@property (assign,nonatomic) unsigned sourceContextId;                                                       //@synthesize sourceContextId=_sourceContextId - In the implementation block
@property (assign,nonatomic) CGSize lastKnownRenderSize;                                                     //@synthesize lastKnownRenderSize=_lastKnownRenderSize - In the implementation block
@property (assign,nonatomic) CGSize imageQueueSize;                                                          //@synthesize imageQueueSize=_imageQueueSize - In the implementation block
@property (nonatomic,readonly) AVSampleBufferDisplayLayer * sourceLayer;                                     //@synthesize sourceLayer=_sourceLayer - In the implementation block
@property (assign,getter=isPIPModeEnabled,nonatomic) BOOL PIPModeEnabled;                                    //@synthesize PIPModeEnabled=_PIPModeEnabled - In the implementation block
-(void)_updateGeometry;
-(CGSize)imageQueueSize;
-(void)setImageQueueSize:(CGSize)arg1 ;
-(unsigned)sourceContextId;
-(void)setSourceContextId:(unsigned)arg1 ;
-(AVSampleBufferDisplayLayerPlayerController *)playerController;
-(void)setPlayerController:(AVSampleBufferDisplayLayerPlayerController *)arg1 ;
-(void)layoutSubviews;
-(BOOL)isPIPModeEnabled;
-(void)setPIPModeEnabled:(BOOL)arg1 ;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(AVSampleBufferDisplayLayer *)sourceLayer;
-(id)initWithSourceLayer:(id)arg1 playerController:(id)arg2 ;
-(AVPictureInPictureIndicatorLayer *)placeholderLayer;
-(void)setLastKnownRenderSize:(CGSize)arg1 ;
-(id)_makePictureInPicturePlatformAdapterContentPlaceholderLayer;
-(void)setPlaceholderLayer:(AVPictureInPictureIndicatorLayer *)arg1 ;
-(AVPictureInPictureSampleBufferDisplayLayerHostView *)sbdlHostView;
-(void)setSbdlHostView:(AVPictureInPictureSampleBufferDisplayLayerHostView *)arg1 ;
-(CALayerHost *)sourceLayerHost;
-(void)setSourceLayerHost:(CALayerHost *)arg1 ;
-(CGSize)lastKnownRenderSize;
-(AVObservationController *)observationController;
-(void)dealloc;
@end

