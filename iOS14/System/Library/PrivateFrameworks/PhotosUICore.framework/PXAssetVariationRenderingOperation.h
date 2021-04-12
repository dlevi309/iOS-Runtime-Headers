/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <Foundation/NSOperation.h>

@class PLLivePhotoEditSource, NSDictionary, PICompositionController, NSURL, UIImage, AVAsset, AVVideoComposition, NSProgress, NSError, NSNumber;

@interface PXAssetVariationRenderingOperation : NSOperation {

	BOOL _renderAllResources;
	BOOL _succeeded;
	long long _variationType;
	PLLivePhotoEditSource* _editSource;
	PLLivePhotoEditSource* _overcaptureEditSource;
	NSDictionary* _analysisResult;
	PICompositionController* _baseCompositionController;
	/*^block*/id _startHandler;
	NSURL* _outputImageURL;
	UIImage* _outputImage;
	NSURL* _outputVideoURL;
	PICompositionController* _adjustedCompositionController;
	AVAsset* _outputAVAsset;
	AVVideoComposition* _outputVideoComposition;
	NSProgress* _progress;
	NSError* _error;
	NSNumber* _duration;
	CGSize _targetSize;

}

@property (nonatomic,readonly) long long variationType;                                                   //@synthesize variationType=_variationType - In the implementation block
@property (nonatomic,readonly) PLLivePhotoEditSource * editSource;                                        //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,readonly) PLLivePhotoEditSource * overcaptureEditSource;                             //@synthesize overcaptureEditSource=_overcaptureEditSource - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * analysisResult;                                        //@synthesize analysisResult=_analysisResult - In the implementation block
@property (nonatomic,copy,readonly) PICompositionController * baseCompositionController;                  //@synthesize baseCompositionController=_baseCompositionController - In the implementation block
@property (nonatomic,readonly) CGSize targetSize;                                                         //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) BOOL renderAllResources;                                                   //@synthesize renderAllResources=_renderAllResources - In the implementation block
@property (nonatomic,copy) id startHandler;                                                               //@synthesize startHandler=_startHandler - In the implementation block
@property (nonatomic,readonly) NSURL * outputImageURL;                                                    //@synthesize outputImageURL=_outputImageURL - In the implementation block
@property (nonatomic,readonly) UIImage * outputImage;                                                     //@synthesize outputImage=_outputImage - In the implementation block
@property (nonatomic,readonly) NSURL * outputVideoURL;                                                    //@synthesize outputVideoURL=_outputVideoURL - In the implementation block
@property (nonatomic,copy,readonly) PICompositionController * adjustedCompositionController;              //@synthesize adjustedCompositionController=_adjustedCompositionController - In the implementation block
@property (nonatomic,readonly) AVAsset * outputAVAsset;                                                   //@synthesize outputAVAsset=_outputAVAsset - In the implementation block
@property (nonatomic,readonly) AVVideoComposition * outputVideoComposition;                               //@synthesize outputVideoComposition=_outputVideoComposition - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL succeeded;                                                            //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                                                       //@synthesize duration=_duration - In the implementation block
-(CGSize)targetSize;
-(BOOL)succeeded;
-(NSProgress *)progress;
-(id)init;
-(void)setStartHandler:(id)arg1 ;
-(id)startHandler;
-(NSError *)error;
-(void)main;
-(long long)variationType;
-(NSDictionary *)analysisResult;
-(NSURL *)outputImageURL;
-(NSURL *)outputVideoURL;
-(PICompositionController *)adjustedCompositionController;
-(AVAsset *)outputAVAsset;
-(AVVideoComposition *)outputVideoComposition;
-(id)initWithEditSource:(id)arg1 overcaptureEditSource:(id)arg2 variationType:(long long)arg3 analysisResult:(id)arg4 baseCompositionController:(id)arg5 outputImageURL:(id)arg6 outputVideoURL:(id)arg7 targetSize:(CGSize)arg8 renderAllResources:(BOOL)arg9 ;
-(void)_incrementProgressWithStartDate:(id)arg1 ;
-(BOOL)renderAllResources;
-(UIImage *)outputImage;
-(NSNumber *)duration;
-(void)cancel;
-(void)_timeout;
-(PICompositionController *)baseCompositionController;
-(PLLivePhotoEditSource *)editSource;
-(PLLivePhotoEditSource *)overcaptureEditSource;
@end

