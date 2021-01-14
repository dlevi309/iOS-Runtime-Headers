/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoKitMediaProviderDownloadSimulation.h>

@class AVAsset, AVAudioMix, NSDictionary;

@interface PUPhotoKitMediaProviderAVAssetDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation {

	/*^block*/id _externalProgressHandler;
	/*^block*/id _internalProgressHandler;
	/*^block*/id _externalResultHandler;
	/*^block*/id _internalResultHandler;
	AVAsset* __resultAVAsset;
	AVAudioMix* __resultAudioMix;
	NSDictionary* __resultInfo;

}

@property (setter=_setResultAVAsset:,nonatomic,retain) AVAsset * _resultAVAsset;                   //@synthesize _resultAVAsset=__resultAVAsset - In the implementation block
@property (setter=_setResultAudioMix:,nonatomic,retain) AVAudioMix * _resultAudioMix;              //@synthesize _resultAudioMix=__resultAudioMix - In the implementation block
@property (setter=_setResultInfo:,nonatomic,copy) NSDictionary * _resultInfo;                      //@synthesize _resultInfo=__resultInfo - In the implementation block
@property (nonatomic,copy) id externalProgressHandler;                                             //@synthesize externalProgressHandler=_externalProgressHandler - In the implementation block
@property (nonatomic,copy,readonly) id internalProgressHandler;                                    //@synthesize internalProgressHandler=_internalProgressHandler - In the implementation block
@property (nonatomic,copy) id externalResultHandler;                                               //@synthesize externalResultHandler=_externalResultHandler - In the implementation block
@property (nonatomic,copy,readonly) id internalResultHandler;                                      //@synthesize internalResultHandler=_internalResultHandler - In the implementation block
-(id)init;
-(NSDictionary *)_resultInfo;
-(id)internalResultHandler;
-(id)internalProgressHandler;
-(void)setExternalResultHandler:(id)arg1 ;
-(void)setExternalProgressHandler:(id)arg1 ;
-(void)updateSimulationWithProgress:(double)arg1 ;
-(void)endSimulationWithError:(id)arg1 ;
-(id)externalProgressHandler;
-(id)externalResultHandler;
-(void)_setResultInfo:(id)arg1 ;
-(void)_handleResultAVAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3 ;
-(AVAsset *)_resultAVAsset;
-(void)_setResultAVAsset:(id)arg1 ;
-(AVAudioMix *)_resultAudioMix;
-(void)_setResultAudioMix:(id)arg1 ;
@end

