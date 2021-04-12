/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMAXElementVisionEngine.h>

@class AXMSceneDetectorNode, AXMFaceDetectorNode, AXMTraitDetectorNode, AXMProminentObjectsDetectorNode, AXMCaptionDetectorNode, AXMNSFWDetectorNode, AXMSignificantEventDetectorNode;

@interface AXMVoiceOverVisionEngine : AXMAXElementVisionEngine {

	AXMSceneDetectorNode* _sceneDetector;
	AXMFaceDetectorNode* _faceDetector;
	AXMTraitDetectorNode* _traitDetector;
	AXMProminentObjectsDetectorNode* _prominentObjectsDetector;
	AXMCaptionDetectorNode* _captionDetector;
	AXMNSFWDetectorNode* _nsfwDetector;
	AXMSignificantEventDetectorNode* _significantEventDetector;

}

@property (assign,nonatomic,__weak) AXMSceneDetectorNode * sceneDetector;                                    //@synthesize sceneDetector=_sceneDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMFaceDetectorNode * faceDetector;                                      //@synthesize faceDetector=_faceDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMTraitDetectorNode * traitDetector;                                    //@synthesize traitDetector=_traitDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMProminentObjectsDetectorNode * prominentObjectsDetector;              //@synthesize prominentObjectsDetector=_prominentObjectsDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMCaptionDetectorNode * captionDetector;                                //@synthesize captionDetector=_captionDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMNSFWDetectorNode * nsfwDetector;                                      //@synthesize nsfwDetector=_nsfwDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMSignificantEventDetectorNode * significantEventDetector;              //@synthesize significantEventDetector=_significantEventDetector - In the implementation block
@property (assign,nonatomic) unsigned long long genderStrategy; 
-(id)init;
-(void)setFaceDetector:(AXMFaceDetectorNode *)arg1 ;
-(AXMFaceDetectorNode *)faceDetector;
-(void)setGenderStrategy:(unsigned long long)arg1 ;
-(void)setSceneDetector:(AXMSceneDetectorNode *)arg1 ;
-(AXMSceneDetectorNode *)sceneDetector;
-(unsigned long long)genderStrategy;
-(id)initWithIdentifier:(id)arg1 ;
-(AXMTraitDetectorNode *)traitDetector;
-(void)setTraitDetector:(AXMTraitDetectorNode *)arg1 ;
-(void)setProminentObjectsDetector:(AXMProminentObjectsDetectorNode *)arg1 ;
-(void)setNsfwDetector:(AXMNSFWDetectorNode *)arg1 ;
-(void)setSignificantEventDetector:(AXMSignificantEventDetectorNode *)arg1 ;
-(void)setCaptionDetector:(AXMCaptionDetectorNode *)arg1 ;
-(AXMCaptionDetectorNode *)captionDetector;
-(id)configuredOptionsDisableAllDetectors:(/*^block*/id)arg1 elementOptions:(unsigned)arg2 textRecognitionLevel:(/*^block*/id)arg3 textDetectionLocales:(/*^block*/id)arg4 preferringFullCaptions:(BOOL)arg5 ;
-(AXMProminentObjectsDetectorNode *)prominentObjectsDetector;
-(AXMNSFWDetectorNode *)nsfwDetector;
-(AXMSignificantEventDetectorNode *)significantEventDetector;
@end

