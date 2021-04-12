/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/PVCompositeDelegate.h>

@class CFXAnimojiEffectRenderer, ARFrame, AVAsset, AVAssetTrack, AVAssetReaderTrackOutput, AVAssetReader, PVCMSampleBuffer, AVAssetReaderOutputMetadataAdaptor, AVMetadataItem;

@interface CFXAnimojiPlaybackDelegate : NSObject <PVCompositeDelegate> {

	CFXAnimojiEffectRenderer* _animojiRenderer;
	ARFrame* _stillImageARFrame;
	AVAsset* _assetWithDepthVideoTrack;
	AVAssetTrack* _depthVideoTrack;
	AVAssetReaderTrackOutput* _depthVideoTrackReaderOutput;
	AVAssetReader* _depthVideoAssetReader;
	PVCMSampleBuffer* _currentDepthSample;
	PVCMSampleBuffer* _nextDepthSample;
	AVAssetTrack* _metadataAssetTrack;
	AVAssetReader* _metadataAssetReader;
	AVAssetReaderTrackOutput* _metadataTrackReaderOutput;
	AVAssetReaderOutputMetadataAdaptor* _assetReaderOutputMetadataAdaptor;
	AVMetadataItem* _currentMetadataItem;
	AVMetadataItem* _nextMetadataItem;

}

@property (nonatomic,retain) CFXAnimojiEffectRenderer * animojiRenderer;                                         //@synthesize animojiRenderer=_animojiRenderer - In the implementation block
@property (nonatomic,retain) ARFrame * stillImageARFrame;                                                        //@synthesize stillImageARFrame=_stillImageARFrame - In the implementation block
@property (nonatomic,retain) AVAsset * assetWithDepthVideoTrack;                                                 //@synthesize assetWithDepthVideoTrack=_assetWithDepthVideoTrack - In the implementation block
@property (nonatomic,retain) AVAssetTrack * depthVideoTrack;                                                     //@synthesize depthVideoTrack=_depthVideoTrack - In the implementation block
@property (nonatomic,retain) AVAssetReaderTrackOutput * depthVideoTrackReaderOutput;                             //@synthesize depthVideoTrackReaderOutput=_depthVideoTrackReaderOutput - In the implementation block
@property (nonatomic,retain) AVAssetReader * depthVideoAssetReader;                                              //@synthesize depthVideoAssetReader=_depthVideoAssetReader - In the implementation block
@property (nonatomic,retain) PVCMSampleBuffer * currentDepthSample;                                              //@synthesize currentDepthSample=_currentDepthSample - In the implementation block
@property (nonatomic,retain) PVCMSampleBuffer * nextDepthSample;                                                 //@synthesize nextDepthSample=_nextDepthSample - In the implementation block
@property (nonatomic,retain) AVAssetTrack * metadataAssetTrack;                                                  //@synthesize metadataAssetTrack=_metadataAssetTrack - In the implementation block
@property (nonatomic,retain) AVAssetReader * metadataAssetReader;                                                //@synthesize metadataAssetReader=_metadataAssetReader - In the implementation block
@property (nonatomic,retain) AVAssetReaderTrackOutput * metadataTrackReaderOutput;                               //@synthesize metadataTrackReaderOutput=_metadataTrackReaderOutput - In the implementation block
@property (nonatomic,retain) AVAssetReaderOutputMetadataAdaptor * assetReaderOutputMetadataAdaptor;              //@synthesize assetReaderOutputMetadataAdaptor=_assetReaderOutputMetadataAdaptor - In the implementation block
@property (nonatomic,retain) AVMetadataItem * currentMetadataItem;                                               //@synthesize currentMetadataItem=_currentMetadataItem - In the implementation block
@property (nonatomic,retain) AVMetadataItem * nextMetadataItem;                                                  //@synthesize nextMetadataItem=_nextMetadataItem - In the implementation block
-(id)initWithAssetURL:(id)arg1 ;
-(void)CFX_setUpMetadataReaderForTrack:(id)arg1 ;
-(ARFrame *)stillImageARFrame;
-(void)CFX_updateCurrentMetadataItemForTime:(SCD_Struct_JT6)arg1 ;
-(AVMetadataItem *)currentMetadataItem;
-(AVAssetReader *)metadataAssetReader;
-(void)setMetadataTrackReaderOutput:(AVAssetReaderTrackOutput *)arg1 ;
-(AVAssetTrack *)metadataAssetTrack;
-(AVMetadataItem *)nextMetadataItem;
-(void)setCurrentMetadataItem:(AVMetadataItem *)arg1 ;
-(void)setNextMetadataItem:(AVMetadataItem *)arg1 ;
-(id)renderWithInputs:(id)arg1 time:(SCD_Struct_JT6)arg2 metadata:(id)arg3 ;
-(id)initWithImageARFrame:(id)arg1 ;
-(void)setStillImageARFrame:(ARFrame *)arg1 ;
-(void)setMetadataAssetTrack:(AVAssetTrack *)arg1 ;
-(void)setMetadataAssetReader:(AVAssetReader *)arg1 ;
-(AVAssetReaderTrackOutput *)metadataTrackReaderOutput;
-(AVAssetReaderOutputMetadataAdaptor *)assetReaderOutputMetadataAdaptor;
-(void)setAssetReaderOutputMetadataAdaptor:(AVAssetReaderOutputMetadataAdaptor *)arg1 ;
-(CFXAnimojiEffectRenderer *)animojiRenderer;
-(void)setAnimojiRenderer:(CFXAnimojiEffectRenderer *)arg1 ;
-(void)CFX_setUpDepthReaderForTrack:(id)arg1 ;
-(id)CFX_ARFrameForTime:(SCD_Struct_JT6)arg1 depthTexture:(id*)arg2 ;
-(void)CFX_updateCurrentDepthBufferForTime:(SCD_Struct_JT6)arg1 ;
-(PVCMSampleBuffer *)currentDepthSample;
-(AVAssetReader *)depthVideoAssetReader;
-(void)setDepthVideoTrackReaderOutput:(AVAssetReaderTrackOutput *)arg1 ;
-(void)setDepthVideoAssetReader:(AVAssetReader *)arg1 ;
-(AVAssetTrack *)depthVideoTrack;
-(PVCMSampleBuffer *)nextDepthSample;
-(void)setCurrentDepthSample:(PVCMSampleBuffer *)arg1 ;
-(AVAssetReaderTrackOutput *)depthVideoTrackReaderOutput;
-(void)setNextDepthSample:(PVCMSampleBuffer *)arg1 ;
-(AVAsset *)assetWithDepthVideoTrack;
-(void)setAssetWithDepthVideoTrack:(AVAsset *)arg1 ;
-(void)setDepthVideoTrack:(AVAssetTrack *)arg1 ;
@end

