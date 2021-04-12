/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoKitMediaProviderDownloadSimulation.h>

@class PHAnimatedImage, NSDictionary;

@interface PUPhotoKitMediaProviderAnimatedImageDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation {

	/*^block*/id _externalProgressHandler;
	/*^block*/id _internalProgressHandler;
	/*^block*/id _externalResultHandler;
	/*^block*/id _internalResultHandler;
	PHAnimatedImage* __resultAnimatedImage;
	NSDictionary* __resultInfo;

}

@property (setter=_setResultAnimatedImage:,nonatomic,retain) PHAnimatedImage * _resultAnimatedImage;              //@synthesize _resultAnimatedImage=__resultAnimatedImage - In the implementation block
@property (setter=_setResultInfo:,nonatomic,copy) NSDictionary * _resultInfo;                                     //@synthesize _resultInfo=__resultInfo - In the implementation block
@property (nonatomic,copy) id externalProgressHandler;                                                            //@synthesize externalProgressHandler=_externalProgressHandler - In the implementation block
@property (nonatomic,copy,readonly) id internalProgressHandler;                                                   //@synthesize internalProgressHandler=_internalProgressHandler - In the implementation block
@property (nonatomic,copy) id externalResultHandler;                                                              //@synthesize externalResultHandler=_externalResultHandler - In the implementation block
@property (nonatomic,copy,readonly) id internalResultHandler;                                                     //@synthesize internalResultHandler=_internalResultHandler - In the implementation block
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
-(void)_handleResultAnimatedImage:(id)arg1 info:(id)arg2 ;
-(PHAnimatedImage *)_resultAnimatedImage;
-(void)_setResultAnimatedImage:(id)arg1 ;
@end

