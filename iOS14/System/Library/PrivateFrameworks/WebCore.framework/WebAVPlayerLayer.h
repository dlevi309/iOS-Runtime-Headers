/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSDictionary, NSString, AVPlayerController, CALayer;

@interface WebAVPlayerLayer : CALayer {

	RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit> >* _fullscreenInterface;
	RetainPtr<WebAVPlayerController>* _avPlayerController;
	RetainPtr<CALayer>* _videoSublayer;
	FloatRect _videoSublayerFrame;
	RetainPtr<NSString>* _videoGravity;
	RetainPtr<NSString>* _previousVideoGravity;
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
-(void)layoutSublayers;
-(void)setVideoGravity:(NSString *)arg1 ;
-(NSString *)videoGravity;
-(id)init;
-(NSDictionary *)pixelBufferAttributes;
-(CALayer *)videoSublayer;
-(VideoFullscreenInterfaceAVKit*)fullscreenInterface;
-(CGSize)videoDimensions;
-(void)setFullscreenInterface:(VideoFullscreenInterfaceAVKit*)arg1 ;
-(CGRect)modelVideoLayerFrame;
-(void)setModelVideoLayerFrame:(CGRect)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)setVideoSublayer:(CALayer *)arg1 ;
-(void)setReadyForDisplay:(BOOL)arg1 ;
-(void)setVideoDimensions:(CGSize)arg1 ;
-(BOOL)isReadyForDisplay;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(CGRect)videoRect;
-(void)resolveBounds;
-(void)dealloc;
@end

