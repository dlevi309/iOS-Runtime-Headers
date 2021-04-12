/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSDictionary, NSString, AVPlayerController, CALayer;

@interface WebAVPlayerLayer : CALayer {

	RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit> >* _fullscreenInterface;
	RetainPtr<WebAVPlayerController>* _avPlayerController;
	RetainPtr<CALayer>* _videoSublayer;
	RetainPtr<NSString>* _videoGravity;
	BOOL _readyForDisplay;
	NSDictionary* _pixelBufferAttributes;
	CGSize _videoDimensions;
	CGRect _modelVideoLayerFrame;

}

@property (nonatomic,retain) NSString * videoGravity; 
@property (assign,getter=isReadyForDisplay,nonatomic) BOOL readyForDisplay;                   //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (assign,nonatomic) VideoFullscreenInterfaceAVKit* fullscreenInterface; 
@property (nonatomic,retain) AVPlayerController * playerController; 
@property (nonatomic,retain) CALayer * videoSublayer; 
@property (nonatomic,copy) NSDictionary * pixelBufferAttributes;                              //@synthesize pixelBufferAttributes=_pixelBufferAttributes - In the implementation block
@property (assign) CGSize videoDimensions;                                                    //@synthesize videoDimensions=_videoDimensions - In the implementation block
@property (assign) CGRect modelVideoLayerFrame;                                               //@synthesize modelVideoLayerFrame=_modelVideoLayerFrame - In the implementation block
+(id)keyPathsForValuesAffectingVideoRect;
-(id)init;
-(void)dealloc;
-(void)layoutSublayers;
-(NSString *)videoGravity;
-(void)setVideoGravity:(NSString *)arg1 ;
-(VideoFullscreenInterfaceAVKit*)fullscreenInterface;
-(void)setFullscreenInterface:(VideoFullscreenInterfaceAVKit*)arg1 ;
-(void)resolveBounds;
-(CGSize)videoDimensions;
-(CGRect)modelVideoLayerFrame;
-(void)setModelVideoLayerFrame:(CGRect)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)setVideoSublayer:(CALayer *)arg1 ;
-(CALayer *)videoSublayer;
-(CGRect)videoRect;
-(BOOL)isReadyForDisplay;
-(void)setReadyForDisplay:(BOOL)arg1 ;
-(NSDictionary *)pixelBufferAttributes;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(void)setVideoDimensions:(CGSize)arg1 ;
@end

