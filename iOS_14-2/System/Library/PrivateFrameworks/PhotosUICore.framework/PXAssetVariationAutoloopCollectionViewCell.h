/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXAssetVariationCollectionViewCell.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@class ISWrappedAVPlayer, PXVideoPlayerView, AVAsset, ISWrappedAVAudioSession, NSString;

@interface PXAssetVariationAutoloopCollectionViewCell : PXAssetVariationCollectionViewCell <ISChangeObserver> {

	ISWrappedAVPlayer* _videoPlayer;
	PXVideoPlayerView* _videoView;
	AVAsset* _displayedAsset;
	ISWrappedAVAudioSession* __audioSession;

}

@property (setter=_setAudioSession:,nonatomic,retain) ISWrappedAVAudioSession * _audioSession;              //@synthesize _audioSession=__audioSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setAudioSession:(id)arg1 ;
-(ISWrappedAVAudioSession *)_audioSession;
-(void)prepareForReuse;
-(id)loadVariationView;
-(void)updateVariationView;
-(void)_updateVideoPlayerRateWithItem:(id)arg1 ;
-(void)_videoStatusDidChange;
-(void)updateError;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

