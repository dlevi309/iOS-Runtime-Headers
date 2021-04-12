/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/PVCompositeDelegate.h>

@class ARFrame, JTFaceAnchor, AVAssetTrack, AVAssetReader, AVAssetReaderTrackOutput, AVAssetReaderOutputMetadataAdaptor, AVMetadataItem;

@interface CFXFaceTrackingPlaybackDelegate : NSObject <PVCompositeDelegate> {

	ARFrame* _stillImageARFrame;
	JTFaceAnchor* _stillImageFaceAnchor;
	AVAssetTrack* _metadataAssetTrack;
	AVAssetTrack* _arFrameMetadataAssetTrack;
	AVAssetTrack* _faceAnchorMetadataAssetTrack;
	AVAssetReader* _metadataAssetReader;
	AVAssetReaderTrackOutput* _metadataTrackReaderOutput;
	AVAssetReaderOutputMetadataAdaptor* _assetReaderOutputMetadataAdaptor;
	AVMetadataItem* _currentMetadataItem;
	AVMetadataItem* _nextMetadataItem;

}

@property (nonatomic,retain) ARFrame * stillImageARFrame;                                                        //@synthesize stillImageARFrame=_stillImageARFrame - In the implementation block
@property (nonatomic,retain) JTFaceAnchor * stillImageFaceAnchor;                                                //@synthesize stillImageFaceAnchor=_stillImageFaceAnchor - In the implementation block
@property (nonatomic,retain) AVAssetTrack * metadataAssetTrack;                                                  //@synthesize metadataAssetTrack=_metadataAssetTrack - In the implementation block
@property (nonatomic,retain) AVAssetTrack * arFrameMetadataAssetTrack;                                           //@synthesize arFrameMetadataAssetTrack=_arFrameMetadataAssetTrack - In the implementation block
@property (nonatomic,retain) AVAssetTrack * faceAnchorMetadataAssetTrack;                                        //@synthesize faceAnchorMetadataAssetTrack=_faceAnchorMetadataAssetTrack - In the implementation block
@property (nonatomic,retain) AVAssetReader * metadataAssetReader;                                                //@synthesize metadataAssetReader=_metadataAssetReader - In the implementation block
@property (nonatomic,retain) AVAssetReaderTrackOutput * metadataTrackReaderOutput;                               //@synthesize metadataTrackReaderOutput=_metadataTrackReaderOutput - In the implementation block
@property (nonatomic,retain) AVAssetReaderOutputMetadataAdaptor * assetReaderOutputMetadataAdaptor;              //@synthesize assetReaderOutputMetadataAdaptor=_assetReaderOutputMetadataAdaptor - In the implementation block
@property (nonatomic,retain) AVMetadataItem * currentMetadataItem;                                               //@synthesize currentMetadataItem=_currentMetadataItem - In the implementation block
@property (nonatomic,retain) AVMetadataItem * nextMetadataItem;                                                  //@synthesize nextMetadataItem=_nextMetadataItem - In the implementation block
-(id)initWithAssetURL:(id)arg1 ;
-(void)CFX_setUpMetadataReaderForTrack:(id)arg1 ;
-(id)CFX_ARFrameForTime:(SCD_Struct_CF2)arg1 ;
-(ARFrame *)stillImageARFrame;
-(id)CFX_JTFaceAnchorForTime:(SCD_Struct_CF2)arg1 ;
-(JTFaceAnchor *)stillImageFaceAnchor;
-(void)CFX_updateCurrentMetadataItemForTime:(SCD_Struct_CF2)arg1 ;
-(AVMetadataItem *)currentMetadataItem;
-(AVAssetReader *)metadataAssetReader;
-(void)setMetadataTrackReaderOutput:(AVAssetReaderTrackOutput *)arg1 ;
-(AVAssetTrack *)metadataAssetTrack;
-(AVMetadataItem *)nextMetadataItem;
-(void)setCurrentMetadataItem:(AVMetadataItem *)arg1 ;
-(void)setNextMetadataItem:(AVMetadataItem *)arg1 ;
-(id)renderWithInputs:(id)arg1 time:(SCD_Struct_CF2)arg2 metadata:(id)arg3 ;
-(id)initWithImageARFrame:(id)arg1 ;
-(id)initWithImageFaceAnchor:(id)arg1 ;
-(void)setStillImageARFrame:(ARFrame *)arg1 ;
-(void)setStillImageFaceAnchor:(JTFaceAnchor *)arg1 ;
-(void)setMetadataAssetTrack:(AVAssetTrack *)arg1 ;
-(AVAssetTrack *)arFrameMetadataAssetTrack;
-(void)setArFrameMetadataAssetTrack:(AVAssetTrack *)arg1 ;
-(AVAssetTrack *)faceAnchorMetadataAssetTrack;
-(void)setFaceAnchorMetadataAssetTrack:(AVAssetTrack *)arg1 ;
-(void)setMetadataAssetReader:(AVAssetReader *)arg1 ;
-(AVAssetReaderTrackOutput *)metadataTrackReaderOutput;
-(AVAssetReaderOutputMetadataAdaptor *)assetReaderOutputMetadataAdaptor;
-(void)setAssetReaderOutputMetadataAdaptor:(AVAssetReaderOutputMetadataAdaptor *)arg1 ;
@end

